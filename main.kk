import std/data/hashmap
import std/data/hashset
import std/data/hash
import std/core/undiv
import std/core/unsafe

fun hashset/list(set: hash-set<a>): list<a> {
  pretend-no-div(fn() {
    var retList := []
    set.foreach(fn(x) retList := Cons(x, retList))
    retList
  })
}

fun hashset/(==)(a: hash-set<a>, b: hash-set<a>, ?(==): (a, a) -> bool): bool {
  a.list == b.list
}

fun hashset/show(set: hash-set<a>, ?show: (a) -> string): string {
  set.list.show
}

fun hashset/union(a: hash-set<a>, b: hash-set<a>, ?(==): (a, a) -> bool, ?hash: (a, int64) -> int): hash-set<a> {
  thread/list/hash-set(a.list ++ b.list)
}

fun hashmap/(==)(a: hash-map<k, v>, b: hash-map<k, v>, ?(==): (k, k) -> bool, ?hash: (k, int64) -> int, ?value/(==): (v, v) -> bool): bool {
  a.length == b.length
  && ({
    var allMatch := True
    a.foreach(fn(key, aValue) match b.get(key) {
      Just(bValue) -> allMatch := (allMatch && (aValue == bValue))
      Nothing -> allMatch := False
    })
    allMatch
  })()
}

fun hashmap/show(map: hash-map<k, v>, ?key/show: k -> string, ?value/show: v -> string): string {
  var result := "{"
  map.foreach(fn(k, v) -> result := result ++ "(" ++ k.key/show ++ "," ++ v.value/show ++ ")")
  result ++ "}"
}

value type fieldName {
  FNNamed(name: string)
  FNL
}

fun fieldName/(==)(a: fieldName, b: fieldName): bool {
  match (a, b) {
    (FNNamed(aName), FNNamed(bName)) -> aName == bName
    (FNL, FNL) -> True
    _ -> False
  }
}

fun fieldName/show(fieldName: fieldName): string {
  match fieldName {
    FNNamed(name) -> "FNNamed(" ++ name ++ ")"
    FNL -> "FNL"
  }
}

fun fieldName/hash(fieldName: fieldName, x: int64): int {
  match fieldName {
    FNNamed(name) -> name.hash(x)
    FNL -> 0
  }
}

struct varName {
  name: string
}

fun varName/(==)(a: varName, b: varName): bool {
  a.name == b.name
}

fun varName/show(varName: varName): string {
  "VarName(" ++ varName.name ++ ")"
}

fun varName/hash(varName: varName, x: int64): int {
  varName.varName/name.string/hash(x)
}

value type literal {
  StringLit(str: string)
  NumberLit(num: int)
}

fun literal/(==)(a: literal, b: literal): bool {
  match (a, b) {
    (StringLit(aStr), StringLit(bStr)) -> aStr == bStr
    (NumberLit(aNum), NumberLit(bNum)) -> aNum == bNum
    _ -> False
  }
}

fun literal/show(lit: literal): string {
  match lit {
    StringLit(str) -> str.show
    NumberLit(num) -> num.show
  }
}

fun literal/hash(a: literal, x: int64): int {
  match a {
    StringLit(str) -> str.hash(x)
    NumberLit(num) -> num.hash(x)
  }
}

type op {
  AndOp
  NotOp
  EqOp
  GtOp
  PlusOp
}

fun op/(==)(a: op, b: op): bool {
  match (a, b) {
    (AndOp, AndOp) -> True
    (NotOp, NotOp) -> True
    (EqOp, EqOp) -> True
    (GtOp, GtOp) -> True
    (PlusOp, PlusOp) -> True
    _ -> False
  }
}

fun op/show(op: op): string {
  match op {
    AndOp -> "AndOp"
    NotOp -> "NotOp"
    EqOp -> "EqOp"
    GtOp -> "GtOp"
    PlusOp -> "PlusOp"
  }
}

fun op/hash(op: op, x: int64): int {
  match op {
    AndOp -> 0
    NotOp -> 1
    EqOp -> 2
    GtOp -> 3
    PlusOp -> 4
  }
}

struct path {
  names: list<fieldName>
  absOp: absOp
  dependence: bool
}

fun path/eqDiv(a: path, b: path): div bool {
  a.names == b.names && eqDiv(a.absOp, b.absOp) && a.dependence == b.dependence
}

fun path/(==)(a: path, b: path): bool {
  pretend-no-div(fn() eqDiv(a, b))
}

