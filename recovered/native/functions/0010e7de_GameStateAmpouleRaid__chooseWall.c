/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010e7de GameStateAmpouleRaid::chooseWall */

/* GameStateAmpouleRaid::chooseWall(int) */

undefined4 GameStateAmpouleRaid::chooseWall(int param_1)

{
  int iVar1;
  Vector<String> *this;
  int in_r1;
  int aiStack_20 [2];
  String aSStack_18 [8];
  
  aiStack_20[0] = param_1;
  iVar1 = EnemyItems::getData(in_r1);
  String::String((String *)aiStack_20,(String *)(iVar1 + 0x38));
  this = (Vector<String> *)StringUtil::splitString((String *)aiStack_20,0x5f);
  String::~String((String *)aiStack_20);
  CapcomMath::random(*(int *)(this + 4) + 1);
  Vector<String>::elementAt((int)aSStack_18);
  iVar1 = StringUtil::parseInt(aSStack_18);
  String::~String(aSStack_18);
  Vector<String>::~Vector(this);
  operator_delete(this);
  return *(undefined4 *)(iVar1 * 4 + *(int *)(*(int *)(param_1 + 100) + 0x94));
}


