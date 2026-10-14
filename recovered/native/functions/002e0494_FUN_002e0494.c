/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e0494 FUN_002e0494 */

void FUN_002e0494(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  iVar1 = DAT_002e0578;
  *(undefined4 *)(&stack0xfffffff0 + DAT_002e0578) = param_1;
  puVar6 = *(undefined4 **)(DAT_002e057c + 0x2e04a6);
  piVar8 = *(int **)(&stack0x00000420 + DAT_002e0578);
  iVar9 = *(int *)(&stack0x0000041c + DAT_002e0578);
  *(undefined4 *)(&stack0x00000400 + DAT_002e0578) = *puVar6;
  iVar4 = *(int *)(&stack0xfffffff0 + DAT_002e0578);
  *(undefined4 **)(&stack0xfffffff8 + DAT_002e0578) = puVar6;
  if (*(int *)(iVar4 + 0x140) == param_2) {
    *(int *)(&stack0xfffffff4 + DAT_002e0578) = *piVar8;
    iVar2 = *param_4;
    *(undefined4 *)(iVar4 + 0x144) = param_3;
    *(undefined4 *)(iVar4 + 0x148) = 0;
    *(undefined4 *)(iVar4 + 0x154) = 0;
    if (iVar9 != 0) {
      *(int *)(iVar4 + 0x150) = iVar9;
    }
    iVar7 = *(int *)(&stack0xfffffff0 + iVar1);
    while( true ) {
      iVar4 = *(int *)(&stack0xfffffff4 + iVar1);
      *(int *)(iVar7 + 0x148) = iVar2 + *(int *)(iVar7 + 0x148);
      uVar3 = iVar4 + *(int *)(iVar7 + 0x154);
      if (iVar9 == 0) {
        *(undefined1 **)(iVar7 + 0x150) = &stack0x00000000 + iVar1;
        uVar5 = 0x400;
      }
      else {
        uVar5 = 0xffffffff;
      }
      if (uVar3 < uVar5) {
        uVar5 = uVar3;
      }
      iVar4 = *(int *)(&stack0xfffffff0 + iVar1);
      *(uint *)(iVar7 + 0x154) = uVar5;
      *(uint *)(&stack0xfffffff4 + iVar1) = uVar3 - uVar5;
      iVar4 = inflate(iVar4 + 0x144,(uVar3 - uVar5 == 0) * '\x04');
      if (iVar4 != 0) break;
      iVar2 = 0;
    }
    iVar2 = *(int *)(&stack0xfffffff0 + iVar1);
    if (iVar9 == 0) {
      *(undefined4 *)(iVar2 + 0x150) = 0;
    }
    iVar9 = *(int *)(iVar2 + 0x148);
    iVar2 = *(int *)(&stack0xfffffff4 + iVar1) + *(int *)(iVar2 + 0x154);
    if (iVar2 != 0) {
      *piVar8 = *piVar8 - iVar2;
    }
    if (iVar9 != 0) {
      *param_4 = *param_4 - iVar9;
    }
    png_zstream_error(*(undefined4 *)(&stack0xfffffff0 + iVar1),iVar4);
  }
  else {
    *(int *)(iVar4 + 0x15c) = DAT_002e0580 + 0x2e055a;
    iVar4 = -2;
  }
  if (*(int *)(&stack0x00000400 + iVar1) != **(int **)(&stack0xfffffff8 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar4);
  }
  return;
}


