/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b5520 JSONTakeOverData::getInstance */

/* JSONTakeOverData::getInstance() */

undefined4 JSONTakeOverData::getInstance(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = *(int **)(DAT_000b555c + 0xb552a);
  uVar3 = *(undefined4 *)(DAT_000b5560 + 0xb552e);
  if ((-1 < *piVar2 << 0x1f) && (iVar1 = FUN_002e9da0(piVar2), iVar1 != 0)) {
    FUN_002e9e08(piVar2);
    __aeabi_atexit(uVar3,*(undefined4 *)(DAT_000b5564 + 0xb554e),
                   *(undefined4 *)(DAT_000b5568 + 0xb5550));
  }
  return uVar3;
}


