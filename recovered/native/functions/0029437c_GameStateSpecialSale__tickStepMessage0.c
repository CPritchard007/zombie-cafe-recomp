/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029437c GameStateSpecialSale::tickStepMessage0 */

/* GameStateSpecialSale::tickStepMessage0(long) */

void GameStateSpecialSale::tickStepMessage0(long param_1)

{
  int iVar1;
  String *this;
  code *pcVar2;
  ZombieCafe *this_00;
  int *piVar3;
  float extraout_s0;
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  this_00 = *(ZombieCafe **)(param_1 + 0xc);
  iVar1 = ZombieCafe::unhandledPressOrLongEvent(this_00);
  if (iVar1 == 0) {
    return;
  }
  ZombieCafe::playEffect((int)this_00,extraout_s0);
  *(undefined1 *)(param_1 + DAT_002944a0) = 1;
  String::String(aSStack_48);
  if (0 < *(int *)(param_1 + DAT_002944a4)) {
    if (*(int *)(param_1 + 0x418) == 0) {
      if (*(char *)(param_1 + 0x420) == '\0') {
        String::String(aSStack_38,(char *)(DAT_002944ac + 0x2943e0));
        String::operator=(aSStack_48,aSStack_38);
        this = aSStack_38;
      }
      else {
        String::String(aSStack_40,(char *)(DAT_002944a8 + 0x2943ca));
        String::operator=(aSStack_48,aSStack_40);
        this = aSStack_40;
      }
      goto LAB_0029443c;
    }
    if (0 < *(int *)(param_1 + 0x418)) {
      if (*(char *)(param_1 + 0x420) == '\0') {
        String::String(aSStack_28,(char *)(DAT_002944b4 + 0x29441a));
        String::operator=(aSStack_48,aSStack_28);
        this = aSStack_28;
      }
      else {
        String::String(aSStack_30,(char *)(DAT_002944b0 + 0x294404));
        String::operator=(aSStack_48,aSStack_30);
        this = aSStack_30;
      }
      goto LAB_0029443c;
    }
  }
  String::String(aSStack_20,(char *)(DAT_002944b8 + 0x294430));
  String::operator=(aSStack_48,aSStack_20);
  this = aSStack_20;
LAB_0029443c:
  String::~String(this);
  piVar3 = *(int **)(param_1 + 0x74);
  pcVar2 = *(code **)(*piVar3 + 0x44);
  String::String(aSStack_18,aSStack_48);
  (*pcVar2)(piVar3,aSStack_18);
  String::~String(aSStack_18);
  String::~String(aSStack_48);
  return;
}


