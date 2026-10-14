/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001cb708 FUN_001cb708 */

void FUN_001cb708(int param_1)

{
  int iVar1;
  
  L_PrintLog((char *)(DAT_001cb730 + 0x1cb716),(char *)(DAT_001cb72c + 0x1cb714));
  iVar1 = CapcomApp::getInstance();
  iVar1 = *(int *)(*(int *)(iVar1 + 4) + 8);
  if (iVar1 == param_1) {
    *(undefined4 *)(iVar1 + 0xcc) = 3;
  }
  return;
}


