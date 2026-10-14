/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e7e64 CookCommandBar::open */

/* CookCommandBar::open() */

void __thiscall CookCommandBar::open(CookCommandBar *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (this[0xb0] != (CookCommandBar)0x2) {
    setState(this,'\x01');
    if (*(int **)(this + 0xac) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xac) + 4))();
    }
    uVar4 = *(uint *)(*(int *)(this + 0x74) + 0x10);
    iVar3 = *(int *)(this + 0x10);
    uVar5 = (((int)uVar4 >> 0x10) - ((int)uVar4 >> 0x1f) >> 1) << 0x10;
    piVar1 = (int *)operator_new(0x1c);
    iVar2 = DAT_000e7f00;
    piVar1[2] = uVar4 & 0xffff | uVar5;
    piVar1[3] = uVar5 | (short)uVar4 - iVar3 & 0xffffU;
    iVar3 = DAT_000e7f04;
    piVar1[4] = **(int **)(iVar2 + 0xe7eba);
    iVar2 = DAT_000e7f08;
    piVar1[6] = **(int **)(iVar3 + 0xe7ec4);
    *piVar1 = *(int *)(iVar2 + 0xe7ece) + 8;
    piVar1[5] = 0;
    *(int **)(this + 0xac) = piVar1;
    (**(code **)(*piVar1 + 0xc))();
    iVar2 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(this + 0x74) + DAT_000e7f0c),'\x03');
    if (iVar2 == 0) {
      *(undefined1 *)(*(int *)(this + 100) + 0x86) = 0;
    }
    else {
      *(undefined1 *)(*(int *)(this + 100) + 0x86) = 1;
    }
  }
  return;
}


