/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bed98 FUN_002bed98 */

void FUN_002bed98(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  *param_1 = param_2;
  iVar1 = __aeabi_fcmplt(param_2,0);
  if (iVar1 != 0) {
    *param_1 = 0;
  }
  uVar4 = param_1[1];
  iVar1 = __aeabi_fcmpgt(*param_1,uVar4);
  if (iVar1 != 0) {
    *param_1 = uVar4;
  }
  __addsf3(*param_1,0x3f000000);
  uVar2 = __fixsfsi();
  __addsf3(uVar4,0x3f000000);
  uVar3 = __fixsfsi();
  if (uVar2 < uVar3) {
    uVar3 = uVar2;
  }
  param_1[2] = uVar3;
  return;
}


