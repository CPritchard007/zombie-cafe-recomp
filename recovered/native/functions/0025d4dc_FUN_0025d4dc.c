/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025d4dc FUN_0025d4dc */

ulonglong FUN_0025d4dc(undefined4 param_1,char *param_2,undefined4 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (param_2 != (char *)0x0) {
    if (*param_2 == -0x68) {
      uVar1 = FUN_0025d3f8(param_1,*(undefined4 *)(param_2 + 0x18));
    }
    else {
      uVar2 = FUN_0025d4dc(param_1,*(undefined4 *)(param_2 + 0xc),param_3,*param_2,param_1,param_2,
                           param_3);
      uVar1 = FUN_0025d4dc(param_1,*(undefined4 *)(param_2 + 8));
      uVar2 = uVar2 | uVar1;
      if ((int)((uint)*(ushort *)(param_2 + 2) << 0x14) < 0) {
        uVar1 = FUN_0025d426();
      }
      else {
        uVar1 = FUN_0025d53e(param_1,*(undefined4 *)(param_2 + 0x10));
      }
      uVar1 = uVar1 | uVar2;
    }
  }
  return uVar1;
}


