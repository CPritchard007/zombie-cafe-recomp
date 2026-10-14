/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d869c png_free_jmpbuf */

void png_free_jmpbuf(int param_1)

{
  int iVar1;
  int iVar2;
  __jmp_buf_tag _Stack_108;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x104);
    if ((((iVar2 != 0) && (*(int *)(param_1 + 0x108) != 0)) && (iVar2 != param_1)) &&
       (iVar1 = setjmp(&_Stack_108), iVar1 == 0)) {
      *(__jmp_buf_tag **)(param_1 + 0x104) = &_Stack_108;
      iVar1 = DAT_002d86f0;
      *(undefined4 *)(param_1 + 0x108) = 0;
      *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(iVar1 + 0x2d86da);
      png_free(param_1,iVar2);
    }
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0x100) = 0;
  }
  return;
}


