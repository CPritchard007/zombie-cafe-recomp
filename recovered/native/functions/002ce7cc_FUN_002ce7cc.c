/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ce7cc FUN_002ce7cc */

void FUN_002ce7cc(int *param_1,undefined4 param_2,uint param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  int iStack_4;
  undefined1 *puVar13;
  
  iVar2 = DAT_002ce9f0;
  puVar6 = *(undefined4 **)(DAT_002ce9ec + 0x2ce7da);
  puVar12 = (uint *)(&stack0xffffffec + DAT_002ce9f0);
  puVar13 = &stack0xffffffec + DAT_002ce9f0;
  uVar4 = *puVar6;
  *(undefined4 *)((int)&iStack_4 + DAT_002ce9f0) = param_2;
  *(undefined4 *)(&stack0xffffffec + DAT_002ce9f4 + DAT_002ce9f0) = uVar4;
  *(undefined4 **)(&stack0x00000000 + DAT_002ce9f0) = puVar6;
  if (3 < param_3) {
    *(undefined4 *)(*param_1 + 0x14) = 0x34;
    *(uint *)(*param_1 + 0x18) = param_3;
    (**(code **)*param_1)(param_1);
  }
  if (*(int *)((int)&iStack_4 + iVar2) == 0) {
    iVar7 = param_3 + 0x30;
  }
  else {
    iVar7 = param_3 + 0x2c;
  }
  iVar7 = param_1[iVar7 + 1];
  if (iVar7 == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x34;
    *(uint *)(*param_1 + 0x18) = param_3;
    (**(code **)*param_1)(param_1);
  }
  if (*param_4 == 0) {
    iVar3 = (**(code **)param_1[1])(param_1,1,0x590);
    *param_4 = iVar3;
  }
  iVar11 = *param_4;
  iVar3 = 1;
  *(int *)(iVar11 + 0x8c) = iVar7;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0;
  do {
    bVar1 = *(byte *)(iVar7 + iVar3);
    *(uint *)(&stack0xfffffff0 + iVar2) = (uint)bVar1;
    if (0x100 < (int)(*(int *)(&stack0xfffffff4 + iVar2) + (uint)bVar1)) {
      *(undefined4 *)(*param_1 + 0x14) = 9;
      (**(code **)*param_1)(param_1);
    }
    for (iVar8 = 0; *(int *)(&stack0xfffffff0 + iVar2) != iVar8; iVar8 = iVar8 + 1) {
      (&stack0x00000414)[iVar8 + *(int *)(&stack0xfffffff4 + iVar2) + iVar2] = (char)iVar3;
    }
    iVar3 = iVar3 + 1;
    *(int *)(&stack0xfffffff4 + iVar2) =
         *(int *)(&stack0xfffffff4 + iVar2) + *(int *)(&stack0xfffffff0 + iVar2);
  } while (iVar3 != 0x11);
  iVar3 = 0;
  (&stack0x00000414 + iVar2)[*(int *)(&stack0xfffffff4 + iVar2)] = 0;
  iVar8 = 0;
  *(uint *)(&stack0xfffffff8 + iVar2) = (byte)(&stack0x00000414)[iVar2] + 1;
  while (iVar5 = *(int *)(&stack0xfffffff8 + iVar2), (&stack0x00000414)[iVar8 + iVar2] != '\0') {
    iVar9 = iVar8 * 4;
    iVar10 = 0;
    *(int *)(&stack0x00000004 + iVar2) = iVar3 - iVar8;
    while( true ) {
      bVar1 = (&stack0x00000414)[iVar8 + iVar2];
      *(int *)(&stack0xfffffff0 + iVar2) = *(int *)(&stack0x00000004 + iVar2) + iVar8;
      if ((uint)bVar1 != iVar5 - 1U) break;
      iVar8 = iVar8 + 1;
      *(undefined4 *)(&stack0x00000010 + iVar10 + iVar9 + iVar2) =
           *(undefined4 *)(&stack0xfffffff0 + iVar2);
      iVar10 = iVar10 + 4;
    }
    if (1 << (iVar5 - 1U & 0xff) <= *(int *)(&stack0x00000004 + iVar2) + iVar8) {
      *(undefined4 *)(*param_1 + 0x14) = 9;
      (**(code **)*param_1)(param_1);
    }
    iVar3 = *(int *)(&stack0xfffffff0 + iVar2) << 1;
    *(int *)(&stack0xfffffff8 + iVar2) = *(int *)(&stack0xfffffff8 + iVar2) + 1;
  }
  iVar5 = 1;
  iVar3 = 0;
  iVar8 = iVar11;
  do {
    uVar4 = 0xffffffff;
    if (*(char *)(iVar7 + iVar5) != '\0') {
      *(int *)(iVar8 + 0x4c) = iVar3 - *(int *)(&stack0x00000010 + iVar3 * 4 + iVar2);
      iVar3 = iVar3 + (uint)*(byte *)(iVar7 + iVar5);
      uVar4 = *(undefined4 *)(&stack0x00000010 + (iVar3 + -1) * 4 + iVar2);
    }
    iVar5 = iVar5 + 1;
    *(undefined4 *)(iVar8 + 4) = uVar4;
    iVar8 = iVar8 + 4;
  } while (iVar5 != 0x11);
  *(undefined4 *)(iVar11 + 0x44) = DAT_002ce9f8;
  memset((void *)(iVar11 + 0x90),0,0x400);
  iVar8 = 1;
  iVar3 = 0;
  do {
    *(uint *)(&stack0xfffffff0 + iVar2) = 8U - iVar8;
    *(int *)(&stack0xfffffff8 + iVar2) = 1 << (8U - iVar8 & 0xff);
    for (iVar5 = 1; iVar5 <= (int)(uint)*(byte *)(iVar7 + iVar8); iVar5 = iVar5 + 1) {
      iVar9 = *(int *)(&stack0x00000010 + iVar3 * 4 + iVar2) <<
              (*(uint *)(&stack0xfffffff0 + iVar2) & 0xff);
      *(int *)(&stack0x00000004 + iVar2) = iVar11 + iVar9 * 4;
      *(int *)(&stack0x00000008 + iVar2) = iVar11 + iVar9;
      for (iVar9 = 0; 0 < *(int *)(&stack0xfffffff8 + iVar2) - iVar9; iVar9 = iVar9 + 1) {
        *(int *)(*(int *)(&stack0x00000004 + iVar2) + iVar9 * 4 + 0x90) = iVar8;
        iVar10 = *(int *)(&stack0x00000008 + iVar2);
        *puVar12 = (uint)*(byte *)(iVar7 + iVar3 + 0x11);
        *(undefined1 *)(iVar10 + iVar9 + 0x490) = *puVar13;
      }
      iVar3 = iVar3 + 1;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 9);
  iVar3 = 0;
  if (*(int *)((int)&iStack_4 + iVar2) != 0) {
    for (; iVar3 < *(int *)(&stack0xfffffff4 + iVar2); iVar3 = iVar3 + 1) {
      if (0xf < *(byte *)(iVar7 + iVar3 + 0x11)) {
        *(undefined4 *)(*param_1 + 0x14) = 9;
        (**(code **)*param_1)(param_1);
      }
    }
  }
  if (*(int *)(&stack0xffffffec + DAT_002ce9f4 + iVar2) == **(int **)(&stack0x00000000 + iVar2)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


