/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022ced4 Store::~Store */

/* Store::~Store() */

Store * __thiscall Store::~Store(Store *this)

{
  int *piVar1;
  int iVar2;
  
  *(int *)this = *(int *)(DAT_0022cfac + 0x22cede) + 8;
  *(undefined4 *)(this + 0x6c) = 0;
  unsetTab();
  if (*(int **)(this + 0x84) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x84) + 4))();
    *(undefined4 *)(this + 0x84) = 0;
  }
  if (*(int **)(this + 0x88) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x88) + 4))();
    *(undefined4 *)(this + 0x88) = 0;
  }
  iVar2 = 0;
  do {
    piVar1 = *(int **)(this + iVar2 + 0x8c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      *(undefined4 *)(this + iVar2 + 0x8c) = 0;
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0x1c);
  if (*(int **)(this + 0xa8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa8) + 4))();
    *(undefined4 *)(this + 0xa8) = 0;
  }
  if (*(int **)(this + 0xac) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xac) + 4))();
    *(undefined4 *)(this + 0xac) = 0;
  }
  if (*(int **)(this + 0xb0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xb0) + 4))();
    *(undefined4 *)(this + 0xb0) = 0;
  }
  if (*(int **)(this + 0xb4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xb4) + 4))();
    *(undefined4 *)(this + 0xb4) = 0;
  }
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


