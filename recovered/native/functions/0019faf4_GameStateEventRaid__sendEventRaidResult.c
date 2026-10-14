/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019faf4 GameStateEventRaid::sendEventRaidResult */

/* GameStateEventRaid::sendEventRaidResult(int, int, int) */

void __thiscall
GameStateEventRaid::sendEventRaidResult
          (GameStateEventRaid *this,int param_1,int param_2,int param_3)

{
  char *__s;
  int iVar1;
  MALTAHoover *pMVar2;
  SServer *pSVar3;
  undefined4 uVar4;
  ZombieCafe *pZVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 uStack_4;
  undefined4 *puVar14;
  uint *puVar15;
  
  iVar1 = DAT_0019fbf4;
  piVar10 = *(int **)(DAT_0019fbf0 + 0x19fb00);
  puVar13 = (undefined4 *)(&stack0xffffffec + DAT_0019fbf4);
  puVar14 = (undefined4 *)(&stack0xffffffec + DAT_0019fbf4);
  puVar15 = (uint *)(&stack0xffffffec + DAT_0019fbf4);
  *(int *)(&stack0x00000010 + DAT_0019fbf4) = param_3;
  iVar7 = *piVar10;
  *(int *)(&stack0x00000008 + DAT_0019fbf4) = param_1;
  *(int *)(&stack0x0000000c + DAT_0019fbf4) = param_2;
  *(int *)(&stack0x00000298 + DAT_0019fbf4) = iVar7;
  pMVar2 = (MALTAHoover *)MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  iVar7 = DAT_0019fc04;
  MALTAHoover::init(pMVar2,(char *)(DAT_0019fbf8 + 0x19fb2a),(char *)(DAT_0019fbfc + 0x19fb2c),
                    (char *)(DAT_0019fc00 + 0x19fb28));
  memset(&stack0x00000018 + iVar1,0,0x40);
  pSVar3 = (SServer *)MALTAHoover::GetInstance();
  puVar9 = *(undefined4 **)(iVar7 + 0x19fb32);
  MALTAHoover::getFBID(pSVar3,(char *)*puVar9);
  memset(&stack0x00000058 + iVar1,0,0x40);
  pSVar3 = (SServer *)MALTAHoover::GetInstance();
  MALTAHoover::getGCID(pSVar3,(char *)*puVar9);
  __s = &stack0x00000098 + iVar1;
  memset(__s,0,0x200);
  *puVar13 = &stack0x00000058 + iVar1;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(this + 0x1c);
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = *(undefined4 *)(&stack0x00000008 + iVar1);
  *(undefined4 *)((int)&uStack_4 + iVar1) = *(undefined4 *)(&stack0x0000000c + iVar1);
  *(undefined4 *)(&stack0x00000000 + iVar1) = *(undefined4 *)(&stack0x00000010 + iVar1);
  snprintf(__s,0x200,(char *)(DAT_0019fc08 + 0x19fb82),&stack0x00000018 + iVar1);
  uVar4 = MALTAHoover::GetInstance();
  *(undefined4 *)(&stack0x00000008 + iVar1) = uVar4;
  pZVar5 = *(ZombieCafe **)(this + 0xc);
  *(undefined4 *)(&stack0x0000000c + iVar1) = *(undefined4 *)(pZVar5 + 0x680);
  uVar4 = ZombieCafe::getToxin(pZVar5);
  *(undefined4 *)(&stack0x00000010 + iVar1) = uVar4;
  pZVar5 = *(ZombieCafe **)(this + 0xc);
  uVar11 = *(undefined4 *)(pZVar5 + DAT_0019fc0c);
  uVar12 = *(undefined4 *)(pZVar5 + DAT_0019fc10);
  uVar4 = ZombieCafe::calUserRankId(pZVar5,(uint)(byte)pZVar5[DAT_0019fc14]);
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar4;
  uVar6 = *(uint *)(&stack0x0000000c + iVar1);
  *(undefined4 *)((int)&uStack_4 + iVar1) = *(undefined4 *)(DAT_0019fc18 + 0x19fbc6);
  pMVar2 = *(MALTAHoover **)(&stack0x00000008 + iVar1);
  uVar8 = *(uint *)(&stack0x00000010 + iVar1);
  *puVar14 = uVar11;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar12;
  *(char **)(&stack0xfffffff8 + iVar1) = __s;
  MALTAHoover::send(pMVar2,(char *)(DAT_0019fc1c + 0x19fbcc),uVar6,uVar8,*puVar15,
                    *(uint *)(&stack0xfffffff0 + iVar1),*(int *)(&stack0xfffffff4 + iVar1),
                    *(char **)(&stack0xfffffff8 + iVar1),*(char **)((int)&uStack_4 + iVar1));
  if (*(int *)(&stack0x00000298 + iVar1) != *piVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


