/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00119488 HCOManager::getInstance */

/* HCOManager::getInstance() */

undefined4 * HCOManager::getInstance(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  
  puVar3 = *(uint **)(DAT_001194e0 + 0x119494);
  puVar2 = *(undefined4 **)(DAT_001194e4 + 0x119498);
  if (((*puVar3 & 1) == 0) && (iVar1 = FUN_002e9da0(puVar3), iVar1 != 0)) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 1;
    *(undefined1 *)(puVar2 + 3) = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    FUN_002e9e08(puVar3);
    __aeabi_atexit(puVar2,*(undefined4 *)(DAT_001194e8 + 0x1194d2),
                   *(undefined4 *)(DAT_001194ec + 0x1194d4));
  }
  return puVar2;
}


