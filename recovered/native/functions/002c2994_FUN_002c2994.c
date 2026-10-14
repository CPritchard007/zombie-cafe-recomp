/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c2994 FUN_002c2994 */

bool FUN_002c2994(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_002c2928(*param_1);
  iVar2 = __aeabi_fcmple(uVar1,DAT_002c29d0);
  if (iVar2 != 0) {
    uVar1 = FUN_002c2928(param_1[1]);
    iVar2 = __aeabi_fcmple(uVar1,DAT_002c29d0);
    if (iVar2 != 0) {
      uVar1 = FUN_002c2928(param_1[2]);
      iVar2 = __aeabi_fcmple(uVar1,DAT_002c29d0);
      return iVar2 != 0;
    }
  }
  return false;
}


