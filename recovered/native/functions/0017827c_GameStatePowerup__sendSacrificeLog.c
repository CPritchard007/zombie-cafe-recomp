/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017827c GameStatePowerup::sendSacrificeLog */

/* GameStatePowerup::sendSacrificeLog() */

void __thiscall GameStatePowerup::sendSacrificeLog(GameStatePowerup *this)

{
  int iVar1;
  SServer *pSVar2;
  MALTAHoover *pMVar3;
  ZombieCafe *pZVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  undefined4 *puVar11;
  char *__src;
  undefined4 *puVar12;
  char *__format;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  int *piVar16;
  int iStack_4;
  undefined4 *puVar17;
  uint *puVar18;
  
  iVar1 = DAT_00178414;
  puVar12 = *(undefined4 **)(DAT_00178410 + 0x178288);
  piVar16 = (int *)(&stack0xffffffec + DAT_00178414);
  puVar17 = (undefined4 *)(&stack0xffffffec + DAT_00178414);
  puVar18 = (uint *)(&stack0xffffffec + DAT_00178414);
  puVar11 = (undefined4 *)(DAT_00178418 + 0x178296);
  *(undefined4 *)(&stack0x00000228 + DAT_00178414) = *puVar12;
  memset(&stack0x00000028 + DAT_00178414,0,0x40);
  pSVar2 = (SServer *)MALTAHoover::GetInstance();
  puVar11 = (undefined4 *)*puVar11;
  iVar15 = 0;
  MALTAHoover::getFBID(pSVar2,(char *)*puVar11);
  memset(&stack0x00000068 + iVar1,0,0x40);
  pSVar2 = (SServer *)MALTAHoover::GetInstance();
  MALTAHoover::getGCID(pSVar2,(char *)*puVar11);
  memset(&stack0x000000a8 + iVar1,0,0x80);
  memset(&stack0x00000128 + iVar1,0,0x80);
  memset(&stack0x000001a8 + iVar1,0,0x80);
  strcpy(&stack0x00000128 + iVar1,(char *)(DAT_0017841c + 0x1782e8));
  *(undefined4 **)(&stack0x00000010 + iVar1) = puVar12;
  *(GameStatePowerup **)(&stack0x00000008 + iVar1) = this;
  __format = (char *)(DAT_00178420 + 0x1782f4);
  do {
    iVar6 = *(int *)(&stack0x00000008 + iVar1);
    iVar8 = *(int *)(iVar6 + 0x4d0);
    if (iVar8 != 0) {
      snprintf(&stack0x00000018 + iVar1,0x10,__format,
               (uint)*(ushort *)(**(int **)(iVar8 + 0x8c) + DAT_00178424));
      strcat(&stack0x00000128 + iVar1,&stack0x00000018 + iVar1);
      snprintf(&stack0x00000018 + iVar1,0x10,__format,
               *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x4d0) + 0x8c) + 0x28));
      strcat(&stack0x000001a8 + iVar1,&stack0x00000018 + iVar1);
      if (iVar15 != *(int *)(this + 0x4f8)) {
        __src = (char *)(DAT_00178428 + 0x178348);
        strcat(&stack0x00000128 + iVar1,__src);
        strcat(&stack0x000001a8 + iVar1,__src);
      }
    }
    iVar15 = iVar15 + 1;
    *(int *)(&stack0x00000008 + iVar1) = *(int *)(&stack0x00000008 + iVar1) + 4;
  } while (iVar15 != 10);
  pMVar3 = (MALTAHoover *)MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::init(pMVar3,(char *)(DAT_0017842c + 0x17837a),(char *)(DAT_00178430 + 0x17837c),
                    (char *)(DAT_00178434 + 0x17837e));
  piVar9 = *(int **)(*(int *)(this + 0x490) + 0x8c);
  *piVar16 = (int)(&stack0x00000068 + iVar1);
  *(uint *)(&stack0xfffffff0 + iVar1) = (uint)*(ushort *)(*piVar9 + DAT_00178424);
  *(int *)(&stack0xfffffff4 + iVar1) = piVar9[10];
  *(undefined1 **)(&stack0xfffffff8 + iVar1) = &stack0x00000128 + iVar1;
  *(undefined1 **)((int)&iStack_4 + iVar1) = &stack0x000001a8 + iVar1;
  snprintf(&stack0x000000a8 + iVar1,0x80,(char *)(DAT_00178438 + 0x17839a),&stack0x00000028 + iVar1)
  ;
  pMVar3 = (MALTAHoover *)MALTAHoover::GetInstance();
  pZVar4 = *(ZombieCafe **)(this + 0xc);
  *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(pZVar4 + 0x680);
  uVar5 = ZombieCafe::getToxin(pZVar4);
  *(undefined4 *)(&stack0x0000000c + iVar1) = uVar5;
  pZVar4 = *(ZombieCafe **)(this + 0xc);
  uVar13 = *(undefined4 *)(pZVar4 + DAT_0017843c);
  uVar14 = *(undefined4 *)(pZVar4 + DAT_00178440);
  uVar5 = ZombieCafe::calUserRankId(pZVar4,(uint)(byte)pZVar4[DAT_00178444]);
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar5;
  uVar7 = *(uint *)(&stack0x00000008 + iVar1);
  *(undefined4 *)((int)&iStack_4 + iVar1) = *(undefined4 *)(DAT_00178448 + 0x1783e4);
  uVar10 = *(uint *)(&stack0x0000000c + iVar1);
  *puVar17 = uVar13;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar14;
  *(undefined1 **)(&stack0xfffffff8 + iVar1) = &stack0x000000a8 + iVar1;
  MALTAHoover::send(pMVar3,(char *)(DAT_0017844c + 0x1783e8),uVar7,uVar10,*puVar18,
                    *(uint *)(&stack0xfffffff0 + iVar1),*(int *)(&stack0xfffffff4 + iVar1),
                    *(char **)(&stack0xfffffff8 + iVar1),*(char **)((int)&iStack_4 + iVar1));
  if (*(int *)(&stack0x00000228 + iVar1) != **(int **)(&stack0x00000010 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


