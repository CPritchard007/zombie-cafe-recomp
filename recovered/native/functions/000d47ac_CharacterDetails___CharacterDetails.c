/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000d47ac CharacterDetails::~CharacterDetails */

/* CharacterDetails::~CharacterDetails() */

void __thiscall CharacterDetails::~CharacterDetails(CharacterDetails *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  CharacterDetails *pCVar7;
  FontManager *pFVar8;
  undefined4 uVar9;
  int local_124;
  char acStack_11c [256];
  int local_1c;
  
  iVar5 = DAT_000d4a9c + 0xd47b8;
  local_1c = **(int **)(iVar5 + DAT_000d4aa0);
  *(int *)this = *(int *)(iVar5 + DAT_000d4aa4) + 8;
  if (*(int **)(*(int *)(this + 0x16c) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x16c) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x16c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x16c) + 4))();
  }
  if (*(int **)(this + 0x170) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x170) + 4))();
  }
  if (*(int *)(this + 0x17c) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x17c) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x17c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x17c) + 4))();
    }
    *(undefined4 *)(this + 0x17c) = 0;
  }
  if (*(int *)(this + 0x180) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x180) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x180) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x180) + 4))();
    }
    *(undefined4 *)(this + 0x180) = 0;
  }
  if (*(int **)(*(int *)(this + 0x90) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x90) + 100) + 4))();
  }
  if (*(int **)(this + 0x90) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x90) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x9c) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x9c) + 100) + 4))();
  }
  if (*(int **)(this + 0x9c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x9c) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xa0) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xa0) + 100) + 4))();
  }
  if (*(int **)(this + 0xa0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa0) + 4))();
  }
  if (*(int **)(this + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x98) + 4))();
  }
  if (*(int *)(this + 0xf0) != 0) {
    L_PrintLog((char *)(DAT_000d4aa8 + 0xd48cc),(char *)(DAT_000d4aac + 0xd48ce));
    piVar6 = *(int **)(iVar5 + DAT_000d4ab0);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar6,*(TrueTypeTextElement **)(this + 0xf0));
    piVar1 = *(int **)(this + 0xf0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(this + 0xf0) = 0;
    sprintf(acStack_11c,(char *)(DAT_000d4ab4 + 0xd4900),*(int *)(*piVar6 + 4) + 1);
    L_PrintLog((char *)(DAT_000d4ab8 + 0xd490c),acStack_11c);
  }
  if (*(int *)(this + 0xec) != 0) {
    L_PrintLog((char *)(DAT_000d4abc + 0xd4920),(char *)(DAT_000d4ac0 + 0xd4922));
    piVar6 = *(int **)(iVar5 + DAT_000d4ab0);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar6,*(TrueTypeTextElement **)(this + 0xec));
    piVar1 = *(int **)(this + 0xec);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(this + 0xec) = 0;
    sprintf(acStack_11c,(char *)(DAT_000d4ac4 + 0xd4954),*(int *)(*piVar6 + 4) + 1);
    L_PrintLog((char *)(DAT_000d4ac8 + 0xd4960),acStack_11c);
  }
  if (*(int **)(this + 0x110) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x110) + 4))();
  }
  if (*(int **)(this + 0x114) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x114) + 4))();
  }
  if (*(int **)(this + 0x124) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x124) + 4))();
  }
  if (*(int **)(this + 0xf4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xf4) + 4))();
  }
  if (*(int **)(this + 0xfc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xfc) + 4))();
  }
  if (*(int **)(this + 0xf8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xf8) + 4))();
  }
  if (*(int **)(this + 0x100) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x100) + 4))();
  }
  operator_delete(*(void **)(this + 0x134));
  operator_delete(*(void **)(this + 0x138));
  operator_delete(*(void **)(this + 0x13c));
  if (*(int **)(*(int *)(this + 0x178) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x178) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x178) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x178) + 4))();
  }
  if (*(int *)(this + 0xa8) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0xa8) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0xa8) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xa8) + 4))();
    }
    *(undefined4 *)(this + 0xa8) = 0;
  }
  if (*(int *)(this + 0xac) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0xac) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0xac) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xac) + 4))();
    }
    *(undefined4 *)(this + 0xac) = 0;
  }
  if (*(int **)(this + 0xa4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa4) + 4))();
  }
  if (*(int **)(this + 0xdc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xdc) + 4))();
  }
  if (*(int **)(this + 0xe0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xe0) + 4))();
  }
  local_124 = 0;
  pCVar7 = this;
  do {
    if (*(int **)(pCVar7 + 200) != (int *)0x0) {
      (**(code **)(**(int **)(pCVar7 + 200) + 4))();
    }
    piVar1 = *(int **)(*(int *)(pCVar7 + 0xb4) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    piVar1 = *(int **)(pCVar7 + 0xb4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    pCVar7 = pCVar7 + 4;
    local_124 = local_124 + 1;
  } while (local_124 != 5);
  clearButtons();
  *(undefined4 *)(this + 0x150) = *(undefined4 *)(this + 0x148);
  while (piVar1 = *(int **)(this + 0x150), piVar1 != (int *)0x0) {
    piVar6 = (int *)*piVar1;
    *(int *)(this + 0x150) = piVar1[1];
    if (piVar6 == (int *)0x0) break;
    (**(code **)(*piVar6 + 4))();
  }
  *(undefined4 *)(this + 0x164) = *(undefined4 *)(this + 0x15c);
  while (piVar1 = *(int **)(this + 0x164), piVar1 != (int *)0x0) {
    piVar6 = (int *)*piVar1;
    *(int *)(this + 0x164) = piVar1[1];
    if (piVar6 == (int *)0x0) break;
    (**(code **)(*piVar6 + 4))();
  }
  puVar4 = *(undefined4 **)(iVar5 + DAT_000d4c50);
  pFVar8 = (FontManager *)*puVar4;
  iVar2 = SmDev();
  FontManager::delFont(pFVar8,*(int *)(DAT_000d4c54 + iVar2 * 4 + 0xd4b7a));
  pFVar8 = (FontManager *)*puVar4;
  iVar2 = SmDev();
  FontManager::delFont(pFVar8,*(int *)(DAT_000d4c58 + iVar2 * 4 + 0xd4ba8));
  if (*(int *)(this + 0x168) != 0) {
    while (pvVar3 = *(void **)(this + 0x15c), pvVar3 != (void *)0x0) {
      uVar9 = *(undefined4 *)((int)pvVar3 + 4);
      operator_delete(pvVar3);
      *(undefined4 *)(this + 0x15c) = uVar9;
    }
    *(undefined4 *)(this + 0x168) = 0;
    *(CharacterDetails **)(this + 0x160) = this + 0x158;
    *(undefined4 *)(this + 0x164) = 0;
  }
  if (*(int *)(this + 0x154) != 0) {
    while (pvVar3 = *(void **)(this + 0x148), pvVar3 != (void *)0x0) {
      uVar9 = *(undefined4 *)((int)pvVar3 + 4);
      operator_delete(pvVar3);
      *(undefined4 *)(this + 0x148) = uVar9;
    }
    *(undefined4 *)(this + 0x154) = 0;
    *(CharacterDetails **)(this + 0x14c) = this + 0x144;
    *(undefined4 *)(this + 0x150) = 0;
  }
  if (*(void **)(this + 0x130) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x130));
  }
  ScreenElement::~ScreenElement((ScreenElement *)this);
  if (local_1c == **(int **)(iVar5 + DAT_000d4c5c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


