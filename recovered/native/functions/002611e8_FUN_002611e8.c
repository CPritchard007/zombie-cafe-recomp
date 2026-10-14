/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002611e8 FUN_002611e8 */

undefined8 FUN_002611e8(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_1c;
  
  iVar3 = param_1[6];
  uVar2 = *(undefined4 *)*param_1;
  puVar1 = (undefined4 *)param_1[8];
  local_1c = param_2;
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    if ((*(byte *)((int)puVar1 + 0x12) & 1) != 0) {
      FUN_002610aa(uVar2,*puVar1);
    }
    if (((*(byte *)((int)puVar1 + 0x12) & 0x10) != 0) ||
       ((int)((uint)*(byte *)((int)puVar1 + 0x12) << 0x1a) < 0)) {
      local_1c = puVar1[3];
      FUN_002611e8(local_1c);
      FUN_0025fbda(uVar2,local_1c);
    }
    puVar1 = puVar1 + 10;
  }
  if ((undefined4 *)param_1[8] != param_1 + 10) {
    FUN_0025fbda(uVar2);
  }
  return CONCAT44(local_1c,param_1);
}