fun path/showDiv(path: path): div string {
  "Path(" ++ path.names.show ++ ", " ++ path.absOp.showDiv ++ ", " ++ path.dependence.show ++ ")"
}

fun path/show(path: path): string {
  pretend-no-div(fn() showDiv(path))
}

fun path/divHash(path: path, x: int64): div int {
  path.names.list/hash(fieldName/hash, x) + path.absOp.absOp/divHash(x) + path.dependence.hash(x)
}

fun path/hash(path: path, x: int64): int {
  pretend-no-div(fn() divHash(path, x))
}

type pathExp {
  PEEmpty
  PEAV(exp: exp)
  PEAVDot(exp: exp)
  PEValue(names: list<fieldName>, queryCondition: absOpExp, dependence: bool)
  PETS(exp: exp)
  PEP(exp: exp)
  PEUnion(a: pathExp, b: pathExp)
  PECond(cond: exp, thn: pathExp, els: pathExp)
}

type absOp {
  AOTrue // This is different than the paper
  AOOp(op: op, values: list<absValue>)
}

fun absOp/eqDiv(a: absOp, b: absOp): div bool {
  match (a, b) {
    (AOTrue, AOTrue) -> True
    (AOOp(aOp, aValues), AOOp(bOp, bValues)) ->
      aOp == bOp && (==)(aValues, bValues, ?(==) = fn(aValue, bValue) pretend-no-div(fn() eqDiv(aValue, bValue)))
    _ -> False
  }
}

fun absOp/(==)(a: absOp, b: absOp): bool {
  pretend-no-div(fn() eqDiv(a, b))
}

fun absOp/showDiv(absOp: absOp): div string {
  match absOp {
    AOTrue -> "AOTrue"
    AOOp(op, values) -> "AOOp(" ++ op.show ++ ", " ++ values.show(?show = absValue/showDiv) ++ ")"
  }
}

fun absOp/show(absOp: absOp): string {
  pretend-no-div(fn() showdiv(absOp))
}

fun absOp/divHash(absOp: absOp, x: int64): div int {
  match absOp {
    AOTrue -> 0
    AOOp(op, values) ->
      op.hash(x) + values.list/hash(fn(value, x0) pretend-no-div(fn() absValue/divHash(value, x0)), x)
  }
}

fun absOp/hash(absOp: absOp, x: int64): int {
  pretend-no-div(fn() absOp/divHash(absOp, x))
}

type absOpExp {
  AOEC(exp: exp)
  AOEAnd(a: absOpExp, b: absOpExp)
  AOEAV(absValueExp: absValueExp)
  AOENot(absOpExp: absOpExp)
}

type absValue {
  AVBot
  AVLit(lits: hash-set<literal>)
  AVOp(ops: hash-set<absOp>)
  AVPath(paths: hash-set<path>)
}

fun absValue/eqDiv(a: absValue, b: absValue): div bool {
  match (a, b) {
    (AVBot, AVBot) -> True
    (AVLit(aLits), AVLit(bLits)) -> aLits == bLits
    (AVOp(aOps), AVOp(bOps)) -> (==)(aOps, bOps, ?(==) = fn(aOp, bOp) pretend-no-div(fn() eqDiv(aOp, bOp)))
    (AVPath(aPaths), AVPath(bPaths)) -> (==)(aPaths, bPaths, ?(==) = fn(aPath, bPath) pretend-no-div(fn() eqDiv(aPath, bPath)))
    _ -> False
  }
}

fun absValue/(==)(a: absValue, b: absValue): bool {
  pretend-no-div(fn() eqDiv(a, b))
}

fun absValue/showDiv(absValue: absValue): div string {
  match absValue {
    AVBot -> "AVBot"
    AVLit(lits) -> "AVLit(" ++ lits.show ++ ")"
    AVOp(ops) -> "AVOp(" ++ ops.show(?show = fn(op) pretend-no-div(fn() absOp/showDiv(op))) ++ ")"
    AVPath(paths) -> "AVPath(" ++ paths.show(?show = fn(path) pretend-no-div(fn() path/showDiv(path))) ++ ")"
  }
}

fun absValue/show(absValue: absValue): string {
  pretend-no-div(fn() showDiv(absValue))
}

