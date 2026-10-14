/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025efee FUN_0025efee */

uint * FUN_0025efee(undefined4 *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (uint *)(*(byte *)(param_3 + 0x22) & 8);
  if ((*(byte *)(param_3 + 0x22) & 8) != 0) {
    puVar3 = (undefined4 *)param_1[0x6c];
    if ((undefined4 *)param_1[0x6c] == (undefined4 *)0x0) {
      puVar3 = param_1;
    }
    for (puVar1 = (uint *)puVar3[0x6b]; puVar1 != (uint *)0x0; puVar1 = (uint *)*puVar1) {
      if (puVar1[1] == param_3) goto LAB_0025f048;
    }
    puVar1 = (uint *)FUN_0025ee10(*param_1,0x10,0,param_1,param_4);
    if (puVar1 != (uint *)0x0) {
      *puVar1 = puVar3[0x6b];
      puVar3[0x6b] = puVar1;
      puVar1[1] = param_3;
      puVar1[2] = param_2;
      iVar2 = puVar3[0x13];
      puVar3[0x13] = iVar2 + 2U;
      puVar1[3] = iVar2 + 2U;
      puVar3[0x13] = puVar3[0x13] + 1;
LAB_0025f048:
      puVar1 = (uint *)puVar1[3];
    }
  }
  return puVar1;
}


