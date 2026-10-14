/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026ce38 FUN_0026ce38 */

undefined4 * FUN_0026ce38(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  void *__src;
  int iVar3;
  
  if (((param_3 != (undefined4 *)0x0) ||
      (param_3 = (undefined4 *)FUN_00261718(param_1,param_2,param_4,0), param_3 != (undefined4 *)0x0
      )) && (param_3[3] != 0)) goto LAB_0026ceec;
  if (*(int *)(param_1 + 0xc4) == 0) {
LAB_0026ce86:
    if (*(int *)(param_1 + 200) != 0) {
      uVar2 = FUN_0025f066(param_1);
      FUN_00265900(uVar2,0xffffffff,param_4,1,0);
      iVar1 = FUN_0026c760(uVar2,3 - (uint)(*(char *)(DAT_0026cf30 + 0x26cef0) != '\0'));
      if (iVar1 != 0) {
        (**(code **)(param_1 + 200))
                  (*(undefined4 *)(param_1 + 0xcc),param_1,
                   *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 0x4d));
      }
      FUN_00263758(uVar2);
    }
  }
  else {
    iVar1 = FUN_0025f25a(param_1,param_4);
    if (iVar1 != 0) {
      (**(code **)(param_1 + 0xc4))(*(undefined4 *)(param_1 + 0xcc),param_1,param_2,iVar1);
      FUN_0025fbda(param_1,iVar1);
      goto LAB_0026ce86;
    }
  }
  param_3 = (undefined4 *)FUN_00261718(param_1,param_2,param_4,0);
  if (param_3 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
LAB_0026ceec:
  iVar1 = DAT_0026cf34;
  if (param_3[3] == 0) {
    uVar2 = *param_3;
    iVar3 = 0;
    do {
      __src = (void *)FUN_00261718(param_1,*(undefined1 *)(iVar3 + iVar1 + 0x26cf40),uVar2,0);
      if (*(int *)((int)__src + 0xc) != 0) {
        memcpy(param_3,__src,0x14);
        param_3[4] = 0;
        return param_3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 3);
    param_3 = (undefined4 *)0x0;
  }
  return param_3;
}


