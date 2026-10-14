/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002eb394 FUN_002eb394 */

undefined4 FUN_002eb394(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0xc))();
  uVar2 = 1;
  if (iVar1 == 0) {
    uVar2 = FUN_002ea234(param_2,*(undefined4 *)(DAT_002eb3b8 + 0x2eb3b0),param_3,0,param_4);
  }
  return uVar2;
}


