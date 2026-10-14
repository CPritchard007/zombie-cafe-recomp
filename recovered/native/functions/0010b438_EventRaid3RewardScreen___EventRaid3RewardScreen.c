/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010b438 EventRaid3RewardScreen::~EventRaid3RewardScreen */

/* EventRaid3RewardScreen::~EventRaid3RewardScreen() */

void __thiscall EventRaid3RewardScreen::~EventRaid3RewardScreen(EventRaid3RewardScreen *this)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char acStack_11c [256];
  int local_1c;
  
  iVar2 = DAT_0010b6d4 + 0x10b444;
  piVar1 = *(int **)(iVar2 + DAT_0010b6d8);
  local_1c = *piVar1;
  *(int *)this = *(int *)(iVar2 + DAT_0010b6dc) + 8;
  if (*(int **)(*(int *)(this + 0xa8) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xa8) + 0x60) + 4))();
  }
  if (*(int **)(this + 0xa8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa8) + 4))();
  }
  if (*(int **)(this + 0x80) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x80) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x6c) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x6c) + 100) + 4))();
  }
  if (*(int **)(this + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x6c) + 4))();
  }
  if (*(int **)(this + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x70) + 4))();
  }
  if (*(int *)(this + 0x84) != 0) {
    L_PrintLog((char *)(DAT_0010b6e0 + 0x10b4bc),(char *)(DAT_0010b6e4 + 0x10b4be));
    piVar3 = *(int **)(iVar2 + DAT_0010b6e8);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar3,*(TrueTypeTextElement **)(this + 0x84));
    if (*(int **)(this + 0x84) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x84) + 4))();
    }
    *(undefined4 *)(this + 0x84) = 0;
    sprintf(acStack_11c,(char *)(DAT_0010b6ec + 0x10b4f0),*(int *)(*piVar3 + 4) + 1);
    L_PrintLog((char *)(DAT_0010b6f0 + 0x10b4fc),acStack_11c);
  }
  if (*(int *)(this + 0x88) != 0) {
    L_PrintLog((char *)(DAT_0010b6f4 + 0x10b510),(char *)(DAT_0010b6f8 + 0x10b512));
    piVar4 = *(int **)(iVar2 + DAT_0010b6e8);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar4,*(TrueTypeTextElement **)(this + 0x88));
    piVar3 = *(int **)(this + 0x88);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    *(undefined4 *)(this + 0x88) = 0;
    sprintf(acStack_11c,(char *)(DAT_0010b6fc + 0x10b544),*(int *)(*piVar4 + 4) + 1);
    L_PrintLog((char *)(DAT_0010b700 + 0x10b550),acStack_11c);
  }
  if (*(int *)(this + 0x8c) != 0) {
    L_PrintLog((char *)(DAT_0010b704 + 0x10b564),(char *)(DAT_0010b708 + 0x10b566));
    piVar4 = *(int **)(iVar2 + DAT_0010b6e8);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar4,*(TrueTypeTextElement **)(this + 0x8c));
    piVar3 = *(int **)(this + 0x8c);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    *(undefined4 *)(this + 0x8c) = 0;
    sprintf(acStack_11c,(char *)(DAT_0010b70c + 0x10b598),*(int *)(*piVar4 + 4) + 1);
    L_PrintLog((char *)(DAT_0010b710 + 0x10b5a4),acStack_11c);
  }
  if (*(int *)(this + 0x90) != 0) {
    L_PrintLog((char *)(DAT_0010b714 + 0x10b5b8),(char *)(DAT_0010b718 + 0x10b5ba));
    piVar4 = *(int **)(iVar2 + DAT_0010b6e8);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar4,*(TrueTypeTextElement **)(this + 0x90));
    piVar3 = *(int **)(this + 0x90);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    *(undefined4 *)(this + 0x90) = 0;
    sprintf(acStack_11c,(char *)(DAT_0010b71c + 0x10b5ec),*(int *)(*piVar4 + 4) + 1);
    L_PrintLog((char *)(DAT_0010b720 + 0x10b5f8),acStack_11c);
  }
  if (*(int *)(this + 0x94) != 0) {
    L_PrintLog((char *)(DAT_0010b724 + 0x10b60c),(char *)(DAT_0010b728 + 0x10b60e));
    piVar4 = *(int **)(iVar2 + DAT_0010b6e8);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar4,*(TrueTypeTextElement **)(this + 0x94));
    piVar3 = *(int **)(this + 0x94);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    *(undefined4 *)(this + 0x94) = 0;
    sprintf(acStack_11c,(char *)(DAT_0010b72c + 0x10b640),*(int *)(*piVar4 + 4) + 1);
    L_PrintLog((char *)(DAT_0010b730 + 0x10b64c),acStack_11c);
  }
  if (*(int *)(this + 0x98) != 0) {
    L_PrintLog((char *)(DAT_0010b734 + 0x10b660),(char *)(DAT_0010b738 + 0x10b662));
    piVar4 = *(int **)(iVar2 + DAT_0010b6e8);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar4,*(TrueTypeTextElement **)(this + 0x98));
    piVar3 = *(int **)(this + 0x98);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    *(undefined4 *)(this + 0x98) = 0;
    sprintf(acStack_11c,(char *)(DAT_0010b73c + 0x10b694),*(int *)(*piVar4 + 4) + 1);
    L_PrintLog((char *)(DAT_0010b740 + 0x10b6a0),acStack_11c);
  }
  FontManager::delFont((FontManager *)**(undefined4 **)(iVar2 + DAT_0010b744),2);
  ScreenElement::~ScreenElement((ScreenElement *)this);
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


