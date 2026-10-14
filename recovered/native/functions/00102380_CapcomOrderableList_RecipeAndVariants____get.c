/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00102380 CapcomOrderableList<RecipeAndVariants*>::get */

/* CapcomOrderableList<RecipeAndVariants*>::get(int) const */

undefined4 __thiscall
CapcomOrderableList<RecipeAndVariants*>::get
          (CapcomOrderableList<RecipeAndVariants*> *this,int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  
  uVar1 = 0;
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x14))) {
    do {
      this = *(CapcomOrderableList<RecipeAndVariants*> **)(this + 8);
      bVar2 = param_1 != 0;
      param_1 = param_1 + -1;
    } while (bVar2);
    uVar1 = *(undefined4 *)this;
  }
  return uVar1;
}