fun absValue/divHash(absValue: absValue, x: int64): div int {
  match absValue {
    AVBot -> 0
    AVLit(lits) -> lits.list.list/hash(literal/hash, x)
    AVOp(ops) -> ops.list.list/hash(fn(op, x0) pretend-no-div(fn() absOp/divHash(op, x0)), x)
    AVPath(paths) -> paths.list.list/hash(fn(path, x0) pretend-no-div(fn() path/divHash(path, x0)), x)
  }
}

fun absValue/hash(absValue: absValue, x: int64): int {
  pretend-no-div(fn() divHash(absValue, x))
}

type absValueExp {
  AVEBot
  AVEValue(absValue: absValue)
  AVEDot(absValueExp: absValueExp, f: fieldName)
  AVEOp(op: op, e1: absValueExp, e2: absValueExp)
  AVEIS(storeExp: storeExp, v: varName)
}

alias store = hash-map<varName, absValue>

fun store/show(store: store): string {
  store.hashmap/show(?key/show = varName/show, ?value/show = absValue/show)
}

type storeExp {
  SEEmpty
  SEOS(exp: exp)
  SEIS(exp: exp)
  SEInsert(v: varName, absValueExp: absValueExp, storeExp: storeExp)
  SEUnion(a: storeExp, b: storeExp)
  SERemove(storeExp: storeExp, v: varName)
}

type exp {
  NullE(id: int)
  LitE(lit: literal, id: int)
  RootE(id: int)
  DotE(e: exp, f: fieldName, id: int)
  OpE(op: op, lhs: exp, rhs: exp, id: int)
  VarE(v: varName, id: int)
  AsgnE(v: varName, rhs: exp, id: int)
  IfE(cont: exp, thn: exp, els: exp, id: int)
  ForE(v: varName, from: exp, body: exp, id: int)
  SeqE(first: exp, second: exp, id: int)
  PrintE(e: exp, id: int)
}

fun exp/show(exp: exp): string {
  match exp {
    NullE -> "NullE"
    LitE(lit) -> "LitE(" ++ lit.show ++ ")"
    RootE -> "RootE"
    DotE(e, f) -> "DotE(" ++ e.show ++ ", " ++ f.show ++ ")"
    OpE(op, lhs, rhs) -> "OpE(" ++ op.show ++ ", " ++ lhs.show ++ ", " ++ rhs.show ++ ")"
    VarE(v) -> "VarE(" ++ v.show ++ ")"
    AsgnE(v, e) -> "AsgnE(" ++ v.show ++ ", " ++ e.show ++ ")"
    IfE(cont, thn, els) -> "IfE(" ++ cont.show ++ ", " ++ thn.show ++ ", " ++ els.show ++ ")"
    ForE(v, e, s) -> "ForE(" ++ v.show ++ ", " ++ e.show ++ ", " ++ s.show ++ ")"
    SeqE(s1, s2) -> "SeqE(" ++ s1.show ++ ", " ++ s2.show ++ ")"
    PrintE(e) -> "PrintE(" ++ e.show ++ ")"
  }
}

fun exp/hash(exp: exp, x: int64): int {
  match exp {
    NullE(id) -> id.hash(x)
    LitE(lit, id) -> lit.hash(x) + id.hash(x)
    RootE(id) -> id.hash(x)
    DotE(e, f, id) -> e.hash(x) + f.hash(x) + id.hash(x)
    OpE(op, lhs, rhs, id) -> op.hash(x) + lhs.hash(x) + rhs.hash(x) + id.hash(x)
    VarE(v, id) -> v.hash(x) + id.hash(x)
    AsgnE(v, rhs, id) -> v.hash(x) + rhs.hash(x) + id.hash(x)
    IfE(cont, thn, els, id) -> cont.hash(x) + thn.hash(x) + els.hash(x) + id.hash(x)
    ForE(v, from, body, id) -> v.hash(x) + from.hash(x) + body.hash(x) + id.hash(x)
    SeqE(first, second, id) -> first.hash(x) + second.hash(x) + id.hash(x)
    PrintE(e, id) -> e.hash(x) + id.hash(x)
  }
}

