/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d9774 png_destroy_png_struct */

void png_destroy_png_struct(void *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = DAT_002d97c8;
  piVar2 = *(int **)(DAT_002d97c4 + 0x2d977e);
  *(int *)(&stack0x000003e0 + DAT_002d97c8) = *piVar2;
  if (param_1 != (void *)0x0) {
    memcpy(&stack0xfffffff8 + DAT_002d97c8,param_1,1000);
    memset(param_1,0,1000);
    png_free(&stack0xfffffff8 + iVar1,param_1);
    png_free_jmpbuf(&stack0xfffffff8 + iVar1);
  }
  if (*(int *)(&stack0x000003e0 + iVar1) != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


