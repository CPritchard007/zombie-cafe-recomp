/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e7a50 png_write_iTXt */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x002e7a9e) */
/* WARNING: Removing unreachable block (ram,0x002e7a9e) */

void png_write_iTXt(int param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *__s;
  int *piVar7;
  int iStack_4;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  
  iVar1 = DAT_002e7bc0;
  piVar7 = (int *)(&stack0xffffffec + DAT_002e7bc0);
  piVar8 = (int *)(&stack0xffffffec + DAT_002e7bc0);
  puVar9 = (undefined4 *)(&stack0xffffffec + DAT_002e7bc0);
  puVar10 = (undefined4 *)(&stack0xffffffec + DAT_002e7bc0);
  puVar11 = &stack0x00000009 + DAT_002e7bc0;
  *(undefined4 *)(&stack0xfffffff0 + DAT_002e7bc0) = param_2;
  puVar6 = *(undefined4 **)(DAT_002e7bc4 + 0x2e7a60);
  __s = *(char **)(&stack0x00000488 + DAT_002e7bc0);
  uVar4 = *puVar6;
  *(undefined4 *)(&stack0xffffffec + DAT_002e7bc0) =
       *(undefined4 *)(&stack0x00000484 + DAT_002e7bc0);
  *(undefined4 *)(&stack0x00000468 + DAT_002e7bc0) = uVar4;
  *(undefined1 **)(&stack0xfffffff4 + DAT_002e7bc0) = &stack0x00000008 + DAT_002e7bc0;
  iVar2 = FUN_002e68f8(param_1,param_3,&stack0x00000008 + DAT_002e7bc0);
  *(undefined4 **)(&stack0x00000000 + iVar1) = puVar6;
  if (iVar2 == 0) {
    iVar2 = DAT_002e7bc8 + 0x2e7a92;
  }
  else {
    if (*(int *)(&stack0xfffffff0 + iVar1) + 1U < 4) {
      puVar6 = (undefined4 *)(iVar2 + 1);
      switch(*(int *)(&stack0xfffffff0 + iVar1)) {
      case 0:
      case 2:
        uVar4 = 1;
        break;
      default:
        uVar4 = 0;
      }
      (&stack0x00000008 + iVar1)[(int)puVar6] = (char)uVar4;
      *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar4;
      puVar11[(int)puVar6] = 0;
      *(int *)((int)&iStack_4 + iVar1) = iVar2 + 3;
      if (param_4 != (char *)0x0) goto LAB_002e7ad0;
      goto LAB_002e7acc;
    }
    iVar2 = DAT_002e7bcc + 0x2e7ac8;
  }
  while( true ) {
    while( true ) {
      png_error(param_1,iVar2);
LAB_002e7acc:
      param_4 = (char *)(DAT_002e7bd0 + 0x2e7ad2);
LAB_002e7ad0:
      sVar3 = strlen(param_4);
      iVar2 = *piVar7;
      *(size_t *)(&stack0xfffffff4 + iVar1) = sVar3 + 1;
      if (iVar2 == 0) {
        *piVar8 = DAT_002e7bd4 + 0x2e7ae6;
      }
      sVar3 = strlen((char *)*puVar9);
      *(size_t *)(&stack0xfffffff8 + iVar1) = sVar3 + 1;
      if (__s == (char *)0x0) {
        __s = (char *)(DAT_002e7bd8 + 0x2e7afa);
      }
      puVar5 = DAT_002e7be0;
      if (*(uint *)(&stack0xfffffff4 + iVar1) <= (uint)(DAT_002e7bdc - (int)puVar6)) {
        puVar5 = (undefined4 *)
                 (*(uint *)(&stack0xfffffff4 + iVar1) + *(int *)((int)&iStack_4 + iVar1));
      }
      puVar6 = (undefined4 *)((int)puVar5 + *(uint *)(&stack0xfffffff8 + iVar1));
      if ((uint)((int)DAT_002e7be0 - (int)puVar5) < *(uint *)(&stack0xfffffff8 + iVar1)) {
        puVar6 = DAT_002e7be0;
      }
      sVar3 = strlen(__s);
      *(undefined4 *)(&stack0x00000064 + iVar1) = 0;
      *(char **)(&stack0x0000005c + iVar1) = __s;
      *(size_t *)(&stack0x00000060 + iVar1) = sVar3;
      if (*(int *)(&stack0xfffffff0 + iVar1) == 0) break;
      iVar2 = FUN_002e69d0(param_1,DAT_002e7be4,sVar3);
      if ((iVar2 == 0) &&
         (iVar2 = FUN_002e6c14(param_1,&stack0x0000005c + iVar1,puVar6), iVar2 == 0))
      goto LAB_002e7b5e;
      iVar2 = *(int *)(param_1 + 0x15c);
    }
    if (sVar3 <= (uint)((int)DAT_002e7be0 - (int)puVar6)) break;
    iVar2 = DAT_002e7be8 + 0x2e7b5c;
  }
  *(size_t *)(&stack0x00000064 + iVar1) = sVar3;
LAB_002e7b5e:
  FUN_002e6d18(param_1,DAT_002e7be4,(int)puVar6 + *(int *)(&stack0x00000064 + iVar1));
  png_write_chunk_data(param_1,&stack0x00000008 + iVar1,*(undefined4 *)((int)&iStack_4 + iVar1));
  png_write_chunk_data(param_1,param_4,*(undefined4 *)(&stack0xfffffff4 + iVar1));
  png_write_chunk_data(param_1,*puVar10,*(undefined4 *)(&stack0xfffffff8 + iVar1));
  if (*(int *)(&stack0xfffffff0 + iVar1) == 0) {
    png_write_chunk_data(param_1,__s,*(undefined4 *)(&stack0x00000060 + iVar1));
  }
  else {
    FUN_002e6e30(param_1,&stack0x0000005c + iVar1);
  }
  png_write_chunk_end(param_1);
  if (*(int *)(&stack0x00000468 + iVar1) == **(int **)(&stack0x00000000 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


