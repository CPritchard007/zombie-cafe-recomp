/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e0944 ColosseumRewardScreen::~ColosseumRewardScreen */

/* ColosseumRewardScreen::~ColosseumRewardScreen() */

void __thiscall ColosseumRewardScreen::~ColosseumRewardScreen(ColosseumRewardScreen *this)

{
  int *piVar1;
  int *piVar2;
  FontManager *this_00;
  int iVar3;
  int *piVar4;
  char acStack_11c [256];
  int local_1c;
  
  iVar3 = DAT_000e0abc + 0xe0950;
  piVar2 = *(int **)(iVar3 + DAT_000e0ac0);
  local_1c = *piVar2;
  *(int *)this = *(int *)(iVar3 + DAT_000e0ac4) + 8;
  if (*(int **)(*(int *)(this + 0xa8) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xa8) + 0x60) + 4))();
  }
  if (*(int **)(this + 0xa8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa8) + 4))();
  }
  if (*(int **)(this + 0x84) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x84) + 4))();
  }
  if (*(int **)(this + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x7c) + 4))();
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
  if (*(int *)(this + 0x8c) != 0) {
    L_PrintLog((char *)(DAT_000e0ac8 + 0xe09e4),(char *)(DAT_000e0acc + 0xe09e6));
    piVar4 = *(int **)(iVar3 + DAT_000e0ad0);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar4,*(TrueTypeTextElement **)(this + 0x8c));
    piVar1 = *(int **)(this + 0x8c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(this + 0x8c) = 0;
    sprintf(acStack_11c,(char *)(DAT_000e0ad4 + 0xe0a18),*(int *)(*piVar4 + 4) + 1);
    L_PrintLog((char *)(DAT_000e0ad8 + 0xe0a24),acStack_11c);
  }
  if (*(int *)(this + 0x90) != 0) {
    L_PrintLog((char *)(DAT_000e0adc + 0xe0a38),(char *)(DAT_000e0ae0 + 0xe0a3a));
    piVar4 = *(int **)(iVar3 + DAT_000e0ad0);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar4,*(TrueTypeTextElement **)(this + 0x90));
    piVar1 = *(int **)(this + 0x90);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(this + 0x90) = 0;
    sprintf(acStack_11c,(char *)(DAT_000e0ae4 + 0xe0a6c),*(int *)(*piVar4 + 4) + 1);
    L_PrintLog((char *)(DAT_000e0ae8 + 0xe0a78),acStack_11c);
  }
  this_00 = (FontManager *)**(undefined4 **)(iVar3 + DAT_000e0aec);
  iVar3 = SmDev();
  FontManager::delFont(this_00,*(int *)((int)&DAT_000e0acc + DAT_000e0af0 + iVar3 * 4));
  ScreenElement::~ScreenElement((ScreenElement *)this);
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


