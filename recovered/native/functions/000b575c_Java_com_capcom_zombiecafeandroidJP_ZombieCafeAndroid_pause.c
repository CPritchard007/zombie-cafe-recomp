/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b575c Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_pause */

void Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_pause(void)

{
  L_PrintLog((char *)(DAT_000b577c + 0xb5766),(char *)(DAT_000b5780 + 0xb5768));
  if (*(CapcomApp **)(DAT_000b5784 + 0xb5778) != (CapcomApp *)0x0) {
    CapcomApp::pause(*(CapcomApp **)(DAT_000b5784 + 0xb5778));
  }
  return;
}


