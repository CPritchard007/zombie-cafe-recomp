/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00212924 RecipeBook::compare */

/* RecipeBook::compare(RecipeAndVariants*, RecipeAndVariants*) */

int RecipeBook::compare(RecipeAndVariants *param_1,RecipeAndVariants *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = CapcomApp::getInstance();
  iVar1 = *(int *)(*(int *)(iVar1 + 4) + 0x4e8);
  uVar2 = (uint)*(byte *)(iVar1 + (uint)(byte)*param_1 * 0x1c + 0x16);
  uVar3 = (uint)*(byte *)(iVar1 + (uint)(byte)*param_2 * 0x1c + 0x16);
  iVar1 = (uint)(byte)*param_1 - (uint)(byte)*param_2;
  if (uVar2 != uVar3) {
    iVar1 = uVar2 - uVar3;
  }
  return iVar1;
}


