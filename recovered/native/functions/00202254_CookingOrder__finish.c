/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00202254 CookingOrder::finish */

/* CookingOrder::finish(CookingOrder*) */

void CookingOrder::finish(CookingOrder *param_1)

{
  int iVar1;
  Recipe *this;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  MALTAHoover *pMVar5;
  SServer *pSVar6;
  uint uVar7;
  int *piVar8;
  Furniture *this_00;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  code *pcVar14;
  int *piVar15;
  int iVar16;
  FoodStack *this_01;
  ZombieCafe *this_02;
  uint uVar17;
  char acStack_11c [64];
  char acStack_dc [64];
  char acStack_9c [128];
  int local_1c;
  
  piVar15 = *(int **)(DAT_0020246c + 0x202260);
  local_1c = *piVar15;
  iVar1 = CapcomApp::getInstance();
  this_02 = *(ZombieCafe **)(iVar1 + 4);
  iVar1 = Stove::isBurned(*(Stove **)(param_1 + 0x7c));
  iVar16 = 1;
  if (iVar1 == 0) {
    this_01 = *(FoodStack **)(*(int *)(param_1 + 0x7c) + 100);
    iVar16 = __divsi3(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x70),1000);
    this = (Recipe *)FoodStack::getRecipe(this_01);
    iVar16 = Recipe::getFinishToxinCost(this,(uchar)this_01[8],iVar16);
  }
  iVar2 = ZombieCafe::getToxin(this_02);
  if (iVar16 <= iVar2) {
    ZombieCafe::spendToxin(this_02,iVar16);
    this_02[DAT_00202470] = (ZombieCafe)0x1;
    CRAMHoover::beginTrackEvent(*(char **)(this_02 + 0x840));
    ZombieCafe::addMixPanelHeader(this_02);
    CRAMHoover::endTrackEvent();
    uVar3 = CCServer::GetMyUserID(*(void **)(this_02 + DAT_00202478));
    iVar2 = DAT_00202484;
    uVar9 = *(undefined4 *)(this_02 + 0x680);
    uVar12 = *(undefined4 *)(this_02 + DAT_0020247c);
    uVar10 = *(undefined4 *)(this_02 + DAT_00202480);
    uVar4 = ZombieCafe::getToxin(this_02);
    iVar16 = DAT_00202480;
    snprintf(acStack_9c,0x80,(char *)(DAT_00202488 + 0x202308),(char *)(iVar2 + 0x2022fe),uVar3,
             uVar9,uVar12,uVar10,uVar4,(uint)**(ushort **)(*(int *)(param_1 + 0x7c) + 100),
             (uint)(byte)(*(ushort **)(*(int *)(param_1 + 0x7c) + 100))[4]);
    CCMarketing_RecordAnalyticsEvent
              (*(undefined4 *)(this_02 + DAT_0020248c),DAT_00202490 + 0x202330,acStack_9c);
    pMVar5 = (MALTAHoover *)MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    MALTAHoover::init(pMVar5,(char *)(DAT_00202494 + 0x20234a),(char *)(DAT_00202498 + 0x20234c),
                      (char *)(iVar2 + 0x2022fe));
    memset(acStack_11c,0,0x40);
    pSVar6 = (SServer *)MALTAHoover::GetInstance();
    iVar2 = MALTAHoover::getFBID(pSVar6,(char *)**(undefined4 **)(DAT_0020249c + 0x202366));
    if (iVar2 == 0) {
      L_PrintLog((char *)(DAT_002024a0 + 0x202378),acStack_11c);
    }
    memset(acStack_dc,0,0x40);
    snprintf(acStack_dc,0x40,(char *)(DAT_002024a4 + 0x202392),acStack_11c,
             (uint)**(ushort **)(*(int *)(param_1 + 0x7c) + 100),
             (uint)(byte)(*(ushort **)(*(int *)(param_1 + 0x7c) + 100))[4]);
    L_PrintLog((char *)(DAT_002024a8 + 0x2023a8),(char *)(DAT_002024ac + 0x2023aa));
    pMVar5 = (MALTAHoover *)MALTAHoover::GetInstance();
    uVar13 = *(uint *)(this_02 + 0x680);
    uVar7 = ZombieCafe::getToxin(this_02);
    uVar11 = *(uint *)(this_02 + DAT_0020247c);
    uVar17 = *(uint *)(this_02 + iVar16);
    iVar16 = ZombieCafe::calUserRankId(this_02,(uint)(byte)this_02[DAT_002024b0]);
    MALTAHoover::send(pMVar5,(char *)(DAT_002024b4 + 0x2023e2),uVar13,uVar7,uVar17,uVar11,iVar16,
                      acStack_dc,*(char **)(DAT_002024b8 + 0x2023e6));
    Stove::autoFinishCooking(*(Stove **)(param_1 + 0x7c));
    if (iVar1 != 0) {
      piVar8 = (int *)(**(code **)(**(int **)(param_1 + 0x7c) + 0x20))();
      if (piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 4))();
      }
      piVar8 = *(int **)(param_1 + 0x7c);
      pcVar14 = *(code **)(*piVar8 + 0x1c);
      this_00 = (Furniture *)operator_new(100);
      Furniture::Furniture
                (this_00,*(FurnitureData **)
                          (**(int **)(DAT_002024bc + 0x20242e) * 4 +
                          *(int *)(*(int *)(this_02 + 0x7e8) + 0x94)));
      (*pcVar14)(piVar8,this_00);
    }
  }
  PendingOrderDialog::show(*(PendingOrderDialog **)(param_1 + 0x60));
  if (local_1c == *piVar15) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


