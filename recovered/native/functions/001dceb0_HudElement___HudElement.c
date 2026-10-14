/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001dceb0 HudElement::~HudElement */

/* HudElement::~HudElement() */

HudElement * __thiscall HudElement::~HudElement(HudElement *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_24 [8];
  int *local_1c;
  
  *(int *)this = *(int *)(DAT_001dd1f4 + 0x1dcebc) + 8;
  if (*(int **)(*(int *)(this + 0xb4) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xb4) + 100) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x88) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x88) + 0x60) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xb8) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xb8) + 100) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xbc) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xbc) + 100) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x90) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x90) + 0x60) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x94) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x94) + 0x60) + 4))();
  }
  if (*(int **)(this + 0xe4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xe4) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x98) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x98) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x98) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xa4) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xa4) + 0x60) + 4))();
  }
  if (*(int **)(this + 0xb0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xb0) + 4))();
  }
  if (*(int **)(this + 0xd4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xd4) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x8c) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x8c) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x8c) + 4))();
  }
  if (*(int **)(this + 0xb4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xb4) + 4))();
  }
  if (*(int **)(this + 0x88) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x88) + 4))();
  }
  if (*(int **)(this + 0xb8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xb8) + 4))();
  }
  if (*(int **)(this + 0xbc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xbc) + 4))();
  }
  if (*(int **)(this + 0xa4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa4) + 4))();
  }
  if (*(int **)(this + 0x90) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x90) + 4))();
  }
  if (*(int **)(this + 0x94) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x94) + 4))();
  }
  if (*(int *)(this + 0xe8) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0xe8) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0xe8) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xe8) + 4))();
    }
  }
  if (*(int **)(this + 0xc0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xc0) + 4))();
    *(undefined4 *)(this + 0xc0) = 0;
  }
  if (*(int **)(this + 0xc4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xc4) + 4))();
    *(undefined4 *)(this + 0xc4) = 0;
  }
  if (*(int **)(this + 200) != (int *)0x0) {
    (**(code **)(**(int **)(this + 200) + 4))();
    *(undefined4 *)(this + 200) = 0;
  }
  if (*(int **)(this + 0xcc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xcc) + 4))();
    *(undefined4 *)(this + 0xcc) = 0;
  }
  if (*(int **)(this + 0xd0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xd0) + 4))();
    *(undefined4 *)(this + 0xd0) = 0;
  }
  if (*(int **)(this + 0xd8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xd8) + 4))();
    *(undefined4 *)(this + 0xd8) = 0;
  }
  if (*(int **)(this + 0xdc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xdc) + 4))();
    *(undefined4 *)(this + 0xdc) = 0;
  }
  if (*(int *)(this + 0xec) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0xec) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0xec) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xec) + 4))();
    }
    *(undefined4 *)(this + 0xec) = 0;
    if (*(int **)(this + 0xe0) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xe0) + 4))();
      *(undefined4 *)(this + 0xe0) = 0;
    }
  }
  if (*(int *)(this + 0xf0) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0xf0) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0xf0) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xf0) + 4))();
    }
    *(undefined4 *)(this + 0xf0) = 0;
  }
  if (*(int **)(this + 0xf4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xf4) + 4))();
    *(undefined4 *)(this + 0xf4) = 0;
  }
  if (*(int **)(this + 0xfc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xfc) + 4))();
    *(undefined4 *)(this + 0xfc) = 0;
  }
  if (*(int **)(this + 0x100) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x100) + 4))();
    *(undefined4 *)(this + 0x100) = 0;
  }
  if (*(int **)(this + 0x104) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x104) + 4))();
    *(undefined4 *)(this + 0x104) = 0;
  }
  if (*(int **)(this + 0x108) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x108) + 4))();
    *(undefined4 *)(this + 0x108) = 0;
  }
  if (*(int *)(this + 0x10c) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x10c) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x10c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x10c) + 4))();
    }
    *(undefined4 *)(this + 0x10c) = 0;
  }
  if (*(int *)(this + 0x110) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x110) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x110) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x110) + 4))();
    }
    *(undefined4 *)(this + 0x110) = 0;
  }
  if (*(int *)(this + 0x114) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x114) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x114) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x114) + 4))();
    }
    *(undefined4 *)(this + 0x114) = 0;
  }
  if (*(int **)(this + 0xf8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xf8) + 4))();
    *(undefined4 *)(this + 0xf8) = 0;
  }
  if (*(int **)(this + 0xac) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xac) + 4))();
    *(undefined4 *)(this + 0xac) = 0;
  }
  for (iVar3 = 0; iVar3 < *(int *)(this + 0x70) + 1; iVar3 = iVar3 + 1) {
    Vector<HudElement::NewIndicator>::elementAt((int)auStack_24);
    piVar1 = local_1c;
    piVar2 = *(int **)(iVar3 * 4 + *(int *)(this + 0x74));
    if (piVar2 != (int *)0x0) {
      if ((int *)piVar2[0x18] != (int *)0x0) {
        (**(code **)(*(int *)piVar2[0x18] + 4))();
      }
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
  }
  if (*(int **)(this + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x78) + 4))();
    *(undefined4 *)(this + 0x78) = 0;
  }
  if (*(void **)(this + 0x84) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x84));
  }
  if (*(void **)(this + 0x74) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x74));
  }
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


