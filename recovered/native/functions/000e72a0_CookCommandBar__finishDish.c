/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e72a0 CookCommandBar::finishDish */

/* CookCommandBar::finishDish(CookCommandBar*) */

void CookCommandBar::finishDish(CookCommandBar *param_1)

{
  Recipe *this;
  int iVar1;
  undefined4 uVar2;
  ZombieCafe *pZVar3;
  undefined4 uVar4;
  MALTAHoover *pMVar5;
  SServer *pSVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 uVar12;
  uint uVar13;
  FoodStack *this_00;
  int iVar14;
  uint uVar15;
  uint local_134;
  char acStack_11c [64];
  char acStack_dc [64];
  char acStack_9c [128];
  int local_1c;
  
  piVar11 = *(int **)(DAT_000e749c + 0xe72ac);
  iVar14 = 1;
  local_1c = *piVar11;
  if (param_1[0xb9] == (CookCommandBar)0x0) {
    this_00 = *(FoodStack **)(param_1 + 0x88);
    iVar14 = __divsi3(*(undefined4 *)(*(int *)(param_1 + 0x84) + 0x70),1000);
    this = (Recipe *)FoodStack::getRecipe(this_00);
    iVar14 = Recipe::getFinishToxinCost(this,(uchar)this_00[8],iVar14);
  }
  iVar1 = ZombieCafe::getToxin(*(ZombieCafe **)(param_1 + 0x74));
  if (iVar14 <= iVar1) {
    ZombieCafe::spendToxin(*(ZombieCafe **)(param_1 + 0x74),iVar14);
    *(undefined1 *)(*(int *)(param_1 + 0x74) + DAT_000e74a0) = 1;
    CRAMHoover::beginTrackEvent(*(char **)(*(int *)(param_1 + 0x74) + 0x840));
    ZombieCafe::addMixPanelHeader(*(ZombieCafe **)(param_1 + 0x74));
    CRAMHoover::endTrackEvent();
    local_134 = 2;
    if (param_1[0xb9] == (CookCommandBar)0x0) {
      local_134 = (uint)(*(short *)(*(int *)(param_1 + 0x84) + 0x84) != 0);
    }
    uVar2 = CCServer::GetMyUserID(*(void **)(*(int *)(param_1 + 0x74) + DAT_000e74a8));
    iVar1 = DAT_000e74b4;
    pZVar3 = *(ZombieCafe **)(param_1 + 0x74);
    uVar12 = *(undefined4 *)(pZVar3 + 0x680);
    uVar8 = *(undefined4 *)(pZVar3 + DAT_000e74ac);
    uVar10 = *(undefined4 *)(pZVar3 + DAT_000e74b0);
    uVar4 = ZombieCafe::getToxin(pZVar3);
    snprintf(acStack_9c,0x80,(char *)(DAT_000e74b8 + 0xe7382),(char *)(iVar1 + 0xe7380),uVar2,uVar12
             ,uVar8,uVar10,uVar4,(uint)**(ushort **)(param_1 + 0x88),
             (uint)(byte)(*(ushort **)(param_1 + 0x88))[4]);
    CCMarketing_RecordAnalyticsEvent
              (*(undefined4 *)(*(int *)(param_1 + 0x74) + DAT_000e74bc),DAT_000e74c0 + 0xe73a4,
               acStack_9c);
    pMVar5 = (MALTAHoover *)MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    MALTAHoover::init(pMVar5,(char *)(DAT_000e74c4 + 0xe73c0),(char *)(DAT_000e74c8 + 0xe73c2),
                      (char *)(iVar1 + 0xe7380));
    memset(acStack_11c,0,0x40);
    pSVar6 = (SServer *)MALTAHoover::GetInstance();
    iVar1 = MALTAHoover::getFBID(pSVar6,(char *)**(undefined4 **)(DAT_000e74cc + 0xe73dc));
    if (iVar1 == 0) {
      L_PrintLog((char *)(DAT_000e74d0 + 0xe73ee),acStack_11c);
    }
    memset(acStack_dc,0,0x40);
    snprintf(acStack_dc,0x40,(char *)(DAT_000e74d4 + 0xe740c),acStack_11c,
             (uint)**(ushort **)(*(int *)(param_1 + 0x84) + 100),
             (uint)(byte)(*(ushort **)(*(int *)(param_1 + 0x84) + 100))[4],iVar14,local_134);
    L_PrintLog((char *)(DAT_000e74d8 + 0xe7428),(char *)(DAT_000e74dc + 0xe742a));
    pMVar5 = (MALTAHoover *)MALTAHoover::GetInstance();
    uVar9 = *(uint *)(*(ZombieCafe **)(param_1 + 0x74) + 0x680);
    uVar7 = ZombieCafe::getToxin(*(ZombieCafe **)(param_1 + 0x74));
    pZVar3 = *(ZombieCafe **)(param_1 + 0x74);
    uVar13 = *(uint *)(pZVar3 + DAT_000e74ac);
    uVar15 = *(uint *)(pZVar3 + DAT_000e74b0);
    iVar14 = ZombieCafe::calUserRankId(pZVar3,(uint)(byte)pZVar3[DAT_000e74e0]);
    MALTAHoover::send(pMVar5,(char *)(DAT_000e74e8 + 0xe7466),uVar9,uVar7,uVar15,uVar13,iVar14,
                      acStack_dc,*(char **)(DAT_000e74e4 + 0xe7462));
    Stove::autoFinishCooking(*(Stove **)(param_1 + 0x84));
    if (param_1[0xb9] != (CookCommandBar)0x0) {
      Stove::removeBurned();
    }
  }
  if (local_1c == *piVar11) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


