/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bc4b0 BuyToxinDialog::DlcPurchaseSuccess */

/* BuyToxinDialog::DlcPurchaseSuccess(void*, unsigned int, char const*) */

void BuyToxinDialog::DlcPurchaseSuccess(void *param_1,uint param_2,char *param_3)

{
  ZombieCafe *pZVar1;
  MALTAHoover *pMVar2;
  SServer *pSVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  char acStack_19c [64];
  char acStack_15c [64];
  char acStack_11c [256];
  int local_1c;
  
  piVar11 = *(int **)(DAT_000bc674 + 0xbc4bc);
  local_1c = *piVar11;
  fVar14 = (float)L_PrintLog((char *)(DAT_000bc678 + 0xbc4c8),(char *)(DAT_000bc67c + 0xbc4ca));
  ZombieCafe::playEffect(*(int *)((int)param_1 + 0x68),fVar14);
  CRAMHoover::beginTrackEvent(*(char **)(*(int *)((int)param_1 + 0x68) + 0x840));
  ZombieCafe::addMixPanelHeader(*(ZombieCafe **)((int)param_1 + 0x68));
  CRAMHoover::addEventStringProperty
            (*(char **)(*(int *)((int)param_1 + 0x68) + 0x840),(char *)(DAT_000bc684 + 0xbc4fa));
  CRAMHoover::endTrackEvent();
  if (*(int **)((int)param_1 + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x6c) + 0x1c))();
    GameState::releaseHandle(*(GameState **)((int)param_1 + 0x6c));
    *(undefined4 *)((int)param_1 + 0x6c) = 0;
  }
  iVar4 = DAT_000bc688;
  pZVar1 = *(ZombieCafe **)((int)param_1 + 0x68);
  iVar8 = 0;
  *(undefined1 *)((int)param_1 + 0x14) = 0;
  iVar7 = 0;
  do {
    if (*(int *)(pZVar1 + iVar4 + 4) + 1 <= iVar7) {
LAB_000bc64a:
      if (*(code **)((int)param_1 + 0xb0) == (code *)0x0) {
        ZombieCafe::save();
      }
      else {
        (**(code **)((int)param_1 + 0xb0))(*(undefined4 *)((int)param_1 + 0xb4));
      }
      if (local_1c != *piVar11) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    puVar6 = (uint *)(*(int *)(pZVar1 + iVar4 + 8) + iVar8);
    uVar12 = puVar6[0x174];
    iVar8 = iVar8 + 0x5d8;
    if (*puVar6 == param_2) {
      ZombieCafe::recordHooverInAppPurchase(pZVar1,param_2,0);
      pMVar2 = (MALTAHoover *)MALTAHoover::GetInstance();
      MALTAHoover::GetInstance();
      MALTAHoover::GetInstance();
      MALTAHoover::init(pMVar2,(char *)(DAT_000bc68c + 0xbc56c),(char *)(DAT_000bc690 + 0xbc56e),
                        (char *)(DAT_000bc694 + 0xbc570));
      memset(acStack_19c,0,0x40);
      pSVar3 = (SServer *)MALTAHoover::GetInstance();
      iVar4 = MALTAHoover::getFBID(pSVar3,(char *)**(undefined4 **)(DAT_000bc698 + 0xbc58a));
      if (iVar4 == 0) {
        L_PrintLog((char *)(DAT_000bc69c + 0xbc59c),acStack_19c);
      }
      memset(acStack_15c,0,0x40);
      snprintf(acStack_15c,0x40,(char *)(DAT_000bc6a0 + 0xbc5b4),acStack_19c,uVar12);
      L_PrintLog((char *)(DAT_000bc6a4 + 0xbc5c2),(char *)(DAT_000bc6a8 + 0xbc5c4));
      pMVar2 = (MALTAHoover *)MALTAHoover::GetInstance();
      uVar9 = *(uint *)(*(ZombieCafe **)((int)param_1 + 0x68) + 0x680);
      uVar5 = ZombieCafe::getToxin(*(ZombieCafe **)((int)param_1 + 0x68));
      pZVar1 = *(ZombieCafe **)((int)param_1 + 0x68);
      uVar13 = *(uint *)(pZVar1 + DAT_000bc6ac);
      uVar10 = *(uint *)(pZVar1 + DAT_000bc6b0);
      iVar7 = ZombieCafe::calUserRankId(pZVar1,(uint)(byte)pZVar1[DAT_000bc6b4]);
      iVar4 = DAT_000bc6c0;
      MALTAHoover::send(pMVar2,(char *)(DAT_000bc6bc + 0xbc60c),uVar9,uVar5,uVar13,uVar10,iVar7,
                        acStack_15c,*(char **)(DAT_000bc6b8 + 0xbc5fa));
      L_PrintLog((char *)(iVar4 + 0xbc618),(char *)(DAT_000bc6c4 + 0xbc61c));
      sprintf(acStack_11c,(char *)(DAT_000bc6c8 + 0xbc628),uVar12);
      L_PrintLog((char *)(iVar4 + 0xbc618),acStack_11c);
      ZombieCafe::addToxin(*(ZombieCafe **)((int)param_1 + 0x68),uVar12,true);
      ZombieCafe::purchaseWasMade();
      goto LAB_000bc64a;
    }
    iVar7 = iVar7 + 1;
  } while( true );
}


