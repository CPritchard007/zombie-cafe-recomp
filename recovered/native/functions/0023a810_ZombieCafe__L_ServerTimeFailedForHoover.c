/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023a810 ZombieCafe::L_ServerTimeFailedForHoover */

/* ZombieCafe::L_ServerTimeFailedForHoover(void*, ccServerFailureCode) */

void ZombieCafe::L_ServerTimeFailedForHoover(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = (char *)(DAT_0023a84c + 0x23a81c);
  pcVar4 = (char *)(DAT_0023a850 + 0x23a81e);
  L_PrintLog(pcVar3,pcVar4);
  L_PrintLog((char *)(DAT_0023a854 + 0x23a82c),(char *)(DAT_0023a858 + 0x23a82e));
  L_PrintLog(pcVar3,pcVar4);
  iVar2 = CapcomApp::getInstance();
  iVar1 = DAT_0023a85c;
  *(undefined1 *)(iVar2 + 0x54) = 0;
  *(undefined1 *)(param_1 + iVar1) = 0;
  *(undefined1 *)(param_1 + DAT_0023a860) = 0;
  return;
}


