/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00103930 FurnitureButton::~FurnitureButton */

/* FurnitureButton::~FurnitureButton() */

FurnitureButton * __thiscall FurnitureButton::~FurnitureButton(FurnitureButton *this)

{
  int iVar1;
  
  *(int *)this = *(int *)(DAT_001039b4 + 0x10393c) + 8;
  free(*(void **)(this + 0x84));
  *(undefined4 *)(this + 0x84) = 0;
  if (this[0x80] == (FurnitureButton)0x0) {
    free(*(void **)(this + 0x94));
    *(undefined4 *)(this + 0x94) = 0;
  }
  iVar1 = *(int *)(DAT_001039b8 + 0x103968);
  if (*(int **)(this + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x74) + 4))();
  }
  if (*(int **)(this + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x70) + 4))();
  }
  if (*(int **)(this + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x78) + 4))();
  }
  if (*(int **)(this + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x7c) + 4))();
  }
  *(int *)this = iVar1 + 8;
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


