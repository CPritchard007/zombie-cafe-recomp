/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018a890 GameStateRoulette::unSelectCharacter */

/* GameStateRoulette::unSelectCharacter() */

void __thiscall GameStateRoulette::unSelectCharacter(GameStateRoulette *this)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char acStack_11c [256];
  int local_1c;
  
  iVar1 = DAT_0018aa84 + 0x18a89c;
  piVar3 = *(int **)(iVar1 + DAT_0018aa88);
  local_1c = *piVar3;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  if (*(int *)(this + 0x30) != 0) {
    L_PrintLog((char *)(DAT_0018aa8c + 0x18a8ba),(char *)(DAT_0018aa90 + 0x18a8bc));
    piVar2 = *(int **)(iVar1 + DAT_0018aa94);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x30));
    (**(code **)(**(int **)(this + 0x14) + 0x34))
              (*(int **)(this + 0x14),*(undefined4 *)(this + 0x30));
    if (*(int **)(this + 0x30) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x30) + 4))();
    }
    *(undefined4 *)(this + 0x30) = 0;
    sprintf(acStack_11c,(char *)(DAT_0018aa98 + 0x18a8f0),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_0018aa9c + 0x18a8fc),acStack_11c);
  }
  if (*(int *)(this + 0x34) != 0) {
    L_PrintLog((char *)(DAT_0018aaa0 + 0x18a90c),(char *)(DAT_0018aaa4 + 0x18a90e));
    piVar2 = *(int **)(iVar1 + DAT_0018aa94);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x34));
    (**(code **)(**(int **)(this + 0x14) + 0x34))
              (*(int **)(this + 0x14),*(undefined4 *)(this + 0x34));
    if (*(int **)(this + 0x34) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x34) + 4))();
    }
    *(undefined4 *)(this + 0x34) = 0;
    sprintf(acStack_11c,(char *)(DAT_0018aaa8 + 0x18a942),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_0018aaac + 0x18a94e),acStack_11c);
  }
  if (*(int *)(this + 0x38) != 0) {
    L_PrintLog((char *)(DAT_0018aab0 + 0x18a95e),(char *)(DAT_0018aab4 + 0x18a960));
    piVar2 = *(int **)(iVar1 + DAT_0018aa94);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x38));
    (**(code **)(**(int **)(this + 0x14) + 0x34))
              (*(int **)(this + 0x14),*(undefined4 *)(this + 0x38));
    if (*(int **)(this + 0x38) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x38) + 4))();
    }
    *(undefined4 *)(this + 0x38) = 0;
    sprintf(acStack_11c,(char *)(DAT_0018aab8 + 0x18a994),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_0018aabc + 0x18a9a0),acStack_11c);
  }
  if (*(int *)(this + 0x3c) != 0) {
    L_PrintLog((char *)(DAT_0018aac0 + 0x18a9b0),(char *)(DAT_0018aac4 + 0x18a9b2));
    piVar2 = *(int **)(iVar1 + DAT_0018aa94);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x3c));
    (**(code **)(**(int **)(this + 0x14) + 0x34))
              (*(int **)(this + 0x14),*(undefined4 *)(this + 0x3c));
    if (*(int **)(this + 0x3c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x3c) + 4))();
    }
    *(undefined4 *)(this + 0x3c) = 0;
    sprintf(acStack_11c,(char *)(DAT_0018aac8 + 0x18a9e6),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_0018aacc + 0x18a9f2),acStack_11c);
  }
  if (*(int *)(this + 0x74) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x74) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x74) + 100) + 4))();
    }
    if (*(int **)(this + 0x74) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x74) + 4))();
    }
    *(undefined4 *)(this + 0x74) = 0;
  }
  if (*(int *)(this + 0x40) != 0) {
    L_PrintLog((char *)(DAT_0018aad0 + 0x18aa2e),(char *)(DAT_0018aad4 + 0x18aa30));
    piVar2 = *(int **)(iVar1 + DAT_0018aa94);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x40));
    (**(code **)(**(int **)(this + 0x14) + 0x34))
              (*(int **)(this + 0x14),*(undefined4 *)(this + 0x40));
    if (*(int **)(this + 0x40) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x40) + 4))();
    }
    *(undefined4 *)(this + 0x40) = 0;
    sprintf(acStack_11c,(char *)(DAT_0018aad8 + 0x18aa64),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_0018aadc + 0x18aa70),acStack_11c);
  }
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


