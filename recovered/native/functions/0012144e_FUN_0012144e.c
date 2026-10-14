/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012144e FUN_0012144e */

void FUN_0012144e(void)

{
  GameStateCafe *unaff_r4;
  int unaff_r6;
  
  FUN_00120cca(*(undefined4 *)(unaff_r4 + 0x84),0);
  RecipeBook::show(*(RecipeBook **)(unaff_r4 + 0x94),
                   *(_func_void_void_ptr_int_int_bool_short **)(unaff_r6 + DAT_001214cc),unaff_r4);
  unaff_r4[DAT_001214d0] = (GameStateCafe)0x4;
  GameStateCafe::deselect(unaff_r4);
  CharacterCommandBar::close(*(CharacterCommandBar **)(unaff_r4 + 0xac));
  *(undefined4 *)(unaff_r4 + 0x50) = 0;
  FUN_00121370();
  return;
}


