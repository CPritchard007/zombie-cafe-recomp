/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001213f6 FUN_001213f6 */

undefined4 FUN_001213f6(void)

{
  undefined4 uVar1;
  GameStateCafe *unaff_r4;
  int unaff_r6;
  
  if (*(int *)(unaff_r4 + 0x40) == 0) {
    FUN_00120b56();
    CookCommandBar::close(*(CookCommandBar **)(unaff_r4 + 0xb4));
    CharacterCommandBar::close(*(CharacterCommandBar **)(unaff_r4 + 0xac));
    TombstoneCommandBar::close(*(TombstoneCommandBar **)(unaff_r4 + 0xc0));
    Storage::close(*(Storage **)(unaff_r4 + 0xbc));
    PlantCommandBar::close(*(PlantCommandBar **)(unaff_r4 + 0xb8));
    if (1 < *(byte *)(*(int *)(unaff_r4 + 0x84) + 0x80) - 1) {
      FUN_00120ca0();
    }
    FUN_00120c9a();
    FUN_00120cca(*(undefined4 *)(unaff_r4 + 0x84),0);
    RecipeBook::show(*(RecipeBook **)(unaff_r4 + 0x94),
                     *(_func_void_void_ptr_int_int_bool_short **)(unaff_r6 + DAT_001214cc),unaff_r4)
    ;
    unaff_r4[DAT_001214d0] = (GameStateCafe)0x4;
    GameStateCafe::deselect(unaff_r4);
    CharacterCommandBar::close(*(CharacterCommandBar **)(unaff_r4 + 0xac));
    *(undefined4 *)(unaff_r4 + 0x50) = 0;
    uVar1 = FUN_00121370();
    return uVar1;
  }
  return 0;
}


