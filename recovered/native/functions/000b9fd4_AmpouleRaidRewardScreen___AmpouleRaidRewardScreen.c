/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b9fd4 AmpouleRaidRewardScreen::~AmpouleRaidRewardScreen */

/* AmpouleRaidRewardScreen::~AmpouleRaidRewardScreen() */

void __thiscall AmpouleRaidRewardScreen::~AmpouleRaidRewardScreen(AmpouleRaidRewardScreen *this)

{
  int *piVar1;
  int *piVar2;
  FontManager *this_00;
  int iVar3;
  int *piVar4;
  char acStack_11c [256];
  int local_1c;
  
  iVar3 = DAT_000ba150 + 0xb9fe0;
  piVar2 = *(int **)(iVar3 + DAT_000ba154);
  local_1c = *piVar2;
  *(int *)this = *(int *)(iVar3 + DAT_000ba158) + 8;
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
  if (*(int *)(this + 0x94) != 0) {
    L_PrintLog((char *)(DAT_000ba15c + 0xba07a),(char *)(DAT_000ba160 + 0xba07c));
    piVar4 = *(int **)(iVar3 + DAT_000ba164);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar4,*(TrueTypeTextElement **)(this + 0x94));
    piVar1 = *(int **)(this + 0x94);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(this + 0x94) = 0;
    sprintf(acStack_11c,(char *)(DAT_000ba168 + 0xba0ae),*(int *)(*piVar4 + 4) + 1);
    L_PrintLog((char *)(DAT_000ba16c + 0xba0ba),acStack_11c);
  }
  if (*(int *)(this + 0x98) != 0) {
    L_PrintLog((char *)(DAT_000ba170 + 0xba0ce),(char *)(DAT_000ba174 + 0xba0d0));
    piVar4 = *(int **)(iVar3 + DAT_000ba164);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar4,*(TrueTypeTextElement **)(this + 0x98));
    piVar1 = *(int **)(this + 0x98);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(this + 0x98) = 0;
    sprintf(acStack_11c,(char *)(DAT_000ba178 + 0xba102),*(int *)(*piVar4 + 4) + 1);
    L_PrintLog((char *)(DAT_000ba17c + 0xba10e),acStack_11c);
  }
  this_00 = (FontManager *)**(undefined4 **)(iVar3 + DAT_000ba180);
  iVar3 = SmDev();
  FontManager::delFont(this_00,*(int *)((int)&DAT_000ba150 + DAT_000ba184 + iVar3 * 4 + 2));
  ScreenElement::~ScreenElement((ScreenElement *)this);
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


