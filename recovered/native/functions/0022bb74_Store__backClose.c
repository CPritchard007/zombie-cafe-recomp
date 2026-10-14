/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022bb74 Store::backClose */

/* Store::backClose() */

void __thiscall Store::backClose(Store *this)

{
  int iVar1;
  
  if (((byte)this[0x80] - 1 < 2) && (this[0x14] != (Store)0x0)) {
    L_PrintLog((char *)(DAT_0022bbb8 + 0x22bb92),(char *)(DAT_0022bbbc + 0x22bb94));
    *(undefined1 *)(*(int *)(this + 0x68) + DAT_0022bbc0) = 0;
    iVar1 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(this + 0x68) + DAT_0022bbc4),'I');
    if (iVar1 != 0) {
      close(this);
    }
  }
  return;
}


