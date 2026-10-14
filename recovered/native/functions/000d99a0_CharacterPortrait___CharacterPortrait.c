/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000d99a0 CharacterPortrait::~CharacterPortrait */

/* CharacterPortrait::~CharacterPortrait() */

CharacterPortrait * __thiscall CharacterPortrait::~CharacterPortrait(CharacterPortrait *this)

{
  int *piVar1;
  
  *(int *)this = *(int *)(DAT_000d9a7c + 0xd99aa) + 8;
  if (*(int **)(*(int *)(this + 0x60) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x60) + 100) + 4))();
  }
  if (*(int **)(this + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x60) + 4))();
  }
  if (*(int **)(*(int *)(this + 100) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 100) + 100) + 4))();
  }
  if (*(int **)(this + 100) != (int *)0x0) {
    (**(code **)(**(int **)(this + 100) + 4))();
  }
  if (*(int *)(this + 0x68) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x68) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x68) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x68) + 4))();
    }
    *(undefined4 *)(this + 0x68) = 0;
  }
  if (*(int **)(this + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x6c) + 4))();
  }
  if (*(int **)(this + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x70) + 4))();
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
  if (*(int **)(this + 0x88) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x88) + 4))();
  }
  if (*(int **)(this + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x8c) + 4))();
  }
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


