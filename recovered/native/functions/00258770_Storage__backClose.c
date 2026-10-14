/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00258770 Storage::backClose */

/* Storage::backClose() */

void __thiscall Storage::backClose(Storage *this)

{
  int iVar1;
  
  if (((byte)this[0x8c] - 1 < 2) && (this[0x14] != (Storage)0x0)) {
    L_PrintLog((char *)(DAT_002587b4 + 0x25878e),(char *)(DAT_002587b8 + 0x258790));
    *(undefined1 *)(*(int *)(this + 0x70) + DAT_002587bc) = 0;
    iVar1 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(this + 0x70) + DAT_002587c0),'I');
    if (iVar1 != 0) {
      close(this);
    }
  }
  return;
}


