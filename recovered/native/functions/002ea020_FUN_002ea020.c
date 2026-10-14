/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ea020 FUN_002ea020 */

undefined4 FUN_002ea020(int param_1,int param_2,undefined4 param_3,int param_4,undefined1 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((param_4 << 0x1f < 0) &&
     (iVar1 = FUN_002ea234(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(DAT_002ea06c + 0x2ea038)),
     iVar1 != 0)) {
    if ((*(int *)(param_2 + 0xc) == 0) ||
       (iVar1 = FUN_002e95ec(*(int *)(param_2 + 0xc),*(undefined4 *)(DAT_002ea070 + 0x2ea04e),
                             *(undefined4 *)(DAT_002ea074 + 0x2ea050),0), iVar1 == 0)) {
      *param_5 = 1;
      uVar2 = 1;
    }
    else {
      *param_5 = 0;
      uVar2 = 1;
    }
  }
  return uVar2;
}


