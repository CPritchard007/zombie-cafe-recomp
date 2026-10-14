/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002472fc L_DlcPurchaseSuccess */

/* L_DlcPurchaseSuccess(void*, unsigned int, char const*) */

void L_DlcPurchaseSuccess(void *param_1,uint param_2,char *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  MALTAHoover *pMVar4;
  SServer *pSVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  char acStack_11c [64];
  char acStack_dc [64];
  char acStack_9c [128];
  int local_1c;
  
  piVar15 = *(int **)(DAT_00247494 + 0x247308);
  local_1c = *piVar15;
  L_PrintLog((char *)(DAT_00247498 + 0x247314),(char *)(DAT_0024749c + 0x247316));
  iVar8 = DAT_002474a8;
  iVar12 = 0;
  iVar11 = 0;
  do {
    if (*(int *)((int)param_1 + DAT_002474a0 + 4) + 1 <= iVar11) {
      CapcomLinkedList<unsigned_int>::add
                ((CapcomLinkedList<unsigned_int> *)((int)param_1 + 0x6c8),param_2);
LAB_00247480:
      if (local_1c != *piVar15) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    puVar9 = (uint *)(*(int *)((int)param_1 + DAT_002474a0 + 8) + iVar12);
    uVar16 = puVar9[0x174];
    iVar12 = iVar12 + 0x5d8;
    if (*puVar9 == param_2) {
      uVar1 = CCServer::GetMyUserID(*(void **)((int)param_1 + DAT_002474a4));
      uVar13 = *(undefined4 *)((int)param_1 + iVar8);
      uVar2 = *(undefined4 *)((int)param_1 + DAT_002474ac);
      uVar10 = *(undefined4 *)((int)param_1 + 0x680);
      uVar3 = ZombieCafe::getToxin((ZombieCafe *)param_1);
      snprintf(acStack_9c,0x80,(char *)(DAT_002474b0 + 0x24737a),uVar1,uVar10,uVar13,uVar2,uVar3,
               uVar16);
      CCMarketing_RecordAnalyticsEvent
                (*(undefined4 *)((int)param_1 + DAT_002474b4),DAT_002474b8 + 0x247396,acStack_9c);
      pMVar4 = (MALTAHoover *)MALTAHoover::GetInstance();
      MALTAHoover::GetInstance();
      MALTAHoover::GetInstance();
      MALTAHoover::init(pMVar4,(char *)(DAT_002474bc + 0x2473b0),(char *)(DAT_002474c0 + 0x2473b2),
                        (char *)(DAT_002474c4 + 0x2473b4));
      memset(acStack_11c,0,0x40);
      pSVar5 = (SServer *)MALTAHoover::GetInstance();
      iVar8 = DAT_002474ac;
      iVar11 = MALTAHoover::getFBID(pSVar5,(char *)**(undefined4 **)(DAT_002474c8 + 0x2473d0));
      if (iVar11 == 0) {
        L_PrintLog((char *)(DAT_002474cc + 0x2473e2),acStack_11c);
      }
      memset(acStack_dc,0,0x40);
      snprintf(acStack_dc,0x80,(char *)(DAT_002474d0 + 0x2473fa),acStack_11c,uVar16);
      L_PrintLog((char *)(DAT_002474d4 + 0x247408),(char *)(DAT_002474d8 + 0x24740a));
      pMVar4 = (MALTAHoover *)MALTAHoover::GetInstance();
      uVar14 = *(uint *)((int)param_1 + 0x680);
      uVar6 = ZombieCafe::getToxin((ZombieCafe *)param_1);
      uVar17 = *(uint *)((int)param_1 + iVar8);
      uVar7 = *(uint *)((int)param_1 + DAT_002474a8);
      iVar8 = ZombieCafe::calUserRankId
                        ((ZombieCafe *)param_1,(uint)*(byte *)((int)param_1 + DAT_002474dc));
      MALTAHoover::send(pMVar4,(char *)(DAT_002474e0 + 0x24744a),uVar14,uVar6,uVar17,uVar7,iVar8,
                        acStack_dc,*(char **)(DAT_002474e4 + 0x247446));
      ZombieCafe::addToxin((ZombieCafe *)param_1,uVar16,true);
      ZombieCafe::save();
      (**(code **)(**(int **)((int)param_1 + 8) + 0x1c))();
      goto LAB_00247480;
    }
    iVar11 = iVar11 + 1;
  } while( true );
}


