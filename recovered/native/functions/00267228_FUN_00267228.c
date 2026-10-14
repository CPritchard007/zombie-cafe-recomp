/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00267228 FUN_00267228 */

uint * FUN_00267228(undefined4 *param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *__s;
  
  uVar2 = *param_1;
  if (param_2 == (uint *)0x0) {
    param_2 = (uint *)FUN_0025f04c(uVar2,0xc);
    if (param_2 != (uint *)0x0) {
      uVar1 = FUN_0025ee10(uVar2,0x14);
      param_2[2] = uVar1;
      if (uVar1 != 0) goto LAB_0026726a;
    }
LAB_00267286:
    FUN_002610aa(uVar2,param_3);
    FUN_00261102(uVar2,param_2);
    param_2 = (uint *)0x0;
  }
  else {
    uVar1 = *param_2;
    if ((uVar1 & uVar1 - 1) == 0) {
      uVar1 = FUN_002651e0(uVar2,param_2[2],uVar1 * 0x28);
      if (uVar1 == 0) goto LAB_00267286;
      param_2[2] = uVar1;
    }
LAB_0026726a:
    __s = (undefined4 *)(param_2[2] + *param_2 * 0x14);
    *param_2 = *param_2 + 1;
    memset(__s,0,0x14);
    *__s = param_3;
  }
  return param_2;
}


