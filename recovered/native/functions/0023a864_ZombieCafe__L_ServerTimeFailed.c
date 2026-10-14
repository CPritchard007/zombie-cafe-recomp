/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023a864 ZombieCafe::L_ServerTimeFailed */

/* ZombieCafe::L_ServerTimeFailed(void*, ccServerFailureCode) */

void ZombieCafe::L_ServerTimeFailed(int param_1,undefined4 param_2)

{
  int iVar1;
  
  L_PrintLog((char *)(DAT_0023a8a4 + 0x23a872),(char *)(DAT_0023a8a8 + 0x23a874));
  iVar1 = CapcomApp::getInstance();
  if (*(char *)(iVar1 + 0x54) != '\0') {
    L_ServerTimeFailedForHoover(param_1,param_2);
    iVar1 = CapcomApp::getInstance();
    *(undefined1 *)(iVar1 + 0x54) = 0;
  }
  *(undefined1 *)(param_1 + DAT_0023a8ac) = 0;
  *(undefined1 *)(param_1 + DAT_0023a8b0) = 1;
  return;
}


