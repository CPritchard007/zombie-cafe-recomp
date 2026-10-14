/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b6080 Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_HandleBackButton */

undefined4 Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_HandleBackButton(void)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  
  if (*(int *)(DAT_000b60d0 + 0xb608c) == 0) {
    pcVar1 = (char *)(DAT_000b60d4 + 0xb6094);
    pcVar2 = (char *)(DAT_000b60d8 + 0xb6096);
  }
  else {
    iVar3 = *(int *)(*(int *)(DAT_000b60d0 + 0xb6090) + 4);
    if (iVar3 != 0) {
      if (*(int *)(iVar3 + DAT_000b60e4) == 0) {
        L_PrintLog((char *)(DAT_000b60e8 + 0xb60be),(char *)(DAT_000b60ec + 0xb60c0));
        return 1;
      }
      *(undefined1 *)(iVar3 + DAT_000b60f0) = 1;
      return 0;
    }
    pcVar1 = (char *)(DAT_000b60dc + 0xb60a6);
    pcVar2 = (char *)(DAT_000b60e0 + 0xb60a8);
  }
  L_PrintLog(pcVar1,pcVar2);
  return 0;
}


