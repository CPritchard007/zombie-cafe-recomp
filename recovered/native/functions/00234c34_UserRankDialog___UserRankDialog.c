/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00234c34 UserRankDialog::~UserRankDialog */

/* UserRankDialog::~UserRankDialog() */

UserRankDialog * __thiscall UserRankDialog::~UserRankDialog(UserRankDialog *this)

{
  int *piVar1;
  
  *(int *)this = *(int *)(DAT_00234cd4 + 0x234c3e) + 8;
  if (*(int **)(*(int *)(this + 0x70) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x70) + 100) + 4))();
  }
  if (*(int **)(this + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x70) + 4))();
  }
  if (*(int *)(this + 0x74) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x74) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x74) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x74) + 4))();
    }
  }
  if (*(int **)(*(int *)(this + 0x78) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x78) + 0x60) + 4))();
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
  if (*(int **)(this + 0x84) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x84) + 4))();
  }
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