fun exp/eqDiv(a: exp, b: exp): div bool {
  match (a, b) {
    (NullE(aId), NullE(bId)) -> aId == bId
    (LitE(aLit, aId), LitE(bLit, bId)) -> aLit == bLit && aId == bId
    (RootE(aId), RootE(bId)) -> aId == bId
    (DotE(aE, aF, aId), DotE(bE, bF, bId)) -> eqDiv(aE, bE) && aF == bF && aId == bId
    (OpE(aOp, aLhs, aRhs, aId), OpE(bOp, bLhs, bRhs, bId)) ->
      aOp == bOp
      && eqDiv(aLhs, bLhs)
      && eqDiv(aRhs, bRhs)
      && aId == bId
    (VarE(aV, aId), VarE(bV, bId)) -> aV == bV && aId == bId
    (AsgnE(aV, aRhs, aId), AsgnE(bV, bRhs, bId)) -> aV == bV && eqDiv(aRhs, bRhs) && aId == bId
    (IfE(aCont, aThn, aEls, aId), IfE(bCont, bThn, bEls, bId)) ->
      eqDiv(aCont, bCont)
      && eqDiv(aThn, bThn)
      && eqDiv(aEls, bEls)
      && aId == bId
    (ForE(aV, aFrom, aBody, aId), ForE(bV, bFrom, bBody, bId)) ->
      aV == bV
      && eqDiv(aFrom, bFrom)
      && eqDiv(aBody, bBody)
      && aId == bId
    (SeqE(aFirst, aSecond, aId), SeqE(bFirst, bSecond, bId)) ->
      eqDiv(aFirst, bFirst)
      && eqDiv(aSecond, bSecond)
      && aId == bId
    (PrintE(aE, aId), PrintE(bE, bId)) -> eqDiv(aE, bE) && aId == bId
    _ -> False
  }
}

fun exp/(==)(a: exp, b: exp): bool {
  pretend-no-div(fn() eqDiv(a, b))
}

type iteratorContextExp {
  ICEIT(exp: exp)
  ICEPlusIf(itExp: exp, avdotExp: exp)
}


effect attrGrammar {
  fun getAbstractValue(exp: exp): absValue
  fun setAbstractValue(exp: exp, absValue: absValue): ()
  fun getPaths(exp: exp): hash-set<path>
  fun setPaths(exp: exp, paths: hash-set<path>): ()
  fun getOutputStore(exp: exp): store
  fun setOutputStore(exp: exp, store: store): ()
  fun getInputStore(exp: exp): store
  fun setInputStore(exp: exp, store: store): ()
  fun getQueryCondition(exp: exp): absOp
  fun setQueryCondition(exp: exp, absOp: absOp): ()
  fun getDataDependence(exp: exp): bool
  fun setDataDependence(exp: exp, dependence: bool): ()
  fun getIteratorContext(exp: exp): list<path>
  fun setIteratorContext(exp: exp, paths: list<path>): ()
  fun getTraversalSummary(exp: exp): hash-set<path>
  fun setTraversalSummary(exp: exp, summary: hash-set<path>): ()
}


effect nondet {
  ctl choose(x: a, y: a): a
  final ctl fail(): a
}

fun (..)(value: absValue, fieldName: fieldName): exn absValue {
  match value {
    AVPath(paths) -> AVPath(paths.unique/map(fn(path) Path(Cons(fieldName, path.names), path.absOp, path.dependence)))
    AVBot -> AVBot
    _ -> throw("Bad path append: " ++ value.show ++ ", " ++  fieldName.show)
  }
}

fun applyOp(op: op, a: absValue, b: absValue): absValue {
  AVOp(singleton(AOOp(op, [a, b])))
}

fun getOrThrow(map: hash-map<k, v>, key: k, ?(==): (k, k) -> bool, ?hash: (k, int64) -> int): exn v {
  match map.get(key) {
    Just(value) -> value
    Nothing -> throw("key not present")
  }
}

fun hash-map/insert(map: hash-map<k, v>, key: k, value: v, ?(==): (k, k) -> bool, ?hash: (k, int64) -> int): hash-map<k, v> {
  map.hashmap/insert(key, value, ?when-resize = hashmap/when-resize, ?resizer = hashmap/resizer)
}

fun hashmap/insertAll(a: hash-map<k, v>, b: hash-map<k, v>, ?(==): (k, k) -> bool, ?hash: (k, int64) -> int): pure hash-map<k, v> {
  // trace("inserting all")
  // unsafe-total(fn() {
  var result := a
  b.foreach-key(fn(key) {
    result := result.insert(key, b.getOrThrow(key))
  })
  result
  // })
}

fun hash-set/insert(set: hash-set<a>, x: a, ?(==): (a, a) -> bool, ?hash: (a, int64) -> int): hash-set<a> {
  set.hashset/insert(x, ?(==) = (==), ?hash = hash, ?when-resize = hashset/when-resize, ?resizer = hashset/resizer)
}

