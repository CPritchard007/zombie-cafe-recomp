/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000fafc4 FridgeDialog::backClose */

/* FridgeDialog::backClose() */

void __thiscall FridgeDialog::backClose(FridgeDialog *this)

{
  int iVar1;
  
  if (this[0x14] != (FridgeDialog)0x0) {
    L_PrintLog((char *)(DAT_000fb004 + 0xfafd8),(char *)(DAT_000fb008 + 0xfafda));
    *(undefined1 *)(*(int *)(this + 0x60) + DAT_000fb00c) = 0;
    iVar1 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(this + 0x60) + DAT_000fb010),'.');
    if (iVar1 != 0) {
      *(undefined2 *)(this + 0xce) = **(undefined2 **)(DAT_000fb014 + 0xfaffc);
      this[0x14] = (FridgeDialog)0x0;
    }
  }
  return;
}


