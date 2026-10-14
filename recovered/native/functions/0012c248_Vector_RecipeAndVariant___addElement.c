/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012c248 Vector<RecipeAndVariant>::addElement */

/* Vector<RecipeAndVariant>::addElement(RecipeAndVariant) */

ulonglong __thiscall
Vector<RecipeAndVariant>::addElement(Vector<RecipeAndVariant> *this,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_c;
  undefined1 uStack_b;
  
  local_c = (undefined1)param_2;
  uStack_b = (undefined1)((uint)param_2 >> 8);
  iVar2 = *(int *)(this + 4) + 2;
  if (*(int *)this < iVar2) {
    iVar1 = *(int *)this * 2;
    if (iVar1 < iVar2) {
      iVar1 = iVar2;
    }
    resize(this,iVar1,-1);
  }
  iVar1 = *(int *)(this + 4);
  iVar2 = *(int *)(this + 8);
  *(int *)(this + 4) = iVar1 + 1;
  iVar1 = (iVar1 + 1) * 2;
  *(undefined1 *)(iVar1 + iVar2) = local_c;
  *(undefined1 *)(iVar2 + iVar1 + 1) = uStack_b;
  return (ulonglong)CONCAT15(uStack_b,CONCAT14(local_c,this));
}


