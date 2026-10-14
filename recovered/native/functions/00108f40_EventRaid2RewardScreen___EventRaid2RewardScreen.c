/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00108f40 EventRaid2RewardScreen::~EventRaid2RewardScreen */

/* EventRaid2RewardScreen::~EventRaid2RewardScreen() */

void __thiscall EventRaid2RewardScreen::~EventRaid2RewardScreen(EventRaid2RewardScreen *this)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char acStack_11c [256];
  int local_1c;
  
  iVar2 = DAT_001091dc + 0x108f4c;
  piVar1 = *(int **)(iVar2 + DAT_001091e0);
  local_1c = *piVar1;
  *(int *)this = *(int *)(iVar2 + DAT_001091e4) + 8;
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
    L_PrintLog((char *)(DAT_001091e8 + 0x108fc4),(char *)(DAT_001091ec + 0x108fc6));
    piVar3 = *(int **)(iVar2 + DAT_001091f0);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar3,*(TrueTypeTextElement **)(this + 0x84));
    if (*(int **)(this + 0x84) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x84) + 4))();
    }
    *(undefined4 *)(this + 0x84) = 0;
    sprintf(acStack_11c,(char *)(DAT_001091f4 + 0x108ff8),*(int *)(*piVar3 + 4) + 1);
    L_PrintLog((char *)(DAT_001091f8 + 0x109004),acStack_11c);
  }
  if (*(int *)(this + 0x88) != 0) {
    L_PrintLog((char *)(DAT_001091fc + 0x109018),(char *)(DAT_00109200 + 0x10901a));
    piVar4 = *(int **)(iVar2 + DAT_001091f0);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar4,*(TrueTypeTextElement **)(this + 0x88));
    piVar3 = *(int **)(this + 0x88);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    *(undefined4 *)(this + 0x88) = 0;
    sprintf(acStack_11c,(char *)(DAT_00109204 + 0x10904c),*(int *)(*piVar4 + 4) + 1);
    L_PrintLog((char *)(DAT_00109208 + 0x109058),acStack_11c);
  }
  if (*(int *)(this + 0x8c) != 0) {
    L_PrintLog((char *)(DAT_0010920c + 0x10906c),(char *)(DAT_00109210 + 0x10906e));
    piVar4 = *(int **)(iVar2 + DAT_001091f0);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar4,*(TrueTypeTextElement **)(this + 0x8c));
    piVar3 = *(int **)(this + 0x8c);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    *(undefined4 *)(this + 0x8c) = 0;
    sprintf(acStack_11c,(char *)(DAT_00109214 + 0x1090a0),*(int *)(*piVar4 + 4) + 1);
    L_PrintLog((char *)(DAT_00109218 + 0x1090ac),acStack_11c);
  }
  if (*(int *)(this + 0x90) != 0) {
    L_PrintLog((char *)(DAT_0010921c + 0x1090c0),(char *)(DAT_00109220 + 0x1090c2));
    piVar4 = *(int **)(iVar2 + DAT_001091f0);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar4,*(TrueTypeTextElement **)(this + 0x90));
    piVar3 = *(int **)(this + 0x90);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    *(undefined4 *)(this + 0x90) = 0;
    sprintf(acStack_11c,(char *)(DAT_00109224 + 0x1090f4),*(int *)(*piVar4 + 4) + 1);
    L_PrintLog((char *)(DAT_00109228 + 0x109100),acStack_11c);
  }
  if (*(int *)(this + 0x94) != 0) {
    L_PrintLog((char *)(DAT_0010922c + 0x109114),(char *)(DAT_00109230 + 0x109116));
    piVar4 = *(int **)(iVar2 + DAT_001091f0);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar4,*(TrueTypeTextElement **)(this + 0x94));
    piVar3 = *(int **)(this + 0x94);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    *(undefined4 *)(this + 0x94) = 0;
    sprintf(acStack_11c,(char *)(DAT_00109234 + 0x109148),*(int *)(*piVar4 + 4) + 1);
    L_PrintLog((char *)(DAT_00109238 + 0x109154),acStack_11c);
  }
  if (*(int *)(this + 0x98) != 0) {
    L_PrintLog((char *)(DAT_0010923c + 0x109168),(char *)(DAT_00109240 + 0x10916a));
    piVar4 = *(int **)(iVar2 + DAT_001091f0);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar4,*(TrueTypeTextElement **)(this + 0x98));
    piVar3 = *(int **)(this + 0x98);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    *(undefined4 *)(this + 0x98) = 0;
    sprintf(acStack_11c,(char *)(DAT_00109244 + 0x10919c),*(int *)(*piVar4 + 4) + 1);
    L_PrintLog((char *)(DAT_00109248 + 0x1091a8),acStack_11c);
  }
  FontManager::delFont((FontManager *)**(undefined4 **)(iVar2 + DAT_0010924c),2);
  ScreenElement::~ScreenElement((ScreenElement *)this);
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


