/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00268f00 FUN_00268f00 */

void FUN_00268f00(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0025f2ac(*param_1,param_3);
  if (iVar1 != 0) {
    iVar2 = FUN_002662b8(param_1);
    if ((iVar2 != 0) &&
       (iVar3 = FUN_00268e90(param_1,0x20,*(undefined4 *)(DAT_00268f5c + param_2 * 4 + 0x268f88),
                             iVar1,0), iVar3 == 0)) {
      FUN_002662da(iVar2,0x21,param_2,0,0,iVar1,0xffffffff);
      return;
    }
    FUN_0025fbda(*param_1,iVar1);
  }
  return;
}


