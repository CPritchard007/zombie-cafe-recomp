/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00214fb8 RecipeBook::~RecipeBook */

/* RecipeBook::~RecipeBook() */

RecipeBook * __thiscall RecipeBook::~RecipeBook(RecipeBook *this)

{
  int *piVar1;
  void *pvVar2;
  CapcomOrderableList<RecipeAndVariants*> *pCVar3;
  int iVar4;
  
  *(int *)this = *(int *)(DAT_002152f8 + 0x214fc2) + 8;
  if (*(int *)(this + 0x140) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x140) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x140) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x140) + 4))();
    }
    *(undefined4 *)(this + 0x140) = 0;
  }
  if (*(int **)(this + 100) != (int *)0x0) {
    (**(code **)(**(int **)(this + 100) + 4))();
    *(undefined4 *)(this + 100) = 0;
  }
  if (*(int **)(this + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x68) + 4))();
    *(undefined4 *)(this + 0x68) = 0;
  }
  if (*(int **)(this + 0x110) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x110) + 4))();
    *(undefined4 *)(this + 0x110) = 0;
  }
  if (*(int **)(this + 0xfc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xfc) + 4))();
    *(undefined4 *)(this + 0xfc) = 0;
  }
  if (*(int **)(this + 0x100) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x100) + 4))();
    *(undefined4 *)(this + 0x100) = 0;
  }
  if (*(int **)(this + 0x120) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x120) + 4))();
    *(undefined4 *)(this + 0x120) = 0;
  }
  if (*(int **)(this + 0x124) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x124) + 4))();
    *(undefined4 *)(this + 0x124) = 0;
  }
  if (*(int **)(this + 0x128) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x128) + 4))();
    *(undefined4 *)(this + 0x128) = 0;
  }
  if (*(int **)(this + 300) != (int *)0x0) {
    (**(code **)(**(int **)(this + 300) + 4))();
    *(undefined4 *)(this + 300) = 0;
  }
  if (*(int **)(this + 0x130) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x130) + 4))();
    *(undefined4 *)(this + 0x130) = 0;
  }
  if (*(int **)(this + 0x11c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x11c) + 4))();
    *(undefined4 *)(this + 0x11c) = 0;
  }
  if (*(int **)(this + 0xe4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xe4) + 4))();
    *(undefined4 *)(this + 0xe4) = 0;
  }
  if (*(int **)(this + 0x104) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x104) + 4))();
    *(undefined4 *)(this + 0x104) = 0;
  }
  if (*(int **)(this + 0x10c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x10c) + 4))();
    *(undefined4 *)(this + 0x10c) = 0;
  }
  if (*(int **)(this + 0xe8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xe8) + 4))();
    *(undefined4 *)(this + 0xe8) = 0;
  }
  if (*(int **)(this + 0x108) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x108) + 4))();
    *(undefined4 *)(this + 0x108) = 0;
  }
  if (*(int **)(this + 0xec) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xec) + 4))();
    *(undefined4 *)(this + 0xec) = 0;
  }
  if (*(int **)(this + 0xf0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xf0) + 4))();
    *(undefined4 *)(this + 0xf0) = 0;
  }
  if (*(int **)(this + 0xcc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xcc) + 4))();
    *(undefined4 *)(this + 0xcc) = 0;
  }
  if (*(int **)(this + 0xd0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xd0) + 4))();
    *(undefined4 *)(this + 0xd0) = 0;
  }
  if (*(int **)(this + 0xd4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xd4) + 4))();
    *(undefined4 *)(this + 0xd4) = 0;
  }
  if (*(int **)(this + 0xd8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xd8) + 4))();
    *(undefined4 *)(this + 0xd8) = 0;
  }
  if (*(int **)(this + 0x118) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x118) + 4))();
    *(undefined4 *)(this + 0x118) = 0;
  }
  if (*(int **)(this + 0x114) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x114) + 4))();
    *(undefined4 *)(this + 0x114) = 0;
  }
  if (*(int **)(this + 0xdc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xdc) + 4))();
    *(undefined4 *)(this + 0xdc) = 0;
  }
  if (*(int **)(this + 0x134) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x134) + 4))();
    *(undefined4 *)(this + 0x134) = 0;
  }
  if (*(int **)(this + 0xe0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xe0) + 4))();
    *(undefined4 *)(this + 0xe0) = 0;
  }
  if (*(int **)(this + 0xf8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xf8) + 4))();
    *(undefined4 *)(this + 0xf8) = 0;
  }
  for (iVar4 = 0; pCVar3 = *(CapcomOrderableList<RecipeAndVariants*> **)(this + 0x150),
      iVar4 < *(int *)(pCVar3 + 0x14); iVar4 = iVar4 + 1) {
    pvVar2 = (void *)CapcomOrderableList<RecipeAndVariants*>::get(pCVar3,iVar4);
    if (pvVar2 != (void *)0x0) {
      if (*(void **)((int)pvVar2 + 0xc) != (void *)0x0) {
        operator_delete__(*(void **)((int)pvVar2 + 0xc));
      }
      operator_delete(pvVar2);
    }
  }
  CapcomOrderableList<RecipeAndVariants*>::removeAll(pCVar3);
  operator_delete(pCVar3);
  for (iVar4 = 0; pCVar3 = *(CapcomOrderableList<RecipeAndVariants*> **)(this + 0x154),
      iVar4 < *(int *)(pCVar3 + 0x14); iVar4 = iVar4 + 1) {
    pvVar2 = (void *)CapcomOrderableList<RecipeAndVariants*>::get(pCVar3,iVar4);
    if (pvVar2 != (void *)0x0) {
      if (*(void **)((int)pvVar2 + 0xc) != (void *)0x0) {
        operator_delete__(*(void **)((int)pvVar2 + 0xc));
      }
      operator_delete(pvVar2);
    }
  }
  CapcomOrderableList<RecipeAndVariants*>::removeAll(pCVar3);
  operator_delete(pCVar3);
  for (iVar4 = 0; iVar4 < *(int *)(this + 0x70) + 1; iVar4 = iVar4 + 1) {
    piVar1 = *(int **)(iVar4 * 4 + *(int *)(this + 0x74));
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  for (iVar4 = 0; iVar4 < *(int *)(this + 0x7c) + 1; iVar4 = iVar4 + 1) {
    piVar1 = *(int **)(iVar4 * 4 + *(int *)(this + 0x80));
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  for (iVar4 = 0; iVar4 < *(int *)(this + 0x88) + 1; iVar4 = iVar4 + 1) {
    piVar1 = *(int **)(iVar4 * 4 + *(int *)(this + 0x8c));
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  for (iVar4 = 0; iVar4 < *(int *)(this + 0x94) + 1; iVar4 = iVar4 + 1) {
    piVar1 = *(int **)(iVar4 * 4 + *(int *)(this + 0x98));
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  for (iVar4 = 0; iVar4 < *(int *)(this + 0xa0) + 1; iVar4 = iVar4 + 1) {
    piVar1 = *(int **)(iVar4 * 4 + *(int *)(this + 0xa4));
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  for (iVar4 = 0; iVar4 < *(int *)(this + 0xac) + 1; iVar4 = iVar4 + 1) {
    piVar1 = *(int **)(iVar4 * 4 + *(int *)(this + 0xb0));
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  for (iVar4 = 0; iVar4 < *(int *)(this + 0xb8) + 1; iVar4 = iVar4 + 1) {
    piVar1 = *(int **)(iVar4 * 4 + *(int *)(this + 0xbc));
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  if (*(int **)(this + 0x168) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x168) + 4))();
    *(undefined4 *)(this + 0x168) = 0;
  }
  if (*(void **)(this + 200) != (void *)0x0) {
    operator_delete__(*(void **)(this + 200));
  }
  Vector<ImageElement*>::~Vector((Vector<ImageElement*> *)(this + 0xb4));
  Vector<ZCImageButton*>::~Vector((Vector<ZCImageButton*> *)(this + 0xa8));
  Vector<ImageElement*>::~Vector((Vector<ImageElement*> *)(this + 0x9c));
  Vector<ImageElement*>::~Vector((Vector<ImageElement*> *)(this + 0x90));
  if (*(void **)(this + 0x8c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x8c));
  }
  Vector<ImageElement*>::~Vector((Vector<ImageElement*> *)(this + 0x78));
  Vector<ZCImageButton*>::~Vector((Vector<ZCImageButton*> *)(this + 0x6c));
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


