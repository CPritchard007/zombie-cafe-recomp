/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00177eec FUN_00177eec */

void FUN_00177eec(int param_1,int param_2,int param_3)

{
  size_t __n;
  int iVar1;
  
  iVar1 = param_2 * 4;
  memmove((void *)(*(int *)(param_1 + 8) + (param_3 + param_2) * 4),
          (void *)(*(int *)(param_1 + 8) + iVar1),((*(int *)(param_1 + 4) - param_2) + 1) * 4);
  __n = param_3 * 4;
  if (param_3 < 1) {
    __n = param_3 * -4;
    iVar1 = (*(int *)(param_1 + 4) + 1 + param_3) * 4;
  }
  memset((void *)(*(int *)(param_1 + 8) + iVar1),0,__n);
  return;
}


