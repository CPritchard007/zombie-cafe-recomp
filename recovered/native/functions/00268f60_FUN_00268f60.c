/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00268f60 FUN_00268f60 */

undefined8 FUN_00268f60(int *param_1,int param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if ((param_3 == 0) || (*(int *)(param_3 + 4) == 0)) {
    uVar2 = (uint)*(byte *)(iVar3 + 0x7c);
    *param_4 = param_2;
  }
  else {
    if (*(char *)(iVar3 + 0x7d) == '\0') {
      *param_4 = param_3;
      uVar1 = FUN_0025f2ac(iVar3,param_2);
      uVar2 = FUN_002645c6(iVar3,uVar1);
      FUN_0025fbda(iVar3,uVar1);
      if (-1 < (int)uVar2) goto LAB_00268fc6;
      FUN_00268e48(param_1,DAT_00268fd0 + 0x268fb2,param_2);
    }
    else {
      FUN_00268e48(param_1,DAT_00268fcc + 0x268f82);
    }
    uVar2 = 0xffffffff;
    param_1[0x11] = param_1[0x11] + 1;
  }
LAB_00268fc6:
  return CONCAT44(param_1,uVar2);
}


