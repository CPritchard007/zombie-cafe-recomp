/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018f6a4 GameStateSurvivalMenu::sendSurvivalReopenLog */

/* GameStateSurvivalMenu::sendSurvivalReopenLog() */

void __thiscall GameStateSurvivalMenu::sendSurvivalReopenLog(GameStateSurvivalMenu *this)

{
  char *__s;
  int iVar1;
  SServer *pSVar2;
  undefined4 uVar3;
  ZombieCafe *pZVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uStack_4;
  undefined4 *puVar11;
  uint *puVar12;
  
  iVar1 = DAT_0018f798;
  piVar10 = (int *)(&stack0xffffffec + DAT_0018f798);
  puVar11 = (undefined4 *)(&stack0xffffffec + DAT_0018f798);
  puVar12 = (uint *)(&stack0xffffffec + DAT_0018f798);
  iVar6 = DAT_0018f7a0 + 0x18f6b8;
  piVar9 = *(int **)(iVar6 + DAT_0018f79c);
  *(int *)(&stack0x00000298 + DAT_0018f798) = *piVar9;
  memset(&stack0x00000018 + DAT_0018f798,0,0x40);
  pSVar2 = (SServer *)MALTAHoover::GetInstance();
  puVar7 = *(undefined4 **)(iVar6 + DAT_0018f7a4);
  MALTAHoover::getFBID(pSVar2,(char *)*puVar7);
  memset(&stack0x00000058 + iVar1,0,0x40);
  pSVar2 = (SServer *)MALTAHoover::GetInstance();
  MALTAHoover::getGCID(pSVar2,(char *)*puVar7);
  __s = &stack0x00000098 + iVar1;
  memset(__s,0,0x200);
  uVar3 = MALTAHoover::GetInstance();
  *(undefined4 *)(&stack0x00000004 + iVar1) = uVar3;
  MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::init(*(MALTAHoover **)(&stack0x00000004 + iVar1),(char *)(DAT_0018f7a8 + 0x18f70e),
                    (char *)(DAT_0018f7ac + 0x18f710),(char *)(DAT_0018f7b0 + 0x18f712));
  *piVar10 = (int)(&stack0x00000058 + iVar1);
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(iVar6 + DAT_0018f7b4);
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = *(undefined4 *)(*(int *)(iVar6 + DAT_0018f7bc) + 0x80)
  ;
  snprintf(__s,0x200,(char *)(DAT_0018f7b8 + 0x18f726),&stack0x00000018 + iVar1);
  uVar3 = MALTAHoover::GetInstance();
  *(undefined4 *)(&stack0x00000004 + iVar1) = uVar3;
  pZVar4 = *(ZombieCafe **)(this + 0xc);
  *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(pZVar4 + 0x680);
  uVar3 = ZombieCafe::getToxin(pZVar4);
  *(undefined4 *)(&stack0x0000000c + iVar1) = uVar3;
  pZVar4 = *(ZombieCafe **)(this + 0xc);
  uVar8 = *(undefined4 *)(pZVar4 + DAT_0018f7c0);
  *(undefined4 *)(&stack0x00000010 + iVar1) = *(undefined4 *)(pZVar4 + DAT_0018f7c4);
  uVar3 = ZombieCafe::calUserRankId(pZVar4,(uint)(byte)pZVar4[DAT_0018f7c8]);
  uVar5 = *(undefined4 *)(&stack0x00000010 + iVar1);
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar3;
  *puVar11 = uVar8;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar5;
  *(char **)(&stack0xfffffff8 + iVar1) = __s;
  *(undefined4 *)((int)&uStack_4 + iVar1) = *(undefined4 *)(iVar6 + DAT_0018f7cc);
  MALTAHoover::send(*(MALTAHoover **)(&stack0x00000004 + iVar1),(char *)(DAT_0018f7d0 + 0x18f77a),
                    *(uint *)(&stack0x00000008 + iVar1),*(uint *)(&stack0x0000000c + iVar1),*puVar12
                    ,*(uint *)(&stack0xfffffff0 + iVar1),*(int *)(&stack0xfffffff4 + iVar1),
                    *(char **)(&stack0xfffffff8 + iVar1),*(char **)((int)&uStack_4 + iVar1));
  if (*(int *)(&stack0x00000298 + iVar1) != *piVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