fun hashset/singleton(x : a, ?(==): (a, a) -> bool, ?hash: (a, int64) -> int): total hash-set<a> {
  thread/hash-set().hash-set/insert(x)
}

fun updateAbstractValue(exp: exp): <exn, attrGrammar> () {
  val newAbstractValue = match exp {
    LitE(lit) -> AVLit(singleton(lit))
    RootE -> AVPath(singleton(Path([], AOTrue, False), ?(==) = path/(==), ?hash = path/hash))
    DotE(e, f) -> e.getAbstractValue()..f
    OpE(op, lhs, rhs) ->
      applyOp(op, lhs.getAbstractValue(), rhs.getAbstractValue())
    VarE(v) -> exp.getInputStore().getOrDefault(v, AVBot)
    _ -> AVBot
  }

  exp.setAbstractValue(newAbstractValue)
}

fun extractPaths(absValue: absValue): hash-set<path> {
  match absValue {
    AVPath(paths) -> paths
    _ -> thread/hash-set()
  }
}

fun updatePaths(exp: exp): <exn, attrGrammar> () {
  val newPaths = match exp {
    RootE -> exp.getAbstractValue().extractPaths()
    DotE(_, _) -> exp.getAbstractValue().extractPaths()
    OpE(_, lhs, rhs) -> lhs.getTraversalSummary().union(rhs.getTraversalSummary())
    AsgnE(_, e) -> e.getTraversalSummary()
    IfE(e, s1, s2) -> e.getTraversalSummary()
      .union(s1.getTraversalSummary())
      .union(s2.getTraversalSummary())
    ForE(_, e, s) -> e.getTraversalSummary()
      .union((e.getAbstractValue()..FNL).extractPaths())
      .union(s.getTraversalSummary())
    SeqE(s1, s2) -> s1.getTraversalSummary().union(s2.getTraversalSummary())
    PrintE(e) -> e.getTraversalSummary()
    _ -> thread/hash-set()
  }

  exp.setPaths(newPaths)
}

fun updateOutputStore(exp: exp): <pure, attrGrammar> () {
  val newOutputStore = match exp {
    AsgnE(v, e) -> {
      val previousV = exp.getInputStore().getOrDefault(v, AVBot)
      exp.getInputStore().insert(v, previousV.join(e.getAbstractValue()))
    }
    IfE(_, s1, s2) -> s1.getOutputStore().insertAll(s2.getOutputStore())
    ForE(v, _, s) -> s.getOutputStore().remove(v)
    SeqE(_, s2) -> s2.getOutputStore()
    _ -> exp.getInputStore()
  }

  exp.setOutputStore(newOutputStore)
}

fun updateInputStore(exp: exp, inputStore: store): <pure, attrGrammar> () {
  exp.setInputStore(inputStore)
  match exp {
    ForE(v, e, s) -> {
      e.updateInputStore(inputStore)
      val inputStorePlusV = inputStore.insert(v, (e.getAbstractValue()..FNL))
      s.updateInputStore(inputStorePlusV.insertAll(s.getOutputStore()))
    }
    SeqE(s1, s2) -> {
      s1.updateInputStore(inputStore)
      s2.updateInputStore(s1.getOutputStore())
    }
    DotE(e, _) -> e.updateInputStore(inputStore)
    OpE(_, e1, e2) -> {
      e1.updateInputStore(inputStore)
      e2.updateInputStore(inputStore)
    }
    AsgnE(_, e) -> e.updateInputStore(inputStore)
    IfE(e, s1, s2) -> {
      e.updateInputStore(inputStore)
      s1.updateInputStore(inputStore)
      s2.updateInputStore(inputStore)
    }
    PrintE(e) -> e.updateInputStore(inputStore)
    _ -> ()
  }
}

fun isValidQueryCondition(exp: exp): bool {
  match exp {
    NullE -> True
    LitE(_) -> True
    RootE -> True
    DotE(e, _) -> e.isValidQueryCondition
    OpE(_, e1, e2) -> e1.isValidQueryCondition && e2.isValidQueryCondition
    VarE(_) -> True // This might not be accurate
    AsgnE(_, e) -> e.isValidQueryCondition
    IfE(e, s1, s2) -> e.isValidQueryCondition
      && s1.isValidQueryCondition
      && s2.isValidQueryCondition
    ForE(_, _, _) -> False // not accurate
    SeqE(s1, s2) -> s1.isValidQueryCondition && s2.isValidQueryCondition
    PrintE(_) -> False
  }
}

