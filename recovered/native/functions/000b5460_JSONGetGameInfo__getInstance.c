/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b5460 JSONGetGameInfo::getInstance */

/* JSONGetGameInfo::getInstance() */

undefined4 * JSONGetGameInfo::getInstance(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  
  puVar3 = *(uint **)(DAT_000b54b4 + 0xb546c);
  puVar2 = *(undefined4 **)(DAT_000b54b8 + 0xb5470);
  if (((*puVar3 & 1) == 0) && (iVar1 = FUN_002e9da0(puVar3), iVar1 != 0)) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    FUN_002e9e08(puVar3);
    __aeabi_atexit(puVar2,*(undefined4 *)(DAT_000b54bc + 0xb54a8),
                   *(undefined4 *)(DAT_000b54c0 + 0xb54aa));
  }
  return puVar2;
}


