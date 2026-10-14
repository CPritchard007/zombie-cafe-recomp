/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024fbe8 ZombieCafe::GiveBoughtToxin */

/* ZombieCafe::GiveBoughtToxin(int, int) */

void __thiscall ZombieCafe::GiveBoughtToxin(ZombieCafe *this,int param_1,int param_2)

{
  char *__s;
  int iVar1;
  SServer *pSVar2;
  int iVar3;
  MALTAHoover *pMVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 uStack_4;
  int *piVar16;
  undefined4 *puVar17;
  uint *puVar18;
  int *piVar19;
  int *piVar20;
  uint *puVar21;
  
  iVar1 = DAT_0024fe30;
  puVar13 = *(undefined4 **)(DAT_0024fe2c + 0x24fbf4);
  puVar15 = (undefined4 *)(&stack0xffffffec + DAT_0024fe30);
  piVar16 = (int *)(&stack0xffffffec + DAT_0024fe30);
  puVar17 = (undefined4 *)(&stack0xffffffec + DAT_0024fe30);
  puVar18 = (uint *)(&stack0xffffffec + DAT_0024fe30);
  piVar19 = (int *)(&stack0xffffffec + DAT_0024fe30);
  piVar20 = (int *)(&stack0xffffffec + DAT_0024fe30);
  puVar21 = (uint *)(&stack0xffffffec + DAT_0024fe30);
  uVar9 = *puVar13;
  *(int *)(&stack0x00000008 + DAT_0024fe30) = param_2;
  *(undefined4 *)(&stack0x00000320 + DAT_0024fe30) = uVar9;
  sprintf(&stack0x00000120 + DAT_0024fe30,(char *)(DAT_0024fe34 + 0x24fc00));
  iVar3 = DAT_0024fe3c;
  L_PrintLog((char *)(DAT_0024fe38 + 0x24fc12),&stack0x00000120 + iVar1);
  L_PrintLog((char *)(DAT_0024fe40 + 0x24fc1e),(char *)(DAT_0024fe44 + 0x24fc20));
  L_PrintLog((char *)(iVar3 + 0x24fc1c),(char *)(DAT_0024fe48 + 0x24fc2a));
  *(undefined4 **)(&stack0x00000018 + iVar1) = puVar13;
  if (*(int *)(&stack0x00000008 + iVar1) < 5) {
    addToxin(this,param_1,true);
    purchaseWasMade();
    save();
    saveServerData(this,false);
    L_PrintLog((char *)(iVar3 + 0x24fc1c),(char *)(DAT_0024fe4c + 0x24fc5e));
    iVar3 = DAT_0024fe54;
    uVar9 = CCServer::GetMyUserID(*(void **)(this + DAT_0024fe50));
    iVar5 = DAT_0024fe58;
    uVar10 = *(undefined4 *)(this + 0x680);
    uVar6 = *(undefined4 *)(this + iVar3);
    *(undefined4 *)(&stack0x00000008 + iVar1) = uVar9;
    *(undefined4 *)(&stack0x0000000c + iVar1) = uVar10;
    *(undefined4 *)(&stack0x00000010 + iVar1) = uVar6;
    *(undefined4 *)(&stack0x00000014 + iVar1) = *(undefined4 *)(this + DAT_0024fe58);
    uVar9 = getToxin(this);
    *puVar15 = *(undefined4 *)(&stack0x00000008 + iVar1);
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(&stack0x0000000c + iVar1);
    *(undefined4 *)((int)&uStack_4 + iVar1) = uVar9;
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = *(undefined4 *)(&stack0x00000010 + iVar1);
    *(int *)(&stack0x00000000 + iVar1) = param_1;
    *(undefined4 *)(&stack0xfffffff8 + iVar1) = *(undefined4 *)(&stack0x00000014 + iVar1);
    snprintf(&stack0x000000a0 + iVar1,0x80,(char *)(DAT_0024fe5c + 0x24fc92),DAT_0024fe60 + 0x24fc94
            );
    CCMarketing_RecordAnalyticsEvent
              (*(undefined4 *)(this + DAT_0024fe64),DAT_0024fe68 + 0x24fcb4,&stack0x000000a0 + iVar1
              );
    memset(&stack0x00000020 + iVar1,0,0x40);
    pSVar2 = (SServer *)MALTAHoover::GetInstance();
    iVar3 = MALTAHoover::getFBID(pSVar2,(char *)**(undefined4 **)(DAT_0024fe6c + 0x24fccc));
    if (iVar3 == 0) {
      L_PrintLog((char *)(DAT_0024fe70 + 0x24fcde),&stack0x00000020 + iVar1);
    }
    pMVar4 = (MALTAHoover *)MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    __s = &stack0x00000060 + iVar1;
    MALTAHoover::init(pMVar4,(char *)(DAT_0024fe74 + 0x24fcfa),(char *)(DAT_0024fe78 + 0x24fd00),
                      (char *)(DAT_0024fe7c + 0x24fcfe));
    memset(__s,0,0x40);
    *piVar16 = param_1;
    snprintf(__s,0x40,(char *)(DAT_0024fe80 + 0x24fd16),&stack0x00000020 + iVar1);
    L_PrintLog((char *)(DAT_0024fe84 + 0x24fd24),(char *)(DAT_0024fe88 + 0x24fd26));
    uVar9 = MALTAHoover::GetInstance();
    uVar6 = *(undefined4 *)(this + 0x680);
    *(undefined4 *)(&stack0x00000008 + iVar1) = uVar9;
    *(undefined4 *)(&stack0x0000000c + iVar1) = uVar6;
    uVar9 = getToxin(this);
    *(undefined4 *)(&stack0x00000010 + iVar1) = uVar9;
    uVar6 = *(undefined4 *)(this + iVar5);
    *(undefined4 *)(&stack0x00000014 + iVar1) = *(undefined4 *)(this + DAT_0024fe54);
    uVar9 = calUserRankId(this,(uint)(byte)this[DAT_0024fe8c]);
    uVar7 = *(uint *)(&stack0x0000000c + iVar1);
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(&stack0x00000014 + iVar1);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar9;
    uVar9 = *(undefined4 *)(DAT_0024fe94 + 0x24fd62);
    pMVar4 = *(MALTAHoover **)(&stack0x00000008 + iVar1);
    *puVar17 = uVar6;
    *(undefined4 *)((int)&uStack_4 + iVar1) = uVar9;
    *(char **)(&stack0xfffffff8 + iVar1) = __s;
    MALTAHoover::send(pMVar4,(char *)(DAT_0024fe90 + 0x24fd5e),uVar7,
                      *(uint *)(&stack0x00000010 + iVar1),*puVar18,
                      *(uint *)(&stack0xfffffff0 + iVar1),*(int *)(&stack0xfffffff4 + iVar1),
                      *(char **)(&stack0xfffffff8 + iVar1),*(char **)((int)&uStack_4 + iVar1));
    L_PrintLog((char *)(DAT_0024fe98 + 0x24fd78),(char *)(DAT_0024fe9c + 0x24fd7a));
    *(int *)(this + DAT_0024fea0) = param_1;
    Platform::getAppTime();
    iVar5 = __fixdfsi();
    iVar3 = DAT_0024fea8;
    *(int *)(this + DAT_0024fea4) = iVar5;
    iVar11 = *(int *)(this + 0xb90);
    *piVar19 = iVar5;
    *(int *)(&stack0xfffffff0 + iVar1) = iVar5 - iVar11;
    snprintf(&stack0x00000220 + iVar1,0x100,(char *)(iVar3 + 0x24fd9a));
    L_PrintLog((char *)(DAT_0024feac + 0x24fdae),&stack0x00000220 + iVar1);
    L_PrintLog((char *)(DAT_0024feb0 + 0x24fdb8),(char *)(DAT_0024feb4 + 0x24fdba));
    uVar14 = *(uint *)(this + 0x840);
    uVar9 = *(undefined4 *)(this + 0x680);
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(this + DAT_0024feb8);
    *(undefined4 *)(&stack0x00000010 + iVar1) = uVar9;
    *(undefined4 *)(&stack0x0000000c + iVar1) = *(undefined4 *)(this + DAT_0024febc);
    iVar3 = getToxin(this);
    uVar8 = *(uint *)(&stack0x0000000c + iVar1);
    uVar12 = *(uint *)(&stack0x00000010 + iVar1);
    uVar7 = *(uint *)(&stack0x00000008 + iVar1);
    *piVar20 = iVar3 - param_1;
    *(int *)(&stack0xfffffff0 + iVar1) = (iVar5 - iVar11) * 1000;
    CRAMHoover::recordInAppPurchase(uVar14,uVar7,uVar8,uVar12,*puVar21);
    this[DAT_0024fec0] = (ZombieCafe)0x1;
  }
  else {
    GiveBoughtHCO(this,*(int *)(&stack0x00000008 + iVar1));
  }
  L_PrintLog((char *)(DAT_0024fec4 + 0x24fe0a),(char *)(DAT_0024fec8 + 0x24fe0c));
  L_PurchaseDBSetComplete(this);
  if (*(int *)(&stack0x00000320 + iVar1) != **(int **)(&stack0x00000018 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


