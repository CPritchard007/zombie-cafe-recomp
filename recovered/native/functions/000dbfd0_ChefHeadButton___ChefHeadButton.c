/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000dbfd0 ChefHeadButton::~ChefHeadButton */

/* ChefHeadButton::~ChefHeadButton() */

ChefHeadButton * __thiscall ChefHeadButton::~ChefHeadButton(ChefHeadButton *this)

{
  int *piVar1;
  
  *(int *)this = *(int *)(DAT_000dc064 + 0xdbfda) + 8;
  if (*(int **)(this + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x60) + 4))();
  }
  if (*(int *)(this + 100) != 0) {
    piVar1 = *(int **)(*(int *)(this + 100) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 100) != (int *)0x0) {
      (**(code **)(**(int **)(this + 100) + 4))();
    }
  }
  if (*(int **)(this + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x68) + 4))();
  }
  if (*(int *)(this + 0x70) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x70) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x70) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x70) + 4))();
    }
  }
  if (*(int **)(this + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x6c) + 4))();
  }
  if (*(int **)(this + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x74) + 4))();
  }
  free(*(void **)(this + 0x78));
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


