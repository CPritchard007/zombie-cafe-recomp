/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b02e4 GameStateEventRaid2Menu::sendMaltaLog_CafeMember */

/* GameStateEventRaid2Menu::sendMaltaLog_CafeMember() */

void __thiscall GameStateEventRaid2Menu::sendMaltaLog_CafeMember(GameStateEventRaid2Menu *this)

{
  char *__dest;
  char *__s;
  int iVar1;
  int iVar2;
  MALTAHoover *pMVar3;
  SServer *pSVar4;
  ZombieCafe *pZVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int *piVar14;
  undefined4 uStack_4;
  undefined4 *puVar15;
  uint *puVar16;
  
  iVar1 = DAT_001b0428;
  puVar10 = *(undefined4 **)(DAT_001b0424 + 0x1b02f0);
  piVar14 = (int *)(&stack0xffffffec + DAT_001b0428);
  puVar15 = (undefined4 *)(&stack0xffffffec + DAT_001b0428);
  puVar16 = (uint *)(&stack0xffffffec + DAT_001b0428);
  iVar13 = 0;
  *(undefined4 *)(&stack0xffffffec + DAT_001b042c + DAT_001b0428) = *puVar10;
  pMVar3 = (MALTAHoover *)MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  iVar2 = DAT_001b043c;
  MALTAHoover::init(pMVar3,(char *)(DAT_001b0430 + 0x1b031a),(char *)(DAT_001b0434 + 0x1b031c),
                    (char *)(DAT_001b0438 + 0x1b0318));
  memset(&stack0x00000028 + iVar1,0,0x40);
  pSVar4 = (SServer *)MALTAHoover::GetInstance();
  puVar9 = *(undefined4 **)(iVar2 + 0x1b0322);
  MALTAHoover::getFBID(pSVar4,(char *)*puVar9);
  memset(&stack0x00000068 + iVar1,0,0x40);
  pSVar4 = (SServer *)MALTAHoover::GetInstance();
  iVar2 = DAT_001b0440;
  MALTAHoover::getGCID(pSVar4,(char *)*puVar9);
  memset(&stack0x000000a8 + iVar1,0,0x80);
  *(undefined4 **)(&stack0x00000010 + iVar1) = puVar10;
  while( true ) {
    uVar7 = 0;
    if (iVar13 < *(int *)(*(int *)(this + 0xc) + DAT_001b0448 + 4) + 1) {
      uVar7 = (uint)*(ushort *)
                     (**(int **)(iVar13 * 4 + *(int *)(*(int *)(this + 0xc) + DAT_001b0448 + 8)) +
                     DAT_001b044c);
    }
    __dest = &stack0x000000a8 + iVar1;
    snprintf(&stack0x00000018 + iVar1,0x10,(char *)(iVar2 + 0x1b035e),uVar7);
    iVar13 = iVar13 + 1;
    strcat(__dest,&stack0x00000018 + iVar1);
    if (iVar13 == 0xc) break;
    strcat(__dest,(char *)(DAT_001b0444 + 0x1b0368));
  }
  __s = &stack0x00000128 + iVar1;
  memset(__s,0,0x400);
  *piVar14 = (int)(&stack0x00000068 + iVar1);
  *(char **)(&stack0xfffffff0 + iVar1) = __dest;
  snprintf(__s,0x400,(char *)(DAT_001b0450 + 0x1b03b8),&stack0x00000028 + iVar1);
  pMVar3 = (MALTAHoover *)MALTAHoover::GetInstance();
  pZVar5 = *(ZombieCafe **)(this + 0xc);
  *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(pZVar5 + 0x680);
  uVar6 = ZombieCafe::getToxin(pZVar5);
  *(undefined4 *)(&stack0x0000000c + iVar1) = uVar6;
  pZVar5 = *(ZombieCafe **)(this + 0xc);
  uVar11 = *(undefined4 *)(pZVar5 + DAT_001b0454);
  uVar12 = *(undefined4 *)(pZVar5 + DAT_001b0458);
  uVar6 = ZombieCafe::calUserRankId(pZVar5,(uint)(byte)pZVar5[DAT_001b045c]);
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar6;
  uVar7 = *(uint *)(&stack0x00000008 + iVar1);
  *(undefined4 *)((int)&uStack_4 + iVar1) = *(undefined4 *)(DAT_001b0460 + 0x1b03f6);
  uVar8 = *(uint *)(&stack0x0000000c + iVar1);
  *puVar15 = uVar11;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar12;
  *(char **)(&stack0xfffffff8 + iVar1) = __s;
  MALTAHoover::send(pMVar3,(char *)(DAT_001b0464 + 0x1b03fa),uVar7,uVar8,*puVar16,
                    *(uint *)(&stack0xfffffff0 + iVar1),*(int *)(&stack0xfffffff4 + iVar1),
                    *(char **)(&stack0xfffffff8 + iVar1),*(char **)((int)&uStack_4 + iVar1));
  if (*(int *)(&stack0xffffffec + DAT_001b042c + iVar1) != **(int **)(&stack0x00000010 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


