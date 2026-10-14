/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000fd994 FridgeDialog::~FridgeDialog */

/* FridgeDialog::~FridgeDialog() */

void __thiscall FridgeDialog::~FridgeDialog(FridgeDialog *this)

{
  int *piVar1;
  int iVar2;
  FontManager *this_00;
  int *piVar3;
  int *piVar4;
  char acStack_11c [256];
  int local_1c;
  
  piVar4 = *(int **)(DAT_000fdbd8 + 0xfd9a0);
  local_1c = *piVar4;
  *(int *)this = *(int *)(DAT_000fdbdc + 0xfd9aa) + 8;
  if (*(int **)(this + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x7c) + 4))();
  }
  if (*(int **)(this + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x74) + 4))();
  }
  if (*(int **)(this + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x78) + 4))();
  }
  if (*(int **)(this + 0x9c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x9c) + 4))();
  }
  if (*(int **)(this + 0xa0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa0) + 4))();
  }
  if (*(int **)(this + 0xa8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa8) + 4))();
    *(undefined4 *)(this + 0xa8) = 0;
  }
  if (*(int **)(this + 0xac) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xac) + 4))();
    *(undefined4 *)(this + 0xac) = 0;
  }
  if (*(int **)(this + 0xbc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xbc) + 4))();
    *(undefined4 *)(this + 0xbc) = 0;
  }
  if (*(int *)(this + 0xa4) != 0) {
    L_PrintLog((char *)(DAT_000fdbe0 + 0xfda4c),(char *)(DAT_000fdbe4 + 0xfda4e));
    piVar3 = *(int **)(DAT_000fdbe8 + 0xfda5a);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar3,*(TrueTypeTextElement **)(this + 0xa4));
    piVar1 = *(int **)(this + 0xa4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(this + 0xa4) = 0;
    sprintf(acStack_11c,(char *)(DAT_000fdbec + 0xfda82),*(int *)(*piVar3 + 4) + 1);
    L_PrintLog((char *)(DAT_000fdbf0 + 0xfda8e),acStack_11c);
  }
  if (*(int **)(this + 0xec) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xec) + 4))();
  }
  if (*(int **)(this + 0xb0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xb0) + 4))();
  }
  if (*(int **)(this + 0xf0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xf0) + 4))();
  }
  if (*(int **)(this + 0xb4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xb4) + 4))();
  }
  if (*(int **)(this + 0xf4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xf4) + 4))();
  }
  if (*(int **)(this + 0xb8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xb8) + 4))();
  }
  if (*(int **)(this + 0xfc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xfc) + 4))();
    *(undefined4 *)(this + 0xfc) = 0;
  }
  if (*(int **)(this + 0xc4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xc4) + 4))();
    *(undefined4 *)(this + 0xc4) = 0;
  }
  if (*(int **)(this + 0xf8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xf8) + 4))();
    *(undefined4 *)(this + 0xf8) = 0;
  }
  if (*(int **)(this + 0xc0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xc0) + 4))();
    *(undefined4 *)(this + 0xc0) = 0;
  }
  if (*(int **)(this + 0x94) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x94) + 4))();
  }
  if (*(int **)(this + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x98) + 4))();
  }
  if (*(int **)(this + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x70) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x6c) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x6c) + 100) + 4))();
  }
  if (*(int **)(this + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x6c) + 4))();
  }
  this_00 = (FontManager *)**(undefined4 **)(DAT_000fdbf4 + 0xfdb9c);
  iVar2 = SmDev();
  FontManager::delFont(this_00,*(int *)((int)&DAT_000fdbe0 + DAT_000fdbf8 + iVar2 * 4 + 2));
  ScreenElement::~ScreenElement((ScreenElement *)this);
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