// not entirely sure if this is what the notation means
fun absOp/(&)(absOp: absOp, absValue: absValue): absOp {
  AOOp(AndOp, [AVOp(singleton(absOp)), absValue])
}
fun absValue/not(absValue: absValue): absValue {
  AVOp(singleton(AOOp(NotOp, [absValue])))
}

fun updateQueryCondition(exp: exp, queryCondition: absOp): <attrGrammar> () {
  setQueryCondition(exp, queryCondition)
  match exp {
    IfE(e, s1, s2) -> {
      e.updateQueryCondition(queryCondition)
      if e.isValidQueryCondition then {
        s1.updateQueryCondition(queryCondition & e.getAbstractValue())
        s2.updateQueryCondition(queryCondition & not(e.getAbstractValue()))
      } else {
        s1.updateQueryCondition(queryCondition)
        s2.updateQueryCondition(queryCondition)
      }
    }
    DotE(e, _) -> e.updateQueryCondition(queryCondition)
    OpE(_, e1, e2) -> {
      e1.updateQueryCondition(queryCondition)
      e2.updateQueryCondition(queryCondition)
    }
    AsgnE(_, e) -> e.updateQueryCondition(queryCondition)
    ForE(_, e, s) -> {
      e.updateQueryCondition(queryCondition)
      s.updateQueryCondition(queryCondition)
    }
    SeqE(s1, s2) -> {
      s1.updateQueryCondition(queryCondition)
      s2.updateQueryCondition(queryCondition)
    }
    PrintE(e) -> e.updateQueryCondition(queryCondition)
    _ -> ()
  }
}

fun updateDataDependence(exp: exp, parentDependence: bool): <attrGrammar> () {
  val dependence = match exp {
    PrintE(_) -> True
    _ -> parentDependence
  }
  exp.setDataDependence(dependence)
  match exp {
    DotE(e, _) -> e.updateDataDependence(dependence)
    OpE(_, e1, e2) -> {
      e1.updateDataDependence(dependence)
      e2.updateDataDependence(dependence)
    }
    AsgnE(_, e) -> e.updateDataDependence(dependence)
    IfE(e, s1, s2) -> {
      e.updateDataDependence(dependence)
      s1.updateDataDependence(dependence)
      s2.updateDataDependence(dependence)
    }
    ForE(_, e, s) -> {
      e.updateDataDependence(dependence)
      s.updateDataDependence(dependence)
    }
    SeqE(s1, s2) -> {
      s1.updateDataDependence(dependence)
      s2.updateDataDependence(dependence)
    }
    PrintE(e) -> e.updateDataDependence(dependence)
    _ -> ()
  }
}

fun extends(absValue: absValue, paths: list<path>): bool {
  match absValue {
    AVPath(valuePaths) -> {
      paths.all(fn(path) valuePaths.contains(path))
    }
    _ -> False
  }
}

fun updateIteratorContext(exp: exp, paths: list<path>): <exn, attrGrammar> () {
  exp.setIteratorContext(paths)
  match exp {
    ForE(_, e, s) -> {
      e.updateIteratorContext(paths)
      if (e.getAbstractValue()..FNL).extends(paths) then {
        s.updateIteratorContext((e.getAbstractValue()..FNL).extractPaths.list ++ paths)
      } else {
        s.updateIteratorContext(paths)
      }
    }
    SeqE(s1, s2) -> {
      s1.updateIteratorContext(paths)
      s2.updateIteratorContext(paths)
    }
    DotE(e, _) -> e.updateIteratorContext(paths)
    OpE(_, e1, e2) -> {
      e1.updateIteratorContext(paths)
      e2.updateIteratorContext(paths)
    }
    AsgnE(_, e) -> e.updateIteratorContext(paths)
    IfE(e, s1, s2) -> {
      e.updateIteratorContext(paths)
      s1.updateIteratorContext(paths)
      s2.updateIteratorContext(paths)
    }
    PrintE(e) -> e.updateIteratorContext(paths)
    _ -> ()
  }
}

fun firstOrThrow(l: list<a>): exn a {
  match l {
    Cons(h, _) -> h
    Nil -> throw("empty list")
  }
}

