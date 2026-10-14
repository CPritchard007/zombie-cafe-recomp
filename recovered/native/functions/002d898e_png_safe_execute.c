/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d898e png_safe_execute */

uint png_safe_execute(int *param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint local_110;
  __jmp_buf_tag _Stack_108;
  
  uVar2 = *(undefined4 *)(*param_1 + 8);
  iVar1 = setjmp(&_Stack_108);
  local_110 = (uint)(iVar1 == 0);
  if (local_110 != 0) {
    *(__jmp_buf_tag **)(*param_1 + 8) = &_Stack_108;
    local_110 = (*param_2)(param_3);
  }
  *(undefined4 *)(*param_1 + 8) = uVar2;
  if (local_110 == 0) {
    png_image_free(param_1);
  }
  return local_110;
}


