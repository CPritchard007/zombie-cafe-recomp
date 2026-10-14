/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c53c0 GameStatePrizeMenu::sendMaltaLog_PEX */

/* GameStatePrizeMenu::sendMaltaLog_PEX(int, int) */

void __thiscall
GameStatePrizeMenu::sendMaltaLog_PEX(GameStatePrizeMenu *this,int param_1,int param_2)

{
  char *__s;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  MALTAHoover *pMVar4;
  SServer *pSVar5;
  ZombieCafe *pZVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 uStack_4;
  undefined4 *puVar14;
  uint *puVar15;
  
  iVar1 = DAT_001c54e0;
  piVar13 = (int *)(&stack0xffffffec + DAT_001c54e0);
  puVar14 = (undefined4 *)(&stack0xffffffec + DAT_001c54e0);
  puVar15 = (uint *)(&stack0xffffffec + DAT_001c54e0);
  uVar3 = **(undefined4 **)(DAT_001c54dc + 0x1c53cc);
  *(undefined4 **)(&stack0x00000010 + DAT_001c54e0) = *(undefined4 **)(DAT_001c54dc + 0x1c53cc);
  *(undefined4 *)(&stack0x00000498 + DAT_001c54e0) = uVar3;
  if (param_1 == 0x19) {
    iVar11 = 0;
    *(undefined4 *)(&stack0x00000004 + DAT_001c54e0) = 0;
  }
  else if (param_1 == 0xc) {
    iVar11 = 0;
    *(int *)(&stack0x00000004 + DAT_001c54e0) = param_2;
    param_2 = 0;
  }
  else {
    iVar11 = param_2;
    if ((param_1 != 0x10) && (iVar11 = DAT_001c54e4, param_1 != 0x1a)) goto LAB_001c54c4;
    param_2 = 0;
    *(undefined4 *)(&stack0x00000004 + DAT_001c54e0) = 0;
  }
  pMVar4 = (MALTAHoover *)MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  iVar2 = DAT_001c54f4;
  MALTAHoover::init(pMVar4,(char *)(DAT_001c54e8 + 0x1c5420),(char *)(DAT_001c54ec + 0x1c5422),
                    (char *)(DAT_001c54f0 + 0x1c541e));
  memset(&stack0x00000018 + iVar1,0,0x40);
  pSVar5 = (SServer *)MALTAHoover::GetInstance();
  puVar9 = *(undefined4 **)(iVar2 + 0x1c5428);
  MALTAHoover::getFBID(pSVar5,(char *)*puVar9);
  memset(&stack0x00000058 + iVar1,0,0x40);
  pSVar5 = (SServer *)MALTAHoover::GetInstance();
  MALTAHoover::getGCID(pSVar5,(char *)*puVar9);
  __s = &stack0x00000098 + iVar1;
  memset(__s,0,0x400);
  uVar3 = *(undefined4 *)(&stack0x00000004 + iVar1);
  *piVar13 = (int)(&stack0x00000058 + iVar1);
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar3;
  *(int *)(&stack0xfffffff0 + iVar1) = param_2;
  *(int *)(&stack0xfffffff8 + iVar1) = iVar11;
  snprintf(__s,0x400,(char *)(DAT_001c54f8 + 0x1c5470),&stack0x00000018 + iVar1);
  uVar3 = MALTAHoover::GetInstance();
  *(undefined4 *)(&stack0x00000004 + iVar1) = uVar3;
  pZVar6 = *(ZombieCafe **)(this + 0xc);
  *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(pZVar6 + 0x680);
  uVar3 = ZombieCafe::getToxin(pZVar6);
  *(undefined4 *)(&stack0x0000000c + iVar1) = uVar3;
  pZVar6 = *(ZombieCafe **)(this + 0xc);
  uVar10 = *(undefined4 *)(pZVar6 + DAT_001c54fc);
  uVar12 = *(undefined4 *)(pZVar6 + DAT_001c5500);
  uVar3 = ZombieCafe::calUserRankId(pZVar6,(uint)(byte)pZVar6[DAT_001c5504]);
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar3;
  pMVar4 = *(MALTAHoover **)(&stack0x00000004 + iVar1);
  *(undefined4 *)((int)&uStack_4 + iVar1) = *(undefined4 *)(DAT_001c5508 + 0x1c54b0);
  uVar7 = *(uint *)(&stack0x00000008 + iVar1);
  uVar8 = *(uint *)(&stack0x0000000c + iVar1);
  *puVar14 = uVar10;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar12;
  *(char **)(&stack0xfffffff8 + iVar1) = __s;
  MALTAHoover::send(pMVar4,(char *)(DAT_001c550c + 0x1c54b4),uVar7,uVar8,*puVar15,
                    *(uint *)(&stack0xfffffff0 + iVar1),*(int *)(&stack0xfffffff4 + iVar1),
                    *(char **)(&stack0xfffffff8 + iVar1),*(char **)((int)&uStack_4 + iVar1));
LAB_001c54c4:
  if (*(int *)(&stack0x00000498 + iVar1) == **(int **)(&stack0x00000010 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


