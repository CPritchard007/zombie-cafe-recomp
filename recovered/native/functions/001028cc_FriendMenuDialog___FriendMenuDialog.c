/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001028cc FriendMenuDialog::~FriendMenuDialog */

/* FriendMenuDialog::~FriendMenuDialog() */

FriendMenuDialog * __thiscall FriendMenuDialog::~FriendMenuDialog(FriendMenuDialog *this)

{
  void *pvVar1;
  CapcomOrderableList<RecipeAndVariants*> *this_00;
  int iVar2;
  
  *(int *)this = *(int *)(DAT_001029e0 + 0x1028d8) + 8;
  for (iVar2 = 0; this_00 = *(CapcomOrderableList<RecipeAndVariants*> **)(this + 0x9c),
      iVar2 < *(int *)(this_00 + 0x14); iVar2 = iVar2 + 1) {
    pvVar1 = (void *)CapcomOrderableList<RecipeAndVariants*>::get(this_00,iVar2);
    if (pvVar1 != (void *)0x0) {
      if (*(void **)((int)pvVar1 + 0xc) != (void *)0x0) {
        operator_delete__(*(void **)((int)pvVar1 + 0xc));
      }
      operator_delete(pvVar1);
    }
  }
  CapcomOrderableList<RecipeAndVariants*>::removeAll(this_00);
  operator_delete(this_00);
  if (*(int **)(this + 0x84) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x84) + 4))();
  }
  if (*(int **)(this + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x7c) + 4))();
  }
  if (*(int **)(this + 0x80) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x80) + 4))();
  }
  if (*(int **)(this + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x74) + 4))();
  }
  if (*(int **)(this + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x78) + 4))();
  }
  if (*(void **)(this + 0xa8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xa8));
  }
  if (*(int **)(this + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x98) + 4))();
  }
  if (*(int **)(this + 0x88) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x88) + 4))();
  }
  if (*(int **)(this + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x8c) + 4))();
  }
  if (*(int **)(this + 0x90) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x90) + 4))();
  }
  if (*(int **)(this + 0x94) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x94) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x70) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x70) + 100) + 4))();
  }
  if (*(int **)(this + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x70) + 4))();
  }
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


