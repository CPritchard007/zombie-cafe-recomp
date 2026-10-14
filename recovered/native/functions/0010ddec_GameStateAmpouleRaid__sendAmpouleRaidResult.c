/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010ddec GameStateAmpouleRaid::sendAmpouleRaidResult */

/* GameStateAmpouleRaid::sendAmpouleRaidResult(int, int, int) */

void __thiscall
GameStateAmpouleRaid::sendAmpouleRaidResult
          (GameStateAmpouleRaid *this,int param_1,int param_2,int param_3)

{
  undefined1 *__s;
  char *__s_00;
  int iVar1;
  MALTAHoover *pMVar2;
  SServer *pSVar3;
  undefined4 uVar4;
  ZombieCafe *pZVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 uStack_4;
  undefined4 *puVar12;
  uint *puVar13;
  
  iVar1 = DAT_0010dedc;
  puVar11 = (undefined4 *)(&stack0xffffffec + DAT_0010dedc);
  puVar12 = (undefined4 *)(&stack0xffffffec + DAT_0010dedc);
  puVar13 = (uint *)(&stack0xffffffec + DAT_0010dedc);
  *(int *)(&stack0x00000010 + DAT_0010dedc) = param_3;
  *(int *)(&stack0x00000008 + DAT_0010dedc) = param_1;
  piVar8 = *(int **)(DAT_0010dee0 + 0x10ddfe);
  *(int *)(&stack0x0000000c + DAT_0010dedc) = param_2;
  __s = &stack0x00000058 + DAT_0010dedc;
  *(int *)(&stack0x00000298 + DAT_0010dedc) = *piVar8;
  pMVar2 = (MALTAHoover *)MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::init(pMVar2,(char *)(DAT_0010dee4 + 0x10de20),(char *)(DAT_0010dee8 + 0x10de24),
                    (char *)(DAT_0010deec + 0x10de22));
  memset(&stack0x00000018 + iVar1,0,0x40);
  pSVar3 = (SServer *)MALTAHoover::GetInstance();
  __s_00 = &stack0x00000098 + iVar1;
  MALTAHoover::getFBID(pSVar3,(char *)**(undefined4 **)(DAT_0010def0 + 0x10de3e));
  memset(__s,0,0x40);
  memset(__s_00,0,0x200);
  *puVar11 = __s;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(this + 0x24);
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = *(undefined4 *)(&stack0x00000008 + iVar1);
  *(undefined4 *)((int)&uStack_4 + iVar1) = *(undefined4 *)(&stack0x0000000c + iVar1);
  *(undefined4 *)(&stack0x00000000 + iVar1) = *(undefined4 *)(&stack0x00000010 + iVar1);
  snprintf(__s_00,0x200,(char *)(DAT_0010def4 + 0x10de6e),&stack0x00000018 + iVar1);
  uVar4 = MALTAHoover::GetInstance();
  *(undefined4 *)(&stack0x00000008 + iVar1) = uVar4;
  pZVar5 = *(ZombieCafe **)(this + 0xc);
  *(undefined4 *)(&stack0x0000000c + iVar1) = *(undefined4 *)(pZVar5 + 0x680);
  uVar4 = ZombieCafe::getToxin(pZVar5);
  *(undefined4 *)(&stack0x00000010 + iVar1) = uVar4;
  pZVar5 = *(ZombieCafe **)(this + 0xc);
  uVar9 = *(undefined4 *)(pZVar5 + DAT_0010def8);
  uVar10 = *(undefined4 *)(pZVar5 + DAT_0010defc);
  uVar4 = ZombieCafe::calUserRankId(pZVar5,(uint)(byte)pZVar5[DAT_0010df00]);
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar4;
  uVar6 = *(uint *)(&stack0x0000000c + iVar1);
  *(undefined4 *)((int)&uStack_4 + iVar1) = *(undefined4 *)(DAT_0010df04 + 0x10deb2);
  pMVar2 = *(MALTAHoover **)(&stack0x00000008 + iVar1);
  uVar7 = *(uint *)(&stack0x00000010 + iVar1);
  *puVar12 = uVar9;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar10;
  *(char **)(&stack0xfffffff8 + iVar1) = __s_00;
  MALTAHoover::send(pMVar2,(char *)(DAT_0010df08 + 0x10deb8),uVar6,uVar7,*puVar13,
                    *(uint *)(&stack0xfffffff0 + iVar1),*(int *)(&stack0xfffffff4 + iVar1),
                    *(char **)(&stack0xfffffff8 + iVar1),*(char **)((int)&uStack_4 + iVar1));
  if (*(int *)(&stack0x00000298 + iVar1) != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


