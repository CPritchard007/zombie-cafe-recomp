/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025ba58 FUN_0025ba58 */

undefined8 FUN_0025ba58(uint *param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *local_20;
  
  uVar3 = param_1[1];
  uVar1 = *param_1;
  local_20 = param_1;
  if (param_4 < 0) {
    if ((int)uVar3 < 0) {
      local_20 = (uint *)(DAT_0025bac8 - uVar1);
      iVar4 = (DAT_0025bacc - uVar3) - (uint)(DAT_0025bac8 < uVar1);
      iVar5 = param_4 + (uint)(0xfffffffe < param_3);
      if ((iVar5 < iVar4) || ((iVar4 == iVar5 && ((uint *)(param_3 + 1) < local_20))))
      goto LAB_0025bab8;
    }
  }
  else if ((0 < (int)uVar3) || ((uVar3 == 0 && (uVar1 != 0)))) {
    iVar4 = (DAT_0025bac4 - uVar3) - (uint)(DAT_0025bac0 < uVar1);
    if ((iVar4 < param_4) || ((param_4 == iVar4 && (DAT_0025bac0 - uVar1 < param_3)))) {
LAB_0025bab8:
      uVar2 = 1;
      goto LAB_0025baba;
    }
  }
  *param_1 = uVar1 + param_3;
  param_1[1] = uVar3 + param_4 + (uint)CARRY4(uVar1,param_3);
  uVar2 = 0;
LAB_0025baba:
  return CONCAT44(local_20,uVar2);
}


