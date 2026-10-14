/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00266fc8 FUN_00266fc8 */

int FUN_00266fc8(undefined4 param_1,int param_2,size_t param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *param_4;
  iVar1 = param_2;
  if ((uVar2 & uVar2 - 1) == 0) {
    iVar1 = 1;
    if (uVar2 != 0) {
      iVar1 = uVar2 << 1;
    }
    iVar1 = FUN_002651e0(param_1,param_2,param_3 * iVar1,uVar2 - 1,param_4);
    if (iVar1 == 0) {
      *param_5 = 0xffffffff;
      return param_2;
    }
  }
  memset((void *)(iVar1 + uVar2 * param_3),0,param_3);
  *param_5 = uVar2;
  *param_4 = *param_4 + 1;
  return iVar1;
}


