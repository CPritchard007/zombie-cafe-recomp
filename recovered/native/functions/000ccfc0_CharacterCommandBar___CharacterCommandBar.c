/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ccfc0 CharacterCommandBar::~CharacterCommandBar */

/* CharacterCommandBar::~CharacterCommandBar() */

CharacterCommandBar * __thiscall
CharacterCommandBar::~CharacterCommandBar(CharacterCommandBar *this)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  
  *(int *)this = *(int *)(DAT_000cd158 + 0xccfcc) + 8;
  while (iVar3 = *(int *)(this + 0x78), -1 < iVar3) {
    puVar4 = (undefined4 *)(*(int *)(this + 0x7c) + iVar3 * 4);
    pvVar2 = (void *)*puVar4;
    *puVar4 = 0;
    Vector<CommandButton*>::move((Vector<CommandButton*> *)(this + 0x74),iVar3 + 1,-1);
    *(int *)(this + 0x78) = *(int *)(this + 0x78) + -1;
    operator_delete(pvVar2);
  }
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(this + 0x8c);
  while (piVar5 = *(int **)(this + 0x94), piVar5 != (int *)0x0) {
    piVar1 = (int *)*piVar5;
    *(int *)(this + 0x94) = piVar5[1];
    if (piVar1 == (int *)0x0) break;
    (**(code **)(*piVar1 + 4))();
  }
  *(undefined4 *)(this + 0xa8) = *(undefined4 *)(this + 0xa0);
  while (piVar5 = *(int **)(this + 0xa8), piVar5 != (int *)0x0) {
    piVar1 = (int *)*piVar5;
    *(int *)(this + 0xa8) = piVar5[1];
    if (piVar1 == (int *)0x0) break;
    (**(code **)(*piVar1 + 4))();
  }
  if (*(int **)(*(int *)(this + 0xbc) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xbc) + 100) + 4))();
  }
  if (*(int **)(this + 0xbc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xbc) + 4))();
  }
  if (*(int **)(this + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x6c) + 4))();
  }
  if (*(int **)(this + 0xb0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xb0) + 4))();
  }
  if (*(int **)(this + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x70) + 4))();
  }
  operator_delete(*(void **)(this + 0x80));
  if (*(int **)(this + 0xd0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xd0) + 4))();
  }
  if (*(int **)(this + 0xd4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xd4) + 4))();
  }
  if (*(int *)(this + 0xac) != 0) {
    while (pvVar2 = *(void **)(this + 0xa0), pvVar2 != (void *)0x0) {
      uVar6 = *(undefined4 *)((int)pvVar2 + 4);
      operator_delete(pvVar2);
      *(undefined4 *)(this + 0xa0) = uVar6;
    }
    *(undefined4 *)(this + 0xac) = 0;
    *(CharacterCommandBar **)(this + 0xa4) = this + 0x9c;
    *(undefined4 *)(this + 0xa8) = 0;
  }
  if (*(int *)(this + 0x98) != 0) {
    while (pvVar2 = *(void **)(this + 0x8c), pvVar2 != (void *)0x0) {
      uVar6 = *(undefined4 *)((int)pvVar2 + 4);
      operator_delete(pvVar2);
      *(undefined4 *)(this + 0x8c) = uVar6;
    }
    *(undefined4 *)(this + 0x98) = 0;
    *(CharacterCommandBar **)(this + 0x90) = this + 0x88;
    *(undefined4 *)(this + 0x94) = 0;
  }
  if (*(void **)(this + 0x7c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x7c));
  }
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


