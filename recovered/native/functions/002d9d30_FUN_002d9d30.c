/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d9d30 FUN_002d9d30 */

void FUN_002d9d30(int param_1,void *param_2,uint param_3,undefined4 param_4)

{
  int *piVar1;
  void *__src;
  int iVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    piVar1 = *(int **)(param_1 + 0x120);
    if ((piVar1 == (int *)0x0) || (iVar2 = *piVar1, iVar2 == 0)) {
      iVar2 = DAT_002d9d7c + 0x2d9d72;
    }
    else {
      uVar3 = *(uint *)(iVar2 + 0x10);
      __src = *(void **)(iVar2 + 0xc);
      if ((param_3 <= uVar3) && (__src != (void *)0x0)) {
        memcpy(param_2,__src,param_3);
        *(uint *)(iVar2 + 0xc) = (int)__src + param_3;
        *(uint *)(iVar2 + 0x10) = uVar3 - param_3;
        return;
      }
      iVar2 = DAT_002d9d78 + 0x2d9d6c;
    }
    png_error(param_1,iVar2,param_3,piVar1,param_4);
  }
  return;
}


