/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f19f8 PrizeMenuOrder::~PrizeMenuOrder */

/* PrizeMenuOrder::~PrizeMenuOrder() */

void __thiscall PrizeMenuOrder::~PrizeMenuOrder(PrizeMenuOrder *this)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  FontManager *pFVar5;
  char acStack_11c [256];
  int local_1c;
  
  iVar4 = DAT_001f1c6c + 0x1f1a04;
  piVar2 = *(int **)(iVar4 + DAT_001f1c70);
  local_1c = *piVar2;
  *(int *)this = *(int *)(iVar4 + DAT_001f1c74) + 8;
  if (*(int *)(this + 0xbc) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0xbc) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0xbc) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xbc) + 4))();
    }
    if (*(int **)(this + 0x88) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x88) + 4))();
    }
  }
  if (*(int **)(*(int *)(this + 100) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 100) + 100) + 4))();
  }
  if (*(int **)(this + 100) != (int *)0x0) {
    (**(code **)(**(int **)(this + 100) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x68) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x68) + 100) + 4))();
  }
  if (*(int **)(this + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x68) + 4))();
  }
  if (*(int *)(this + 0x74) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x74) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x74) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x74) + 4))();
    }
    *(undefined4 *)(this + 0x74) = 0;
  }
  if (*(int *)(this + 0x6c) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x6c) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x6c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x6c) + 4))();
    }
    *(undefined4 *)(this + 0x6c) = 0;
  }
  if (*(int *)(this + 0x70) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x70) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x70) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x70) + 4))();
    }
    *(undefined4 *)(this + 0x70) = 0;
  }
  if (*(int *)(this + 0x78) != 0) {
    L_PrintLog((char *)(DAT_001f1c78 + 0x1f1af2),(char *)(DAT_001f1c7c + 0x1f1af4));
    piVar1 = *(int **)(iVar4 + DAT_001f1c80);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x78));
    if (*(int **)(this + 0x78) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x78) + 4))();
    }
    *(undefined4 *)(this + 0x78) = 0;
    sprintf(acStack_11c,(char *)(DAT_001f1c84 + 0x1f1b1e),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001f1c88 + 0x1f1b2a),acStack_11c);
  }
  if (*(int *)(this + 0x7c) != 0) {
    L_PrintLog((char *)(DAT_001f1c8c + 0x1f1b3a),(char *)(DAT_001f1c90 + 0x1f1b3c));
    piVar1 = *(int **)(iVar4 + DAT_001f1c80);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x7c));
    if (*(int **)(this + 0x7c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x7c) + 4))();
    }
    *(undefined4 *)(this + 0x7c) = 0;
    sprintf(acStack_11c,(char *)(DAT_001f1c94 + 0x1f1b66),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001f1c98 + 0x1f1b72),acStack_11c);
  }
  if (*(int *)(this + 0x80) != 0) {
    L_PrintLog((char *)(DAT_001f1c9c + 0x1f1b84),(char *)(DAT_001f1ca0 + 0x1f1b86));
    piVar1 = *(int **)(iVar4 + DAT_001f1c80);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x80));
    if (*(int **)(this + 0x80) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x80) + 4))();
    }
    *(undefined4 *)(this + 0x80) = 0;
    sprintf(acStack_11c,(char *)(DAT_001f1ca4 + 0x1f1bb4),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001f1ca8 + 0x1f1bc0),acStack_11c);
  }
  if (*(int *)(this + 0x84) != 0) {
    L_PrintLog((char *)(DAT_001f1cac + 0x1f1bd4),(char *)(DAT_001f1cb0 + 0x1f1bd6));
    piVar1 = *(int **)(iVar4 + DAT_001f1c80);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x84));
    if (*(int **)(this + 0x84) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x84) + 4))();
    }
    *(undefined4 *)(this + 0x84) = 0;
    sprintf(acStack_11c,(char *)(DAT_001f1cb4 + 0x1f1c08),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001f1cb8 + 0x1f1c14),acStack_11c);
  }
  puVar3 = *(undefined4 **)(iVar4 + DAT_001f1cbc);
  pFVar5 = (FontManager *)*puVar3;
  iVar4 = SmDev();
  FontManager::delFont(pFVar5,*(int *)((int)&DAT_001f1c88 + DAT_001f1cc0 + iVar4 * 4));
  pFVar5 = (FontManager *)*puVar3;
  iVar4 = SmDev();
  FontManager::delFont(pFVar5,*(int *)((int)&DAT_001f1cb4 + DAT_001f1cc4 + iVar4 * 4 + 2));
  PrizeMenuItem::~PrizeMenuItem((PrizeMenuItem *)this);
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