fun iter(exp: exp) {
  val maybeLatestIteratorContext = exp.getIteratorContext.head()
  match maybeLatestIteratorContext {
    Just(latestIteratorContext) -> singleton(Path(
      latestIteratorContext.names,
      exp.getQueryCondition(),
      True
    ))
    Nothing -> thread/hash-set()
  }
}

fun updateTraversalSummary(exp: exp): <exn, attrGrammar> () {
  val newTraversalSummary = match exp {
    VarE(_) -> {
      val queryCondition = getQueryCondition(exp)
      if (exp.getDataDependence()) then {
        exp.getAbstractValue()
          .extractPaths.list
          .list/map(fn(path) Path(path.names, queryCondition, False)).thread/list/hash-set
      } else {
        exp.getPaths().list.list/map(fn(path) Path(path.names, queryCondition, False)).thread/list/hash-set
      }
    }
    AsgnE(_, e) -> e.getTraversalSummary().union(exp.iter())
    _ ->
      exp.getPaths().union(if (exp.getDataDependence()) then {
        exp.iter()
      } else {
        thread/hash-set()
      })
  }

  exp.setTraversalSummary(newTraversalSummary)
}

fun absValue/join(v1: absValue, v2: absValue): exn absValue {
  match(v1, v2) {
    (AVLit(lits1), AVLit(lits2)) -> AVLit(lits1.union(lits2))
    (AVOp(ops1), AVOp(ops2)) -> AVOp(ops1.union(ops2))
    (AVPath(paths1), AVPath(paths2)) -> AVPath(paths1.union(paths2))
    (_, AVBot) -> v1
    (AVBot, _) -> v2
    (AVBot, AVBot) -> AVBot
    _ -> throw("invalid join")
  }
}

fun updateSynthesizedAttrs(exp: exp) {
  // trace(exp.show.slice.take(20).string)
  // trace("av")
  exp.updateAbstractValue()
  // trace("p")
  exp.updatePaths()
  // trace("os")
  exp.updateOutputStore()
  // trace("ts")
  exp.updateTraversalSummary()
}

fun visit(exp: exp, f: (exp) -> e ()): e () {
  exp.f()
  match exp {
    DotE(e, _) -> e.visit(f)
    OpE(_, e1, e2) -> {
      e1.visit(f)
      e2.visit(f)
    }
    AsgnE(_, e) -> e.visit(f)
    IfE(e, s1, s2) -> {
      e.visit(f)
      s1.visit(f)
      s2.visit(f)
    }
    ForE(_, e, s) -> {
      e.visit(f)
      s.visit(f)
    }
    SeqE(s1, s2) -> {
      s1.visit(f)
      s2.visit(f)
    }
    _ -> ()
  }
}

fun iterateAttributeGrammar(exp: exp) {
  exp.visit(updateSynthesizedAttrs)
  // trace("is")
  exp.updateInputStore(thread/hash-map())
  // trace("c")
  exp.updateQueryCondition(AOTrue)
  // trace("d")
  exp.updateDataDependence(False)
  // trace("it")
  exp.updateIteratorContext([])
}

fun getOrDefault(map: hash-map<k, v>, key: k, default: v, ?(==): (k, k) -> bool, ?hash: (k, int64) -> int): v {
  match map.get(key) {
    Just(value) -> value
    Nothing -> default
  }
}

effect fixpoint {
  fun modified(): ()
}

fun update(map: hash-map<k, v>, key: k, value: v, ?(==): (k, k) -> bool, ?hash: (k, int64) -> int, ?value/(==): (v, v) -> bool, ?show: (v) -> string): fixpoint hash-map<k, v> {
  val updated = match map.get(key) {
    Just(oldValue) -> !(oldValue == value)
    Nothing -> True
  }

  if updated then {
    trace(map.get(key).show)
    trace(value.show)
    modified()
    map.insert(key, value)
  } else {
    map
  }
}

fun mapShow(map: hash-map<k, v>, ?keyShow: k -> string, ?valueShow: v -> string): string {
  map.show(?key/show = keyShow, ?value/show = valueShow)
}

