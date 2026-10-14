/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c4bd0 GameStatePrizeMenu::DeletePicGiftDialog */

/* GameStatePrizeMenu::DeletePicGiftDialog() */

void __thiscall GameStatePrizeMenu::DeletePicGiftDialog(GameStatePrizeMenu *this)

{
  void *pvVar1;
  
  if (*(int *)(this + 0x74) != 0) {
    (**(code **)(**(int **)(this + 0x18) + 0x34))();
    if (*(int **)(this + 0x74) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x74) + 4))();
    }
    pvVar1 = *(void **)(this + 0x70);
    *(undefined4 *)(this + 0x74) = 0;
    if (pvVar1 != (void *)0x0) {
      String::~String((String *)((int)pvVar1 + 0x10));
      operator_delete(pvVar1);
      *(undefined4 *)(this + 0x70) = 0;
    }
    L_PrintLog((char *)(DAT_001c4c18 + 0x1c4c10),(char *)(DAT_001c4c1c + 0x1c4c12));
  }
  return;
}


