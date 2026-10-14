/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002129b8 RecipeBook::hide */

/* RecipeBook::hide(bool) */

undefined8 RecipeBook::hide(bool param_1)

{
  uint uVar1;
  undefined4 in_r1;
  undefined4 local_20;
  
  uVar1 = (uint)param_1;
  local_20 = uVar1;
  if (*(code **)(uVar1 + 0x158) != (code *)0x0) {
    local_20 = (uint)*(short *)(uVar1 + 0x172);
    (**(code **)(uVar1 + 0x158))
              (*(undefined4 *)(uVar1 + 0x15c),*(undefined1 *)(uVar1 + 0x160),
               *(undefined1 *)(uVar1 + DAT_002129ec),in_r1);
  }
  *(undefined4 *)(uVar1 + 0x158) = 0;
  *(undefined4 *)(uVar1 + 0x15c) = 0;
  *(undefined1 *)(uVar1 + 0x14) = 0;
  return CONCAT44(in_r1,local_20);
}


