/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002eb068 FUN_002eb068 */

void FUN_002eb068(undefined4 *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < 0x81) {
    iVar1 = FUN_002eade8();
    iVar2 = ((param_2 + 7 >> 3) - 1) * 4;
    *param_1 = *(undefined4 *)(iVar2 + iVar1);
    *(undefined4 **)(iVar2 + iVar1) = param_1;
  }
  else {
    free(param_1);
  }
  return;
}


