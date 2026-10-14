/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002cb034 FUN_002cb034 */

undefined8 FUN_002cb034(int *param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1[1];
  if (DAT_002cb0c0 < param_3) {
    *(undefined4 *)(*param_1 + 0x14) = 0x38;
    *(undefined4 *)(*param_1 + 0x18) = 3;
    (**(code **)*param_1)();
  }
  if ((param_3 & 7) != 0) {
    param_3 = (param_3 + 8) - (param_3 & 7);
  }
  if (1 < param_2) {
    *(undefined4 *)(*param_1 + 0x14) = 0xf;
    *(uint *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  puVar1 = (undefined4 *)jpeg_get_large(param_1,param_3 + 0x10);
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x38;
    *(undefined4 *)(*param_1 + 0x18) = 4;
    (**(code **)*param_1)(param_1);
  }
  *(uint *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 0x10 + param_3;
  iVar3 = iVar3 + (param_2 + 0xe) * 4;
  uVar2 = *(undefined4 *)(iVar3 + 4);
  puVar1[1] = param_3;
  *puVar1 = uVar2;
  puVar1[2] = 0;
  *(undefined4 **)(iVar3 + 4) = puVar1;
  return CONCAT44(param_1,puVar1 + 4);
}


