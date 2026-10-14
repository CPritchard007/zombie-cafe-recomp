/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001cb8cc FUN_001cb8cc */

void FUN_001cb8cc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  L_PrintLog((char *)(DAT_001cb904 + 0x1cb8da),(char *)(DAT_001cb900 + 0x1cb8d8));
  iVar1 = CapcomApp::getInstance();
  iVar1 = *(int *)(*(int *)(iVar1 + 4) + 8);
  if (iVar1 == param_1) {
    uVar2 = 2;
    if (**(int **)(DAT_001cb908 + 0x1cb8ee) != 1) {
      uVar2 = 3;
    }
    *(undefined4 *)(iVar1 + 0xcc) = uVar2;
  }
  return;
}


