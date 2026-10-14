/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002749d4 FUN_002749d4 */

undefined8 FUN_002749d4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int local_1c;
  undefined4 uStack_18;
  
  local_1c = 0;
  uStack_18 = param_3;
  FUN_0025dce0(*(undefined4 *)(param_1 + 0xb4),param_2,0,&local_1c);
  iVar1 = local_1c;
  iVar2 = local_1c;
  if (local_1c != 0) {
    if (*(short *)(local_1c + 0x1a) == 1) {
      FUN_0025bcf0(local_1c);
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0026b5ac(local_1c);
      if (iVar2 == 0) {
        (**(code **)(param_1 + 0xac))(iVar1);
      }
      FUN_002749b4(iVar1);
    }
  }
  for (iVar1 = *(int *)(param_1 + 0x58); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x2c)) {
    *(undefined4 *)(iVar1 + 0x10) = 1;
  }
  return CONCAT44(param_1,iVar2);
}


