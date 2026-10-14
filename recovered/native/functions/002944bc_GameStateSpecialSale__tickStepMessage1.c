/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002944bc GameStateSpecialSale::tickStepMessage1 */

/* GameStateSpecialSale::tickStepMessage1(long) */

void GameStateSpecialSale::tickStepMessage1(long param_1)

{
  int iVar1;
  code *pcVar2;
  ZombieCafe *this;
  int *piVar3;
  float extraout_s0;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  this = *(ZombieCafe **)(param_1 + 0xc);
  iVar1 = ZombieCafe::unhandledPressOrLongEvent(this);
  if (iVar1 != 0) {
    ZombieCafe::playEffect((int)this,extraout_s0);
    iVar1 = DAT_00294524;
    *(undefined1 *)(param_1 + DAT_00294520) = 2;
    String::String(aSStack_20,(char *)(iVar1 + 0x2944e4));
    piVar3 = *(int **)(param_1 + 0x74);
    pcVar2 = *(code **)(*piVar3 + 0x44);
    String::String(aSStack_18,aSStack_20);
    (*pcVar2)(piVar3,aSStack_18);
    String::~String(aSStack_18);
    String::~String(aSStack_20);
  }
  return;
}


