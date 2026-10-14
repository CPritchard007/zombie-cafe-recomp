/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d7e5c GetZombilityDialog::~GetZombilityDialog */

/* GetZombilityDialog::~GetZombilityDialog() */

void __thiscall GetZombilityDialog::~GetZombilityDialog(GetZombilityDialog *this)

{
  int iVar1;
  FontManager *this_00;
  int *piVar2;
  int *piVar3;
  char acStack_11c [256];
  int local_1c;
  
  iVar1 = DAT_001d7f94 + 0x1d7e68;
  piVar3 = *(int **)(iVar1 + DAT_001d7f98);
  local_1c = *piVar3;
  *(int *)this = *(int *)(iVar1 + DAT_001d7f9c) + 8;
  if (*(int **)(*(int *)(this + 0x6c) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x6c) + 100) + 4))();
  }
  if (*(int **)(this + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x6c) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x7c) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x7c) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x7c) + 4))();
  }
  if (*(int **)(this + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x70) + 4))();
  }
  if (*(int *)(this + 0x74) != 0) {
    L_PrintLog((char *)(DAT_001d7fa0 + 0x1d7ec4),(char *)(DAT_001d7fa4 + 0x1d7ec6));
    piVar2 = *(int **)(iVar1 + DAT_001d7fa8);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x74));
    if (*(int **)(this + 0x74) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x74) + 4))();
    }
    *(undefined4 *)(this + 0x74) = 0;
    sprintf(acStack_11c,(char *)(DAT_001d7fac + 0x1d7ef0),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_001d7fb0 + 0x1d7efc),acStack_11c);
  }
  if (*(int *)(this + 0x78) != 0) {
    L_PrintLog((char *)(DAT_001d7fb4 + 0x1d7f0c),(char *)(DAT_001d7fb8 + 0x1d7f0e));
    piVar2 = *(int **)(iVar1 + DAT_001d7fa8);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x78));
    if (*(int **)(this + 0x78) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x78) + 4))();
    }
    *(undefined4 *)(this + 0x78) = 0;
    sprintf(acStack_11c,(char *)(DAT_001d7fbc + 0x1d7f38),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_001d7fc0 + 0x1d7f44),acStack_11c);
  }
  if (*(int **)(this + 0x80) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x80) + 4))();
  }
  this_00 = (FontManager *)**(undefined4 **)(iVar1 + DAT_001d7fc4);
  iVar1 = SmDev();
  FontManager::delFont(this_00,*(int *)((int)&DAT_001d7fb8 + DAT_001d7fc8 + iVar1 * 4 + 2));
  ScreenElement::~ScreenElement((ScreenElement *)this);
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