fun analyze(root: exp): pure hash-set<path> {
  var abstractValues := thread/hash-map()
  var pathsByExp := thread/hash-map()
  var outputStores := thread/hash-map()
  var inputStores := thread/hash-map()
  var queryConditions := thread/hash-map()
  var dataDependences := thread/hash-map()
  var iteratorContexts := thread/hash-map()
  var traversalSummaries := thread/hash-map()

  var updatedThisIteration := True
  with handler {
    fun modified() -> updatedThisIteration := True
  }
  with handler {
    fun getAbstractValue(exp: exp) abstractValues.getOrDefault(exp, AVBot)
    fun setAbstractValue(exp: exp, absValue: absValue) abstractValues := abstractValues.update(exp, absValue)
    fun getPaths(exp: exp) pathsByExp.getOrDefault(exp, thread/hash-set())
    fun setPaths(exp: exp, paths: hash-set<path>) pathsByExp := pathsByExp.update(exp, paths)
    fun getOutputStore(exp: exp) outputStores.getOrDefault(exp, thread/hash-map())
    fun setOutputStore(exp: exp, outputStore: store) outputStores := outputStores.update(exp, outputStore)
    fun getInputStore(exp: exp) inputStores.getOrDefault(exp, thread/hash-map())
    fun setInputStore(exp: exp, inputStore: store) inputStores := inputStores.update(exp, inputStore)
    fun getQueryCondition(exp: exp) queryConditions.getOrDefault(exp, AOTrue)
    fun setQueryCondition(exp: exp, queryCondition: absOp) queryConditions := queryConditions.update(exp, queryCondition)
    fun getDataDependence(exp: exp) dataDependences.getOrDefault(exp, False)
    fun setDataDependence(exp: exp, dependence: bool) dataDependences := dataDependences.update(exp, dependence)
    fun getIteratorContext(exp: exp) iteratorContexts.getOrDefault(exp, [])
    fun setIteratorContext(exp: exp, iteratorContext: list<path>) iteratorContexts := iteratorContexts.update(exp, iteratorContext)
    fun getTraversalSummary(exp: exp) traversalSummaries.getOrDefault(exp, thread/hash-set())
    fun setTraversalSummary(exp: exp, traversalSummary: hash-set<path>) traversalSummaries:= traversalSummaries.update(exp, traversalSummary)
  }
  var gas := 1000
  while(fn() updatedThisIteration && gas > 0) {
    updatedThisIteration := False
    gas := gas - 1

    // if (gas % 1000 == 0)
    //   then trace("Iteration: " ++ gas.show)
    // trace("AV: " ++ abstractValues.show)
    // trace("P: " ++ pathsByExp.show)
    // trace("OS: " ++ outputStores.show)
    // trace("IS: " ++ inputStores.show)
    // trace("C: " ++ queryConditions.show)
    // trace("D: " ++ dataDependences.show)
    // trace("IT: " ++ iteratorContexts.show)
    // trace("TS: " ++ traversalSummaries.show)

    root.iterateAttributeGrammar()
  }

  if (gas == 0) then {
    trace("ran out of gas")
  }
  root.getTraversalSummary()
}

val line1 = AsgnE(VarName("zip"), LitE(StringLit("78712"), 2), 1)
val paperExample = SeqE(
  line1,
  SeqE(
    AsgnE(VarName("salaryLimit"), LitE(NumberLit(65000), 5), 4),
    ForE(
      VarName("e"),
      DotE(RootE(8), FNNamed("employees"), 7),
      IfE(
        OpE(EqOp, DotE(VarE(VarName("e"), 12), FNNamed("zip"), 11), VarE(VarName("zip"), 13), 10),
        IfE(
          OpE(GtOp, DotE(VarE(VarName("e"), 17), FNNamed("salary"), 16), VarE(VarName("salaryLimit"), 18), 15),
          PrintE(OpE(PlusOp, DotE(VarE(VarName("e"), 22), FNNamed("name"), 21), OpE(PlusOp, LitE(StringLit(": "), 22), DotE(DotE(VarE(VarName("e"), 28), FNNamed("manager"), 27), FNNamed("name"), 26), 25), 23), 20),
          NullE(19),
          14
        ),
        NullE(29),
        9
      ),
      6
    ),
    3
  ),
  0
)

fun check(expected: a, f: () -> <console,pure|e> a, ?(==): (a, a) -> div bool, ?kk-file-line: string, ?show: a -> div string): <console,div|e> ()
  println("Checking (" ++ kk-file-line ++ ") ...")
  match try(f)
    Error(e) -> println("Failed! " ++ e.message)
    Ok(actual) -> if actual == expected then println("Passed!") else println("Failed!\n\tExpected: " ++ expected.show ++ "\n\tActual: " ++ actual.show) 

fun main()
  print(paperExample.analyze())
