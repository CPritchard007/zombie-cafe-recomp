/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00154bbe GameStateGatya::uninitEffectScreen */

/* GameStateGatya::uninitEffectScreen() */

undefined8 __thiscall GameStateGatya::uninitEffectScreen(GameStateGatya *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  Character *pCVar5;
  Vector<GatyaEftImageElement*> *pVVar6;
  int iVar7;
  
  if (*(int *)(this + 0x1e8) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x1e8) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x1e8) + 100) + 4))();
    }
    if (*(int **)(this + 0x1e8) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1e8) + 4))();
    }
    *(undefined4 *)(this + 0x1e8) = 0;
  }
  if (*(int *)(this + 0x1ac) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x1ac) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x1ac) + 100) + 4))();
    }
    if (*(int **)(this + 0x1ac) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1ac) + 4))();
    }
    *(undefined4 *)(this + 0x1ac) = 0;
  }
  if (*(int *)(this + 0x1a0) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x1a0) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x1a0) + 100) + 4))();
    }
    if (*(int **)(this + 0x1a0) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1a0) + 4))();
    }
    *(undefined4 *)(this + 0x1a0) = 0;
  }
  if (*(int *)(this + 0x1a4) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x1a4) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x1a4) + 100) + 4))();
    }
    if (*(int **)(this + 0x1a4) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1a4) + 4))();
    }
    *(undefined4 *)(this + 0x1a4) = 0;
  }
  if (*(int *)(this + 0x1a8) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x1a8) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x1a8) + 100) + 4))();
    }
    if (*(int **)(this + 0x1a8) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1a8) + 4))();
    }
    *(undefined4 *)(this + 0x1a8) = 0;
  }
  if (*(int *)(this + 0x1a0) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x1a0) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x1a0) + 100) + 4))();
    }
    if (*(int **)(this + 0x1a0) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1a0) + 4))();
    }
    *(undefined4 *)(this + 0x1a0) = 0;
  }
  if (*(int *)(this + 0x194) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x194) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x194) + 100) + 4))();
    }
    if (*(int **)(this + 0x194) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x194) + 4))();
    }
    *(undefined4 *)(this + 0x194) = 0;
  }
  if (*(int *)(this + 0x198) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x198) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x198) + 100) + 4))();
    }
    if (*(int **)(this + 0x198) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x198) + 4))();
    }
    *(undefined4 *)(this + 0x198) = 0;
  }
  if (*(int *)(this + 0x19c) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x19c) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x19c) + 100) + 4))();
    }
    if (*(int **)(this + 0x19c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x19c) + 4))();
    }
    *(undefined4 *)(this + 0x19c) = 0;
  }
  if (*(int *)(this + 0x164) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x164) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x164) + 100) + 4))();
    }
    if (*(int **)(this + 0x164) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x164) + 4))();
    }
    *(undefined4 *)(this + 0x164) = 0;
  }
  if (*(int *)(this + 0x168) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x168) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x168) + 100) + 4))();
    }
    if (*(int **)(this + 0x168) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x168) + 4))();
    }
    *(undefined4 *)(this + 0x168) = 0;
  }
  if (*(int *)(this + 0x16c) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x16c) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x16c) + 100) + 4))();
    }
    if (*(int **)(this + 0x16c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x16c) + 4))();
    }
    *(undefined4 *)(this + 0x16c) = 0;
  }
  if (*(int *)(this + 0x170) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x170) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x170) + 100) + 4))();
    }
    if (*(int **)(this + 0x170) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x170) + 4))();
    }
    *(undefined4 *)(this + 0x170) = 0;
  }
  if (*(int *)(this + 0x174) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x174) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x174) + 100) + 4))();
    }
    if (*(int **)(this + 0x174) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x174) + 4))();
    }
    *(undefined4 *)(this + 0x174) = 0;
  }
  if (*(int *)(this + 0x178) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x178) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x178) + 100) + 4))();
    }
    if (*(int **)(this + 0x178) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x178) + 4))();
    }
    *(undefined4 *)(this + 0x178) = 0;
  }
  if (*(int *)(this + 0x17c) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x17c) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x17c) + 100) + 4))();
    }
    if (*(int **)(this + 0x17c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x17c) + 4))();
    }
    *(undefined4 *)(this + 0x17c) = 0;
  }
  if (*(int *)(this + 0x180) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x180) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x180) + 100) + 4))();
    }
    if (*(int **)(this + 0x180) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x180) + 4))();
    }
    *(undefined4 *)(this + 0x180) = 0;
  }
  if (*(int *)(this + 0x184) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x184) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x184) + 100) + 4))();
    }
    if (*(int **)(this + 0x184) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x184) + 4))();
    }
    *(undefined4 *)(this + 0x184) = 0;
  }
  if (*(int *)(this + 0x188) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x188) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x188) + 100) + 4))();
    }
    if (*(int **)(this + 0x188) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x188) + 4))();
    }
    *(undefined4 *)(this + 0x188) = 0;
  }
  if (*(int *)(this + 0x18c) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x18c) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x18c) + 100) + 4))();
    }
    if (*(int **)(this + 0x18c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x18c) + 4))();
    }
    *(undefined4 *)(this + 0x18c) = 0;
  }
  if (*(int *)(this + 400) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 400) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 400) + 100) + 4))();
    }
    if (*(int **)(this + 400) != (int *)0x0) {
      (**(code **)(**(int **)(this + 400) + 4))();
    }
    *(undefined4 *)(this + 400) = 0;
  }
  if (*(int *)(this + 0x15c) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x15c) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x15c) + 100) + 4))();
    }
    if (*(int **)(this + 0x15c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x15c) + 4))();
    }
    *(undefined4 *)(this + 0x15c) = 0;
  }
  if (*(int *)(this + 0x1b0) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x1b0) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x1b0) + 100) + 4))();
    }
    if (*(int **)(this + 0x1b0) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1b0) + 4))();
    }
    *(undefined4 *)(this + 0x1b0) = 0;
  }
  if (*(int *)(this + 0x1b4) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x1b4) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x1b4) + 100) + 4))();
    }
    if (*(int **)(this + 0x1b4) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1b4) + 4))();
    }
    *(undefined4 *)(this + 0x1b4) = 0;
  }
  if (*(int *)(this + 0x1b8) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x1b8) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x1b8) + 100) + 4))();
    }
    if (*(int **)(this + 0x1b8) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1b8) + 4))();
    }
    *(undefined4 *)(this + 0x1b8) = 0;
  }
  if (*(int *)(this + 0x1bc) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x1bc) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x1bc) + 100) + 4))();
    }
    if (*(int **)(this + 0x1bc) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1bc) + 4))();
    }
    *(undefined4 *)(this + 0x1bc) = 0;
  }
  if (*(int *)(this + 0x1c0) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x1c0) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x1c0) + 100) + 4))();
    }
    if (*(int **)(this + 0x1c0) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1c0) + 4))();
    }
    *(undefined4 *)(this + 0x1c0) = 0;
  }
  if (*(int *)(this + 0x1c4) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x1c4) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x1c4) + 100) + 4))();
    }
    if (*(int **)(this + 0x1c4) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1c4) + 4))();
    }
    *(undefined4 *)(this + 0x1c4) = 0;
  }
  if (*(int *)(this + 0x1c8) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x1c8) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x1c8) + 100) + 4))();
    }
    if (*(int **)(this + 0x1c8) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1c8) + 4))();
    }
    *(undefined4 *)(this + 0x1c8) = 0;
  }
  if (*(int *)(this + 0x1cc) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x1cc) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x1cc) + 100) + 4))();
    }
    if (*(int **)(this + 0x1cc) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1cc) + 4))();
    }
    *(undefined4 *)(this + 0x1cc) = 0;
  }
  iVar3 = 0;
  if (*(int *)(this + 0x1d0) != 0) {
    for (; iVar2 = *(int *)(this + 0x1d0), iVar3 < *(int *)(iVar2 + 4) + 1; iVar3 = iVar3 + 1) {
      iVar7 = iVar3 * 4;
      (**(code **)(**(int **)(this + 0x160) + 0x34))
                (*(int **)(this + 0x160),*(undefined4 *)(*(int *)(iVar2 + 8) + iVar7));
      piVar1 = *(int **)(*(int *)(*(int *)(*(int *)(this + 0x1d0) + 8) + iVar7) + 100);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      piVar1 = *(int **)(*(int *)(*(int *)(this + 0x1d0) + 8) + iVar7);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    *(undefined4 *)(iVar2 + 4) = 0xffffffff;
  }
  pvVar4 = *(void **)(this + 0x1d0);
  if (pvVar4 != (void *)0x0) {
    if (*(void **)((int)pvVar4 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((int)pvVar4 + 8));
    }
    operator_delete(pvVar4);
    *(undefined4 *)(this + 0x1d0) = 0;
  }
  if (*(int *)(this + 0x160) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(this + 0x160) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x160) + 4))();
    }
    *(undefined4 *)(this + 0x160) = 0;
  }
  iVar3 = 0;
  if (*(int *)(this + 0x1d8) != 0) {
    for (; iVar2 = *(int *)(this + 0x1d8), iVar3 < *(int *)(iVar2 + 4) + 1; iVar3 = iVar3 + 1) {
      pCVar5 = *(Character **)(*(int *)(*(int *)(iVar2 + 8) + iVar3 * 4) + 0x8c);
      if (pCVar5 != (Character *)0x0) {
        Character::~Character(pCVar5);
        operator_delete(pCVar5);
      }
      piVar1 = *(int **)(*(int *)(*(int *)(this + 0x1d8) + 8) + iVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    *(undefined4 *)(iVar2 + 4) = 0xffffffff;
  }
  pvVar4 = *(void **)(this + 0x1d8);
  if (pvVar4 != (void *)0x0) {
    if (*(void **)((int)pvVar4 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((int)pvVar4 + 8));
    }
    operator_delete(pvVar4);
    *(undefined4 *)(this + 0x1d8) = 0;
  }
  iVar3 = 0;
  if (*(int *)(this + 0x1dc) != 0) {
    for (; iVar2 = *(int *)(this + 0x1dc), iVar3 < *(int *)(iVar2 + 4) + 1; iVar3 = iVar3 + 1) {
      pCVar5 = *(Character **)(*(int *)(*(int *)(iVar2 + 8) + iVar3 * 4) + 0x8c);
      if (pCVar5 != (Character *)0x0) {
        Character::~Character(pCVar5);
        operator_delete(pCVar5);
      }
      piVar1 = *(int **)(*(int *)(*(int *)(this + 0x1dc) + 8) + iVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    *(undefined4 *)(iVar2 + 4) = 0xffffffff;
  }
  pvVar4 = *(void **)(this + 0x1dc);
  if (pvVar4 != (void *)0x0) {
    if (*(void **)((int)pvVar4 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((int)pvVar4 + 8));
    }
    operator_delete(pvVar4);
    *(undefined4 *)(this + 0x1dc) = 0;
  }
  iVar3 = 0;
  if (*(int *)(this + 0x1e0) != 0) {
    for (; iVar2 = *(int *)(this + 0x1e0), iVar3 < *(int *)(iVar2 + 4) + 1; iVar3 = iVar3 + 1) {
      iVar7 = iVar3 * 4;
      (**(code **)(**(int **)(this + 0x1c) + 0x34))
                (*(int **)(this + 0x1c),*(undefined4 *)(*(int *)(iVar2 + 8) + iVar7));
      piVar1 = *(int **)(*(int *)(*(int *)(*(int *)(this + 0x1e0) + 8) + iVar7) + 100);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      piVar1 = *(int **)(*(int *)(*(int *)(this + 0x1e0) + 8) + iVar7);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    *(undefined4 *)(iVar2 + 4) = 0xffffffff;
  }
  pVVar6 = *(Vector<GatyaEftImageElement*> **)(this + 0x1e0);
  if (pVVar6 != (Vector<GatyaEftImageElement*> *)0x0) {
    Vector<GatyaEftImageElement*>::~Vector(pVVar6);
    operator_delete(pVVar6);
    *(undefined4 *)(this + 0x1e0) = 0;
  }
  iVar3 = 0;
  if (*(int *)(this + 0x1e4) != 0) {
    for (; iVar2 = *(int *)(this + 0x1e4), iVar3 < *(int *)(iVar2 + 4) + 1; iVar3 = iVar3 + 1) {
      iVar7 = iVar3 * 4;
      (**(code **)(**(int **)(this + 0x18) + 0x34))
                (*(int **)(this + 0x18),*(undefined4 *)(*(int *)(iVar2 + 8) + iVar7));
      piVar1 = *(int **)(*(int *)(*(int *)(*(int *)(this + 0x1e4) + 8) + iVar7) + 100);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      piVar1 = *(int **)(*(int *)(*(int *)(this + 0x1e4) + 8) + iVar7);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    *(undefined4 *)(iVar2 + 4) = 0xffffffff;
  }
  pVVar6 = *(Vector<GatyaEftImageElement*> **)(this + 0x1e4);
  if (pVVar6 != (Vector<GatyaEftImageElement*> *)0x0) {
    Vector<GatyaEftImageElement*>::~Vector(pVVar6);
    operator_delete(pVVar6);
    *(undefined4 *)(this + 0x1e4) = 0;
  }
  if (*(int *)(this + 0x1d4) != 0) {
    (**(code **)(**(int **)(this + 0x20) + 0x34))();
    if (*(int **)(*(int *)(this + 0x1d4) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x1d4) + 100) + 4))();
    }
    if (*(int **)(this + 0x1d4) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1d4) + 4))();
    }
    *(undefined4 *)(this + 0x1d4) = 0;
  }
  this[0xe40] = (GameStateGatya)0x0;
  return CONCAT44(0x1e4,this);
}


