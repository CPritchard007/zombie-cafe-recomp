/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00206f04 PullMenuElement::~PullMenuElement */

/* PullMenuElement::~PullMenuElement() */

PullMenuElement * __thiscall PullMenuElement::~PullMenuElement(PullMenuElement *this)

{
  int *piVar1;
  
  *(int *)this = *(int *)(DAT_00207118 + 0x206f0e) + 8;
  if (*(int *)(this + 0xcc) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0xcc) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0xcc) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xcc) + 4))();
    }
    *(undefined4 *)(this + 0xcc) = 0;
  }
  if (*(int **)(this + 0xd0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xd0) + 4))();
    *(undefined4 *)(this + 0xd0) = 0;
  }
  if (*(int *)(this + 0x74) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x74) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x74) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x74) + 4))();
    }
    *(undefined4 *)(this + 0x74) = 0;
  }
  if (*(int *)(this + 0x78) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x78) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x78) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x78) + 4))();
    }
    *(undefined4 *)(this + 0x78) = 0;
  }
  if (*(int *)(this + 0x7c) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x7c) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x7c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x7c) + 4))();
    }
    *(undefined4 *)(this + 0x7c) = 0;
  }
  if (*(int *)(this + 0x80) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x80) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x80) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x80) + 4))();
    }
    *(undefined4 *)(this + 0x80) = 0;
  }
  if (*(int *)(this + 0x84) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x84) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x84) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x84) + 4))();
    }
    *(undefined4 *)(this + 0x84) = 0;
  }
  if (*(int *)(this + 0x88) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x88) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x88) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x88) + 4))();
    }
    *(undefined4 *)(this + 0x88) = 0;
  }
  if (*(int *)(this + 0x8c) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x8c) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x8c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x8c) + 4))();
    }
    *(undefined4 *)(this + 0x8c) = 0;
  }
  if (*(int *)(this + 0x80) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x80) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x80) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x80) + 4))();
    }
    *(undefined4 *)(this + 0x80) = 0;
  }
  if (*(int **)(this + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x98) + 4))();
  }
  if (*(int **)(this + 0xa4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa4) + 4))();
  }
  if (*(int **)(this + 0xb0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xb0) + 4))();
  }
  if (*(int **)(this + 0xbc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xbc) + 4))();
  }
  if (*(int **)(this + 200) != (int *)0x0) {
    (**(code **)(**(int **)(this + 200) + 4))();
  }
  if (*(int **)(this + 0xd4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xd4) + 4))();
  }
  if (*(int **)(this + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x70) + 4))();
  }
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


