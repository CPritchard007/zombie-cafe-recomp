/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0020a29c PUResultDialog::~PUResultDialog */

/* PUResultDialog::~PUResultDialog() */

void __thiscall PUResultDialog::~PUResultDialog(PUResultDialog *this)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  FontManager *pFVar5;
  int *piVar6;
  char acStack_11c [256];
  int local_1c;
  
  iVar4 = DAT_0020a5e0 + 0x20a2a8;
  piVar2 = *(int **)(iVar4 + DAT_0020a5e4);
  local_1c = *piVar2;
  *(int *)this = *(int *)(iVar4 + DAT_0020a5e8) + 8;
  if (*(int **)(*(int *)(this + 0x94) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x94) + 100) + 4))();
  }
  if (*(int **)(this + 0x94) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x94) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x9c) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x9c) + 100) + 4))();
  }
  if (*(int **)(this + 0x9c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x9c) + 4))();
  }
  if (*(int **)(this + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x98) + 4))();
  }
  if (*(int **)(this + 0xdc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xdc) + 4))();
  }
  if (*(int **)(this + 0xc4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xc4) + 4))();
  }
  if (*(int **)(this + 200) != (int *)0x0) {
    (**(code **)(**(int **)(this + 200) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xb4) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xb4) + 0x60) + 4))();
  }
  if (*(int **)(this + 0xb4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xb4) + 4))();
  }
  if (*(int **)(this + 0xb8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xb8) + 4))();
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
  if (*(int *)(this + 0xb0) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0xb0) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0xb0) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xb0) + 4))();
    }
    *(undefined4 *)(this + 0xb0) = 0;
  }
  if (*(int *)(this + 0xa0) != 0) {
    L_PrintLog((char *)(DAT_0020a5ec + 0x20a40a),(char *)(DAT_0020a5f0 + 0x20a40c));
    piVar6 = *(int **)(iVar4 + DAT_0020a5f4);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar6,*(TrueTypeTextElement **)(this + 0xa0));
    piVar1 = *(int **)(this + 0xa0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(this + 0xa0) = 0;
    sprintf(acStack_11c,(char *)(DAT_0020a5f8 + 0x20a43e),*(int *)(*piVar6 + 4) + 1);
    L_PrintLog((char *)(DAT_0020a5fc + 0x20a44a),acStack_11c);
  }
  if (*(int *)(this + 0xbc) != 0) {
    L_PrintLog((char *)(DAT_0020a600 + 0x20a45e),(char *)(DAT_0020a604 + 0x20a460));
    piVar6 = *(int **)(iVar4 + DAT_0020a5f4);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar6,*(TrueTypeTextElement **)(this + 0xbc));
    piVar1 = *(int **)(this + 0xbc);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(this + 0xbc) = 0;
    sprintf(acStack_11c,(char *)(DAT_0020a608 + 0x20a492),*(int *)(*piVar6 + 4) + 1);
    L_PrintLog((char *)(DAT_0020a60c + 0x20a49e),acStack_11c);
  }
  if (*(int *)(this + 0xc0) != 0) {
    L_PrintLog((char *)(DAT_0020a610 + 0x20a4b2),(char *)(DAT_0020a614 + 0x20a4b4));
    piVar6 = *(int **)(iVar4 + DAT_0020a5f4);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar6,*(TrueTypeTextElement **)(this + 0xc0));
    piVar1 = *(int **)(this + 0xc0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(this + 0xc0) = 0;
    sprintf(acStack_11c,(char *)(DAT_0020a618 + 0x20a4e6),*(int *)(*piVar6 + 4) + 1);
    L_PrintLog((char *)(DAT_0020a61c + 0x20a4f2),acStack_11c);
  }
  if (*(int *)(this + 0xcc) != 0) {
    L_PrintLog((char *)(DAT_0020a620 + 0x20a506),(char *)(DAT_0020a624 + 0x20a508));
    piVar6 = *(int **)(iVar4 + DAT_0020a5f4);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar6,*(TrueTypeTextElement **)(this + 0xcc));
    piVar1 = *(int **)(this + 0xcc);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(this + 0xcc) = 0;
    sprintf(acStack_11c,(char *)(DAT_0020a628 + 0x20a53a),*(int *)(*piVar6 + 4) + 1);
    L_PrintLog((char *)(DAT_0020a62c + 0x20a546),acStack_11c);
  }
  if (*(int *)(this + 0xd0) != 0) {
    L_PrintLog((char *)(DAT_0020a630 + 0x20a55a),(char *)(DAT_0020a634 + 0x20a55c));
    piVar6 = *(int **)(iVar4 + DAT_0020a5f4);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar6,*(TrueTypeTextElement **)(this + 0xd0));
    piVar1 = *(int **)(this + 0xd0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(this + 0xd0) = 0;
    sprintf(acStack_11c,(char *)(DAT_0020a638 + 0x20a58e),*(int *)(*piVar6 + 4) + 1);
    L_PrintLog((char *)(DAT_0020a63c + 0x20a59a),acStack_11c);
  }
  puVar3 = *(undefined4 **)(iVar4 + DAT_0020a640);
  pFVar5 = (FontManager *)*puVar3;
  iVar4 = SmDev();
  FontManager::delFont(pFVar5,*(int *)(DAT_0020a644 + iVar4 * 4 + 0x20a5c2));
  pFVar5 = (FontManager *)*puVar3;
  iVar4 = SmDev();
  FontManager::delFont(pFVar5,*(int *)((int)&DAT_0020a5f0 + DAT_0020a648 + iVar4 * 4));
  ScreenElement::~ScreenElement((ScreenElement *)this);
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


