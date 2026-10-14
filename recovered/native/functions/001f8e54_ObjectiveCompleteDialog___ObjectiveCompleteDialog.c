/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f8e54 ObjectiveCompleteDialog::~ObjectiveCompleteDialog */

/* ObjectiveCompleteDialog::~ObjectiveCompleteDialog() */

ObjectiveCompleteDialog * __thiscall
ObjectiveCompleteDialog::~ObjectiveCompleteDialog(ObjectiveCompleteDialog *this)

{
  int iVar1;
  
  *(int *)this = *(int *)(DAT_001f8fc0 + 0x1f8e5e) + 8;
  if (*(int **)(*(int *)(this + 0x6c) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x6c) + 100) + 4))();
  }
  if (*(int **)(this + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x6c) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x90) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x90) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x90) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x90) + 4))();
  }
  if (*(int **)(this + 0xac) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xac) + 4))();
  }
  if (*(int **)(this + 0x94) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x94) + 4))();
  }
  if (*(int **)(this + 0xb0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xb0) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x70) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x70) + 100) + 4))();
  }
  if (*(int **)(this + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x70) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x74) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x74) + 100) + 4))();
  }
  if (*(int **)(this + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x74) + 4))();
  }
  if (*(int **)(this + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x98) + 4))();
  }
  if (*(int **)(this + 0x9c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x9c) + 4))();
  }
  if (*(int **)(this + 0xa0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa0) + 4))();
  }
  if (*(int **)(this + 0xa4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa4) + 4))();
  }
  if (*(int **)(this + 0xa8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa8) + 4))();
  }
  if (*(int **)(this + 100) != (int *)0x0) {
    (**(code **)(**(int **)(this + 100) + 4))();
  }
  if (*(int **)(this + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x78) + 4))();
  }
  if (*(int **)(this + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x7c) + 4))();
  }
  if (*(int **)(this + 0x80) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x80) + 4))();
  }
  if (*(int **)(this + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x68) + 4))();
  }
  iVar1 = 0;
  do {
    if (*(int **)(this + iVar1 + 0x84) != (int *)0x0) {
      (**(code **)(**(int **)(this + iVar1 + 0x84) + 4))();
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0xc);
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


