/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026622e FUN_0026622e */

undefined4 FUN_0026622e(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0x33;
  if (param_1[8] != 0) {
    iVar2 = param_1[8] << 1;
  }
  iVar2 = FUN_002651e0(*param_1,param_1[1],iVar2 * 0x14);
  uVar1 = 7;
  if (iVar2 != 0) {
    uVar1 = FUN_0025f450(*param_1,iVar2);
    uVar1 = __udivsi3(uVar1,0x14);
    param_1[1] = iVar2;
    param_1[8] = uVar1;
    uVar1 = 0;
  }
  return uVar1;
}


