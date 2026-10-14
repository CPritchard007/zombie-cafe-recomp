/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d8914 png_safe_error */

void png_safe_error(int param_1,undefined4 param_2)

{
  __jmp_buf_tag *__env;
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = *(int **)(param_1 + 0x114);
  if (piVar2 != (int *)0x0) {
    piVar3 = piVar2 + 8;
    png_safecat(piVar3,0x40,0,param_2);
    piVar2[7] = piVar2[7] | 2;
    if ((*piVar2 != 0) && (__env = *(__jmp_buf_tag **)(*piVar2 + 8), __env != (__jmp_buf_tag *)0x0))
    {
                    /* WARNING: Subroutine does not return */
      longjmp(__env,1);
    }
    uVar1 = png_safecat(piVar3,0x40,0,DAT_002d8968 + 0x2d8954);
    png_safecat(piVar3,0x40,uVar1,param_2);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


