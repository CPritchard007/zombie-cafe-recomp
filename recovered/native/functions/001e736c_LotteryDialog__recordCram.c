/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e736c LotteryDialog::recordCram */

/* LotteryDialog::recordCram(int, int, int, int) */

void __thiscall
LotteryDialog::recordCram(LotteryDialog *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  ZombieCafe *pZVar3;
  SServer *pSVar4;
  MALTAHoover *this_00;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 uStack_4;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint *puVar15;
  
  iVar1 = DAT_001e74e0;
  piVar9 = *(int **)(DAT_001e74dc + 0x1e7378);
  puVar12 = (undefined4 *)(&stack0xffffffec + DAT_001e74e0);
  puVar13 = (undefined4 *)(&stack0xffffffec + DAT_001e74e0);
  puVar14 = (undefined4 *)(&stack0xffffffec + DAT_001e74e0);
  puVar15 = (uint *)(&stack0xffffffec + DAT_001e74e0);
  *(int *)(&stack0x0000001c + DAT_001e74e0) = param_2;
  *(int *)(&stack0x00000020 + DAT_001e74e0) = param_3;
  *(int *)(&stack0xffffffec + DAT_001e74e4 + DAT_001e74e0) = *piVar9;
  iVar5 = *(int *)(this + 0x60);
  *(int *)(&stack0x00000018 + DAT_001e74e0) = param_1;
  uVar2 = CCServer::GetMyUserID(*(void **)(iVar5 + DAT_001e74e8));
  *(undefined4 *)(&stack0x00000024 + iVar1) = uVar2;
  pZVar3 = *(ZombieCafe **)(this + 0x60);
  uVar2 = *(undefined4 *)(pZVar3 + DAT_001e74ec);
  pcVar10 = (char *)(DAT_001e74f0 + 0x1e73a6);
  *(undefined4 *)(&stack0x00000028 + iVar1) = *(undefined4 *)(pZVar3 + 0x680);
  *(undefined4 *)(&stack0x0000002c + iVar1) = uVar2;
  *(undefined4 *)(&stack0x00000030 + iVar1) = *(undefined4 *)(pZVar3 + DAT_001e74f4);
  uVar2 = ZombieCafe::getToxin(pZVar3);
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar2;
  *puVar12 = *(undefined4 *)(&stack0x00000024 + iVar1);
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(&stack0x00000028 + iVar1);
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = *(undefined4 *)(&stack0x0000002c + iVar1);
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = *(undefined4 *)(&stack0x00000030 + iVar1);
  *(undefined4 *)((int)&param_4 + iVar1) = *(undefined4 *)(&stack0x00000018 + iVar1);
  *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(&stack0x00000020 + iVar1);
  *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(&stack0x00000514 + iVar1);
  *(undefined4 *)(&stack0x0000000c + iVar1) = *(undefined4 *)(&stack0x0000001c + iVar1);
  snprintf(&stack0x00000078 + iVar1,0x80,(char *)(DAT_001e74f8 + 0x1e73c0),pcVar10);
  CCMarketing_RecordAnalyticsEvent
            (*(undefined4 *)(*(int *)(this + 0x60) + DAT_001e74fc),DAT_001e7500 + 0x1e73f4,
             &stack0x00000078 + iVar1);
  uVar2 = MALTAHoover::GetInstance();
  *(undefined4 *)(&stack0x00000024 + iVar1) = uVar2;
  MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::init(*(MALTAHoover **)(&stack0x00000024 + iVar1),(char *)(DAT_001e7504 + 0x1e7410),
                    (char *)(DAT_001e7508 + 0x1e7412),pcVar10);
  memset(&stack0x00000038 + iVar1,0,0x40);
  pSVar4 = (SServer *)MALTAHoover::GetInstance();
  iVar5 = MALTAHoover::getFBID(pSVar4,(char *)**(undefined4 **)(DAT_001e750c + 0x1e742e));
  if (iVar5 == 0) {
    L_PrintLog((char *)(DAT_001e7510 + 0x1e7440),&stack0x00000038 + iVar1);
  }
  pcVar10 = &stack0x000000f8 + iVar1;
  memset(pcVar10,0,0x400);
  *puVar13 = *(undefined4 *)(&stack0x00000018 + iVar1);
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(&stack0x00000020 + iVar1);
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = *(undefined4 *)(&stack0x00000514 + iVar1);
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = *(undefined4 *)(&stack0x0000001c + iVar1);
  snprintf(pcVar10,0x400,(char *)(DAT_001e7514 + 0x1e745e),&stack0x00000038 + iVar1);
  L_PrintLog((char *)(DAT_001e7518 + 0x1e747e),(char *)(DAT_001e751c + 0x1e7480));
  uVar2 = MALTAHoover::GetInstance();
  *(undefined4 *)(&stack0x00000018 + iVar1) = uVar2;
  pZVar3 = *(ZombieCafe **)(this + 0x60);
  *(undefined4 *)(&stack0x0000001c + iVar1) = *(undefined4 *)(pZVar3 + 0x680);
  uVar2 = ZombieCafe::getToxin(pZVar3);
  *(undefined4 *)(&stack0x00000020 + iVar1) = uVar2;
  pZVar3 = *(ZombieCafe **)(this + 0x60);
  uVar11 = *(undefined4 *)(pZVar3 + DAT_001e74ec);
  uVar8 = *(undefined4 *)(pZVar3 + DAT_001e74f4);
  uVar2 = ZombieCafe::calUserRankId(pZVar3,(uint)(byte)pZVar3[DAT_001e7520]);
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar2;
  uVar6 = *(uint *)(&stack0x0000001c + iVar1);
  *(undefined4 *)((int)&uStack_4 + iVar1) = *(undefined4 *)(DAT_001e7524 + 0x1e74b0);
  this_00 = *(MALTAHoover **)(&stack0x00000018 + iVar1);
  uVar7 = *(uint *)(&stack0x00000020 + iVar1);
  *puVar14 = uVar8;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar11;
  *(char **)(&stack0xfffffff8 + iVar1) = pcVar10;
  MALTAHoover::send(this_00,(char *)(DAT_001e7528 + 0x1e74b6),uVar6,uVar7,*puVar15,
                    *(uint *)(&stack0xfffffff0 + iVar1),*(int *)(&stack0xfffffff4 + iVar1),
                    *(char **)(&stack0xfffffff8 + iVar1),*(char **)((int)&uStack_4 + iVar1));
  if (*(int *)(&stack0xffffffec + DAT_001e74e4 + iVar1) != *piVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


