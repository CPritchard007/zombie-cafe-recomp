/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f1810 PrizeMenuDialog::~PrizeMenuDialog */

/* PrizeMenuDialog::~PrizeMenuDialog() */

void __thiscall PrizeMenuDialog::~PrizeMenuDialog(PrizeMenuDialog *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  FontManager *this_00;
  int *piVar4;
  int *piVar5;
  char acStack_11c [256];
  int local_1c;
  
  piVar5 = *(int **)(DAT_001f19bc + 0x1f181c);
  local_1c = *piVar5;
  *(int *)this = *(int *)(DAT_001f19c0 + 0x1f1826) + 8;
  puts((char *)(DAT_001f19c4 + 0x1f1830));
  while( true ) {
    iVar2 = *(int *)(this + 0x94);
    if (*(int *)(iVar2 + 4) == -1) break;
    piVar1 = (int *)**(int **)(iVar2 + 8);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    Vector<PrizeMenuItem*>::removeElementAt(*(Vector<PrizeMenuItem*> **)(this + 0x94),0);
  }
  *(undefined4 *)(*(int *)(this + 0x8c) + 4) = 0xffffffff;
  pvVar3 = *(void **)(this + 0x8c);
  if (pvVar3 != (void *)0x0) {
    if (*(void **)((int)pvVar3 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((int)pvVar3 + 8));
    }
    operator_delete(pvVar3);
  }
  *(undefined4 *)(*(int *)(this + 0x90) + 4) = 0xffffffff;
  pvVar3 = *(void **)(this + 0x90);
  if (pvVar3 != (void *)0x0) {
    if (*(void **)((int)pvVar3 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((int)pvVar3 + 8));
    }
    operator_delete(pvVar3);
  }
  if (*(int **)(this + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x7c) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x68) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x68) + 100) + 4))();
  }
  if (*(int **)(this + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x68) + 4))();
  }
  if (*(int *)(this + 0xa4) != 0) {
    L_PrintLog((char *)(DAT_001f19c8 + 0x1f18d0),(char *)(DAT_001f19cc + 0x1f18d2));
    piVar4 = *(int **)(DAT_001f19d0 + 0x1f18de);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar4,*(TrueTypeTextElement **)(this + 0xa4));
    piVar1 = *(int **)(this + 0xa4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(this + 0xa4) = 0;
    sprintf(acStack_11c,(char *)(DAT_001f19d4 + 0x1f1906),*(int *)(*piVar4 + 4) + 1);
    L_PrintLog((char *)(DAT_001f19d8 + 0x1f1912),acStack_11c);
  }
  if (*(int **)(this + 0x80) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x80) + 4))();
  }
  if (*(int **)(this + 0x84) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x84) + 4))();
  }
  if (*(int **)(this + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x78) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x70) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x70) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x70) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x74) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x74) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x74) + 4))();
  }
  *(undefined4 *)(this + 0x98) = 0;
  this_00 = (FontManager *)**(undefined4 **)(DAT_001f19dc + 0x1f1980);
  iVar2 = SmDev();
  FontManager::delFont(this_00,*(int *)(DAT_001f19e0 + iVar2 * 4 + 0x1f19ee));
  ScreenElement::~ScreenElement((ScreenElement *)this);
  if (local_1c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


