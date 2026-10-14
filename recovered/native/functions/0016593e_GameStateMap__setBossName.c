/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0016593e GameStateMap::setBossName */

/* GameStateMap::setBossName(int, GameStateMap::MapCafe*) */

undefined8 __thiscall GameStateMap::setBossName(GameStateMap *this,int param_1,MapCafe *param_2)

{
  char *pcVar1;
  int *piVar2;
  code *pcVar3;
  GameStateMap *pGStack_18;
  int iStack_14;
  MapCafe *pMStack_10;
  
  piVar2 = *(int **)(param_2 + 0x20);
  pcVar3 = *(code **)(*piVar2 + 0x44);
  pGStack_18 = this;
  iStack_14 = param_1;
  pMStack_10 = param_2;
  pcVar1 = (char *)ZombieCafe::getBossName(*(ZombieCafe **)(this + 0xc),param_1);
  String::String((String *)&pGStack_18,pcVar1);
  (*pcVar3)(piVar2,(String *)&pGStack_18);
  String::~String((String *)&pGStack_18);
  return CONCAT44(iStack_14,pGStack_18);
}


