/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a5450 GameStateEventRaidMenu::sendMaltaLog_CafeMember */

/* GameStateEventRaidMenu::sendMaltaLog_CafeMember() */

void __thiscall GameStateEventRaidMenu::sendMaltaLog_CafeMember(GameStateEventRaidMenu *this)

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
  
  iVar1 = DAT_001a5594;
  puVar10 = *(undefined4 **)(DAT_001a5590 + 0x1a545c);
  piVar14 = (int *)(&stack0xffffffec + DAT_001a5594);
  puVar15 = (undefined4 *)(&stack0xffffffec + DAT_001a5594);
  puVar16 = (uint *)(&stack0xffffffec + DAT_001a5594);
  iVar13 = 0;
  *(undefined4 *)(&stack0xffffffec + DAT_001a5598 + DAT_001a5594) = *puVar10;
  pMVar3 = (MALTAHoover *)MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  iVar2 = DAT_001a55a8;
  MALTAHoover::init(pMVar3,(char *)(DAT_001a559c + 0x1a5486),(char *)(DAT_001a55a0 + 0x1a5488),
                    (char *)(DAT_001a55a4 + 0x1a5484));
  memset(&stack0x00000028 + iVar1,0,0x40);
  pSVar4 = (SServer *)MALTAHoover::GetInstance();
  puVar9 = *(undefined4 **)(iVar2 + 0x1a548e);
  MALTAHoover::getFBID(pSVar4,(char *)*puVar9);
  memset(&stack0x00000068 + iVar1,0,0x40);
  pSVar4 = (SServer *)MALTAHoover::GetInstance();
  iVar2 = DAT_001a55ac;
  MALTAHoover::getGCID(pSVar4,(char *)*puVar9);
  memset(&stack0x000000a8 + iVar1,0,0x80);
  *(undefined4 **)(&stack0x00000010 + iVar1) = puVar10;
  while( true ) {
    uVar7 = 0;
    if (iVar13 < *(int *)(*(int *)(this + 0xc) + DAT_001a55b4 + 4) + 1) {
      uVar7 = (uint)*(ushort *)
                     (**(int **)(iVar13 * 4 + *(int *)(*(int *)(this + 0xc) + DAT_001a55b4 + 8)) +
                     DAT_001a55b8);
    }
    __dest = &stack0x000000a8 + iVar1;
    snprintf(&stack0x00000018 + iVar1,0x10,(char *)(iVar2 + 0x1a54ca),uVar7);
    iVar13 = iVar13 + 1;
    strcat(__dest,&stack0x00000018 + iVar1);
    if (iVar13 == 0xc) break;
    strcat(__dest,(char *)(DAT_001a55b0 + 0x1a54d4));
  }
  __s = &stack0x00000128 + iVar1;
  memset(__s,0,0x400);
  *piVar14 = (int)(&stack0x00000068 + iVar1);
  *(char **)(&stack0xfffffff0 + iVar1) = __dest;
  snprintf(__s,0x400,(char *)(DAT_001a55bc + 0x1a5524),&stack0x00000028 + iVar1);
  pMVar3 = (MALTAHoover *)MALTAHoover::GetInstance();
  pZVar5 = *(ZombieCafe **)(this + 0xc);
  *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(pZVar5 + 0x680);
  uVar6 = ZombieCafe::getToxin(pZVar5);
  *(undefined4 *)(&stack0x0000000c + iVar1) = uVar6;
  pZVar5 = *(ZombieCafe **)(this + 0xc);
  uVar11 = *(undefined4 *)(pZVar5 + DAT_001a55c0);
  uVar12 = *(undefined4 *)(pZVar5 + DAT_001a55c4);
  uVar6 = ZombieCafe::calUserRankId(pZVar5,(uint)(byte)pZVar5[DAT_001a55c8]);
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar6;
  uVar7 = *(uint *)(&stack0x00000008 + iVar1);
  *(undefined4 *)((int)&uStack_4 + iVar1) = *(undefined4 *)(DAT_001a55cc + 0x1a5562);
  uVar8 = *(uint *)(&stack0x0000000c + iVar1);
  *puVar15 = uVar11;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar12;
  *(char **)(&stack0xfffffff8 + iVar1) = __s;
  MALTAHoover::send(pMVar3,(char *)(DAT_001a55d0 + 0x1a5566),uVar7,uVar8,*puVar16,
                    *(uint *)(&stack0xfffffff0 + iVar1),*(int *)(&stack0xfffffff4 + iVar1),
                    *(char **)(&stack0xfffffff8 + iVar1),*(char **)((int)&uStack_4 + iVar1));
  if (*(int *)(&stack0xffffffec + DAT_001a5598 + iVar1) != **(int **)(&stack0x00000010 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


