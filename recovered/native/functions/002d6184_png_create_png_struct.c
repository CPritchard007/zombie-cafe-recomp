/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d6184 png_create_png_struct */

void png_create_png_struct
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *__dest;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  iVar1 = DAT_002d6264;
  piVar6 = (int *)(&stack0xffffffec + DAT_002d6264);
  piVar7 = (int *)(&stack0xffffffec + DAT_002d6264);
  piVar8 = (int *)(&stack0xffffffec + DAT_002d6264);
  *(undefined4 *)(&stack0xfffffff8 + DAT_002d6264) = param_4;
  uVar3 = *(undefined4 *)(&stack0x00000504 + DAT_002d6264);
  uVar5 = *(undefined4 *)(&stack0x0000050c + DAT_002d6264);
  *(undefined4 *)(&stack0xfffffff4 + DAT_002d6264) = param_3;
  *(int *)(&stack0xffffffec + DAT_002d6264) = DAT_002d6268 + 0x2d61a8;
  *(undefined4 *)(&stack0xfffffff0 + DAT_002d6264) = param_1;
  uVar4 = *(undefined4 *)(&stack0xffffffec + DAT_002d6270 + DAT_002d6264);
  *(undefined4 *)(&stack0xffffffec + DAT_002d6274 + DAT_002d6264) =
       **(undefined4 **)(DAT_002d6268 + 0x2d61a8 + DAT_002d626c);
  memset(&stack0x00000100 + DAT_002d6264,0,1000);
  *(undefined4 *)(&stack0x00000450 + iVar1) = DAT_002d6278;
  *(undefined4 *)(&stack0x00000454 + iVar1) = DAT_002d6278;
  png_set_mem_fn(&stack0x00000100 + iVar1,uVar3,uVar4,uVar5);
  png_set_error_fn(&stack0x00000100 + iVar1,param_2,*(undefined4 *)(&stack0xfffffff4 + iVar1),
                   *(undefined4 *)(&stack0xfffffff8 + iVar1));
  iVar2 = setjmp((__jmp_buf_tag *)(&stack0x00000000 + iVar1));
  __dest = (void *)0x0;
  if (iVar2 == 0) {
    *(undefined1 **)(&stack0x00000204 + iVar1) = &stack0x00000000 + iVar1;
    iVar2 = *piVar6;
    *(undefined4 *)(&stack0x00000208 + iVar1) = 0;
    *(undefined4 *)(&stack0x00000200 + iVar1) = *(undefined4 *)(iVar2 + DAT_002d627c);
    __dest = (void *)png_user_version_check
                               (&stack0x00000100 + iVar1,*(undefined4 *)(&stack0xfffffff0 + iVar1));
    if ((__dest != (void *)0x0) &&
       (__dest = (void *)png_malloc_warn(&stack0x00000100 + iVar1,1000), __dest != (void *)0x0)) {
      iVar2 = *piVar7;
      *(undefined4 *)(&stack0x00000264 + iVar1) = *(undefined4 *)(iVar2 + DAT_002d6280);
      uVar3 = *(undefined4 *)(iVar2 + DAT_002d6284);
      *(void **)(&stack0x0000026c + iVar1) = __dest;
      *(undefined4 *)(&stack0x00000268 + iVar1) = uVar3;
      *(undefined4 *)(&stack0x00000204 + iVar1) = 0;
      *(undefined4 *)(&stack0x00000208 + iVar1) = 0;
      *(undefined4 *)(&stack0x00000200 + iVar1) = 0;
      memcpy(__dest,&stack0x00000100 + iVar1,1000);
    }
  }
  if (*(int *)(&stack0xffffffec + DAT_002d6274 + iVar1) != **(int **)(*piVar8 + DAT_002d626c)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__dest);
  }
  return;
}


