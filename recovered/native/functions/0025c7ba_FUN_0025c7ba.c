/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025c7ba FUN_0025c7ba */

undefined8 FUN_0025c7ba(uint param_1,undefined4 *param_2)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  uint local_20;
  
  puVar2 = param_2;
  local_20 = param_1;
  if ((param_2 != (undefined4 *)0x0) &&
     (puVar2 = *(undefined4 **)(param_1 + 4), puVar2 != (undefined4 *)0x0)) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    do {
      local_20 = (**(code **)(param_1 + 4))(param_1,param_2);
      if (local_20 != 0) break;
      iVar3 = FUN_0025c8d4(param_1,*param_2);
      if ((((iVar3 != 0) || (iVar3 = FUN_0025c882(param_1,param_2[0xb]), iVar3 != 0)) ||
          (iVar3 = FUN_0025c8d4(param_1,param_2[0xc]), iVar3 != 0)) ||
         (((iVar3 = FUN_0025c882(param_1,param_2[0xd]), iVar3 != 0 ||
           (iVar3 = FUN_0025c8d4(param_1,param_2[0xe]), iVar3 != 0)) ||
          ((iVar3 = FUN_0025c882(param_1,param_2[0x12]), iVar3 != 0 ||
           (iVar3 = FUN_0025c882(param_1,param_2[0x13]), iVar3 != 0)))))) {
LAB_0025c862:
        puVar2 = (undefined4 *)0x2;
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
        goto LAB_0025c878;
      }
      psVar5 = (short *)param_2[10];
      if (psVar5 != (short *)0x0) {
        sVar1 = *psVar5;
        psVar5 = psVar5 + 4;
        iVar3 = 0;
        while (0 < sVar1 - iVar3) {
          iVar4 = FUN_0025c7ba(param_1,*(undefined4 *)(psVar5 + 8));
          iVar3 = iVar3 + 1;
          if (iVar4 != 0) goto LAB_0025c862;
          psVar5 = psVar5 + 0x20;
        }
      }
      param_2 = (undefined4 *)param_2[0xf];
    } while (param_2 != (undefined4 *)0x0);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    puVar2 = (undefined4 *)(local_20 & 2);
  }
LAB_0025c878:
  return CONCAT44(local_20,puVar2);
}


