/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00212ab8 RecipeBook::backClose */

/* RecipeBook::backClose() */

void __thiscall RecipeBook::backClose(RecipeBook *this)

{
  int iVar1;
  
  if (this[0x14] != (RecipeBook)0x0) {
    L_PrintLog((char *)(DAT_00212af0 + 0x212aca),(char *)(DAT_00212af4 + 0x212acc));
    *(undefined1 *)(*(int *)(this + 0x60) + DAT_00212af8) = 0;
    iVar1 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(this + 0x60) + DAT_00212afc),'Q');
    if (iVar1 != 0) {
      hide(SUB41(this,0));
    }
  }
  return;
}


