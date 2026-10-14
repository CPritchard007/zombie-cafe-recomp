/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00268e48 FUN_00268e48 */

undefined8 FUN_00268e48(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar2 = *param_1;
  uStack_8 = param_3;
  uStack_4 = param_4;
  iVar1 = FUN_00268514(iVar2,param_2);
  if (*(char *)(iVar2 + 0x39) == '\0') {
    param_1[0x11] = param_1[0x11] + 1;
    FUN_0025fbda(iVar2,param_1[1]);
    param_1[1] = iVar1;
    param_1[3] = 1;
  }
  else {
    FUN_0025fbda(iVar2,iVar1);
  }
  return CONCAT44(&uStack_8,param_1);
}


