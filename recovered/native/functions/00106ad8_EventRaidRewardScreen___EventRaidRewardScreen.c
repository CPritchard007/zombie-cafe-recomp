/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00106ad8 EventRaidRewardScreen::~EventRaidRewardScreen */

/* EventRaidRewardScreen::~EventRaidRewardScreen() */

void __thiscall EventRaidRewardScreen::~EventRaidRewardScreen(EventRaidRewardScreen *this)

{
  int *piVar1;
  int *piVar2;
  FontManager *this_00;
  int iVar3;
  int *piVar4;
  char acStack_11c [256];
  int local_1c;
  
  iVar3 = DAT_00106c98 + 0x106ae4;
  piVar2 = *(int **)(iVar3 + DAT_00106c9c);
  local_1c = *piVar2;
  *(int *)this = *(int *)(iVar3 + DAT_00106ca0) + 8;
  if (*(int **)(*(int *)(this + 0xb8) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xb8) + 0x60) + 4))();
  }
  if (*(int **)(this + 0xb8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xb8) + 4))();
  }
  if (*(int **)(this + 0x90) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x90) + 4))();
  }
  if (*(int **)(this + 0x88) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x88) + 4))();
  }
  if (*(int **)(this + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x8c) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x7c) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x7c) + 100) + 4))();
  }
  if (*(int **)(this + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x7c) + 4))();
  }
  if (*(int **)(this + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x78) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xa8) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xa8) + 100) + 4))();
  }
  if (*(int **)(this + 0xa8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa8) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xac) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xac) + 100) + 4))();
  }
  if (*(int **)(this + 0xac) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xac) + 4))();
  }
  if (*(int *)(this + 0x94) != 0) {
    L_PrintLog((char *)(DAT_00106ca4 + 0x106bc2),(char *)(DAT_00106ca8 + 0x106bc4));
    piVar4 = *(int **)(iVar3 + DAT_00106cac);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar4,*(TrueTypeTextElement **)(this + 0x94));
    piVar1 = *(int **)(this + 0x94);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(this + 0x94) = 0;
    sprintf(acStack_11c,(char *)(DAT_00106cb0 + 0x106bf6),*(int *)(*piVar4 + 4) + 1);
    L_PrintLog((char *)(DAT_00106cb4 + 0x106c02),acStack_11c);
  }
  if (*(int *)(this + 0x98) != 0) {
    L_PrintLog((char *)(DAT_00106cb8 + 0x106c16),(char *)(DAT_00106cbc + 0x106c18));
    piVar4 = *(int **)(iVar3 + DAT_00106cac);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar4,*(TrueTypeTextElement **)(this + 0x98));
    piVar1 = *(int **)(this + 0x98);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(this + 0x98) = 0;
    sprintf(acStack_11c,(char *)(DAT_00106cc0 + 0x106c4a),*(int *)(*piVar4 + 4) + 1);
    L_PrintLog((char *)(DAT_00106cc4 + 0x106c56),acStack_11c);
  }
  this_00 = (FontManager *)**(undefined4 **)(iVar3 + DAT_00106cc8);
  iVar3 = SmDev();
  FontManager::delFont(this_00,*(int *)(&UNK_00106c8a + DAT_00106ccc + iVar3 * 4));
  ScreenElement::~ScreenElement((ScreenElement *)this);
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


