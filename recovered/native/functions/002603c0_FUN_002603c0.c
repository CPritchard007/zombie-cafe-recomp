/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002603c0 FUN_002603c0 */

undefined8 FUN_002603c0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_20;
  
  piVar1 = param_2;
  local_20 = param_1;
  if ((param_2 != (int *)0x0) && (piVar1 = (int *)FUN_0025ee10(param_1,8), piVar1 != (int *)0x0)) {
    piVar1[1] = param_2[1];
    iVar2 = FUN_0025ee10(param_1,param_2[1] << 3);
    *piVar1 = iVar2;
    local_20 = 0;
    if (iVar2 == 0) {
      FUN_0025fbda(param_1,piVar1);
      piVar1 = (int *)0x0;
    }
    else {
      for (; local_20 < param_2[1]; local_20 = local_20 + 1) {
        puVar4 = (undefined4 *)(*param_2 + local_20 * 8);
        puVar5 = (undefined4 *)(*piVar1 + local_20 * 8);
        uVar3 = FUN_0025f25a(param_1,*puVar4);
        *puVar5 = uVar3;
        puVar5[1] = puVar4[1];
      }
    }
  }
  return CONCAT44(local_20,piVar1);
}


