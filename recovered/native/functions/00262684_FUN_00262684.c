/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00262684 FUN_00262684 */

undefined8 FUN_00262684(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int local_1c;
  int iStack_18;
  
  iVar1 = param_3;
  if ((param_2 != 0) && (iVar1 = param_2, param_3 != 0)) {
    local_1c = 0;
    iStack_18 = param_3;
    if ((((int)((uint)*(ushort *)(param_2 + 2) << 0x1f) < 0) ||
        ((iVar1 = FUN_00262644(param_2,&local_1c), iVar1 == 0 || (local_1c != 0)))) &&
       ((local_1c = 0, (int)((uint)*(ushort *)(param_3 + 2) << 0x1f) < 0 ||
        ((iVar1 = FUN_00262644(param_3,&local_1c), iVar1 == 0 || (local_1c != 0)))))) {
      iVar1 = FUN_0025f0ac(param_1,0x45,0,0);
      FUN_00261190(param_1,iVar1,param_2,param_3);
    }
    else {
      FUN_002610aa(param_1,param_2);
      FUN_002610aa(param_1,param_3);
      iVar1 = FUN_0025f0ac(param_1,0x81,DAT_00262714 + 0x262702,0);
    }
  }
  return CONCAT44(param_1,iVar1);
}


