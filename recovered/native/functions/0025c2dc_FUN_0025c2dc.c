/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025c2dc FUN_0025c2dc */

void FUN_0025c2dc(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (((iVar2 != -0x1ac) && (*(code **)(iVar2 + 0x1ac) != (code *)0x0)) &&
     (-1 < *(int *)(iVar2 + 0x1b4))) {
    iVar1 = (**(code **)(iVar2 + 0x1ac))(*(undefined4 *)(iVar2 + 0x1b0));
    if (iVar1 == 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = *(int *)(iVar2 + 0x1b4) + 1;
    }
    *(int *)(iVar2 + 0x1b4) = iVar1;
  }
  return;
}


