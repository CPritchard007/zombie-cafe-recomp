/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029691c GameStateSpecialSale::tick */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00296ae4) */
/* WARNING: Removing unreachable block (ram,0x00296ae4) */
/* GameStateSpecialSale::tick(long) */

void __thiscall GameStateSpecialSale::tick(GameStateSpecialSale *this,long param_1)

{
  GameStateMainMenu *this_00;
  GameStateLoading *pGVar1;
  HCOManager *this_01;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  GameStateCafe *this_02;
  int iVar5;
  CapcomGame *pCVar6;
  code *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  GameStateSpecialSale *pGVar11;
  float extraout_s0;
  String aSStack_68 [8];
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  ZombieCafe::tickPlaySecAnalysis_cafe(*(ZombieCafe **)(this + 0xc),param_1);
  pCVar6 = *(CapcomGame **)(this + 0xc);
  if (pCVar6[DAT_00296c94] != (CapcomGame)0x0) {
    return;
  }
  if (pCVar6[DAT_00296c98] == (CapcomGame)0x0) {
    this_00 = (GameStateMainMenu *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu(this_00);
    pGVar1 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar1,(GameState *)this_00);
    CapcomGame::setNextState(pCVar6,(GameState *)pGVar1);
    return;
  }
  if (pCVar6[DAT_00296c9c] != (CapcomGame)0x0) {
    pCVar6[DAT_00296c9c] = (CapcomGame)0x0;
    javaAsyncConsume();
  }
  this_01 = (HCOManager *)HCOManager::getInstance();
  uVar2 = HCOManager::getHCORemainingTime(this_01);
  uVar3 = __divsi3(uVar2,1000);
  uVar3 = uVar3 & (int)~uVar3 >> 0x1f;
  String::String(aSStack_60,(char *)(DAT_00296ca0 + 0x296990));
  __divsi3(uVar3,0x3c);
  String::valueOf((int)aSStack_58);
  String::operator+(aSStack_50,aSStack_60,aSStack_58);
  String::String(aSStack_48,(char *)(DAT_00296ca4 + 0x2969b6));
  String::operator+(aSStack_40,aSStack_50,aSStack_48);
  __aeabi_idivmod(uVar3,0x3c);
  String::valueOf((int)aSStack_38);
  String::operator+(aSStack_30,aSStack_40,aSStack_38);
  String::String(aSStack_28,(char *)(DAT_00296ca8 + 0x2969e2));
  String::operator+(aSStack_68,aSStack_30,aSStack_28);
  String::~String(aSStack_28);
  String::~String(aSStack_30);
  String::~String(aSStack_38);
  String::~String(aSStack_40);
  String::~String(aSStack_48);
  String::~String(aSStack_50);
  String::~String(aSStack_58);
  String::~String(aSStack_60);
  piVar10 = *(int **)(this + 0x84);
  pcVar7 = *(code **)(*piVar10 + 0x44);
  String::String(aSStack_20,aSStack_68);
  (*pcVar7)(piVar10,aSStack_20);
  String::~String(aSStack_20);
  (**(code **)(**(int **)(this + 0x18) + 8))(*(int **)(this + 0x18),param_1);
  iVar8 = 0;
  pGVar11 = this;
  do {
    piVar10 = *(int **)(pGVar11 + 0x220);
    if ((piVar10 != (int *)0x0) && (this[iVar8 + 0x3b0] == (GameStateSpecialSale)0x0)) {
      (**(code **)(*piVar10 + 0x1c))(piVar10,param_1);
    }
    iVar8 = iVar8 + 1;
    pGVar11 = pGVar11 + 4;
  } while (iVar8 != 100);
  if (((*(ScreenElement **)(this + 0x448))[0x14] == (ScreenElement)0x0) ||
     (iVar8 = ScreenElement::contains
                        (*(ScreenElement **)(this + 0x448),
                         *(int *)(*(int *)(this + 0xc) + DAT_00296cac) >> 0x10,
                         (int)(short)*(int *)(*(int *)(this + 0xc) + DAT_00296cac)), iVar8 == 0)) {
    if (((*(ScreenElement **)(this + 0x438))[0x14] == (ScreenElement)0x0) ||
       (iVar8 = ScreenElement::contains
                          (*(ScreenElement **)(this + 0x438),
                           *(int *)(*(int *)(this + 0xc) + DAT_00296cac) >> 0x10,
                           (int)(short)*(int *)(*(int *)(this + 0xc) + DAT_00296cac)), iVar8 == 0))
    {
      if ((*(char *)(*(int *)(this + 0x448) + 0x14) == '\0') &&
         (*(char *)(*(int *)(this + 0x438) + 0x14) == '\0')) {
        if (*(int *)(this + 0x428) < 1) {
          switch(this[DAT_00296cb0]) {
          case (GameStateSpecialSale)0x0:
            tickStepMessage0((long)this);
            break;
          case (GameStateSpecialSale)0x1:
            tickStepMessage1((long)this);
            break;
          case (GameStateSpecialSale)0x2:
            tickStepMessage2((long)this);
            break;
          case (GameStateSpecialSale)0x3:
            tickStepSelectZombie((long)this);
            break;
          case (GameStateSpecialSale)0x4:
            tickStepWait((long)this);
          }
        }
        else {
          iVar8 = *(int *)(this + 0x428) - param_1;
          *(int *)(this + 0x428) = iVar8;
          if (iVar8 < 1) {
            *(undefined4 *)(this + 0x428) = 0;
          }
        }
      }
      goto switchD_00296ae4_default;
    }
    piVar10 = *(int **)(this + 0x438);
  }
  else {
    piVar10 = *(int **)(this + 0x448);
  }
  (**(code **)(*piVar10 + 8))(piVar10,param_1);
switchD_00296ae4_default:
  iVar8 = DAT_00296cb4;
  uVar2 = __addsf3(*(undefined4 *)(this + DAT_00296cb4),*(undefined4 *)(this + 0x430));
  iVar5 = DAT_00296cb8;
  *(undefined4 *)(this + iVar8) = uVar2;
  iVar5 = *(int *)(this + iVar5);
  iVar8 = SmDev();
  uVar2 = *(undefined4 *)(DAT_00296cbc + iVar8 * 4 + 0x296b72);
  if (this[DAT_00296cb0] == (GameStateSpecialSale)0x3) {
    uVar4 = __floatsisf(iVar5 - 1U & (int)~(iVar5 - 1U) >> 0x1f);
    iVar8 = __mulsf3(uVar4,uVar2);
    iVar5 = __aeabi_fcmplt(*(undefined4 *)(this + DAT_00296cb4),iVar8 + -0x80000000);
    if (iVar5 != 0) {
      *(int *)(this + DAT_00296cb4) = iVar8 + -0x80000000;
    }
  }
  iVar8 = __aeabi_fcmpgt(*(undefined4 *)(this + DAT_00296cb4),0);
  if (iVar8 != 0) {
    *(undefined4 *)(this + DAT_00296cb4) = 0;
  }
  uVar4 = *(undefined4 *)(this + 0x430);
  puVar9 = *(undefined4 **)(DAT_00296cc0 + 0x296b94);
  uVar2 = __floatsisf(param_1);
  uVar2 = __mulsf3(uVar2,*puVar9);
  iVar8 = __aeabi_fcmplt(uVar2,0x3f800000);
  if (iVar8 == 0) {
    uVar2 = 0x3f800000;
  }
  uVar2 = __subsf3(0x3f800000,uVar2);
  iVar8 = __mulsf3(uVar4,uVar2);
  *(int *)(this + 0x430) = iVar8;
  iVar5 = __aeabi_fcmpge(iVar8,0);
  if (iVar5 == 0) {
    iVar8 = iVar8 + -0x80000000;
  }
  iVar8 = __aeabi_fcmplt(iVar8,**(undefined4 **)(DAT_00296cc4 + 0x296be8));
  if (iVar8 != 0) {
    *(undefined4 *)(this + 0x430) = 0;
  }
  if (((*(char *)(*(int *)(this + 0xc) + DAT_00296cc8) != '\0') &&
      (*(undefined1 *)(*(int *)(this + 0xc) + DAT_00296cc8) = 0,
      *(char *)(*(int *)(this + 0x448) + 0x14) == '\0')) &&
     (*(char *)(*(int *)(this + 0x438) + 0x14) == '\0')) {
    ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0);
    pCVar6 = *(CapcomGame **)(this + 0xc);
    this_02 = (GameStateCafe *)operator_new(0x200);
    GameStateCafe::GameStateCafe(this_02);
    pGVar1 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar1,(GameState *)this_02);
    CapcomGame::setNextState(pCVar6,(GameState *)pGVar1);
  }
  String::~String(aSStack_68);
  return;
}


