/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025f2c2 FUN_0025f2c2 */

void FUN_0025f2c2(undefined4 *param_1,short *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_2 != (short *)0x0) && (iVar2 = (int)*param_2, 0 < iVar2)) {
    if ((param_3[1] == 1) && (*param_3 == 0)) {
      *(undefined1 *)((int)param_2 + iVar2 * 0x40 + -0x1b) = 1;
    }
    else {
      uVar1 = FUN_0025f2ac(*param_1,param_3);
      *(undefined4 *)(param_2 + iVar2 * 0x20) = uVar1;
    }
  }
  return;
}


