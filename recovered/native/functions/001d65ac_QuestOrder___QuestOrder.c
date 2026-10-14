/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d65ac QuestOrder::~QuestOrder */

/* QuestOrder::~QuestOrder() */

void __thiscall QuestOrder::~QuestOrder(QuestOrder *this)

{
  int *piVar1;
  int *piVar2;
  char acStack_114 [256];
  int local_14;
  
  piVar2 = *(int **)(DAT_001d66b4 + 0x1d65b8);
  local_14 = *piVar2;
  *(int *)this = *(int *)(DAT_001d66b8 + 0x1d65c2) + 8;
  if (*(int *)(this + 0x90) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x90) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x90) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x90) + 4))();
    }
    if (*(int **)(this + 0x7c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x7c) + 4))();
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
  if (*(int *)(this + 0x78) != 0) {
    L_PrintLog((char *)(DAT_001d66bc + 0x1d663a),(char *)(DAT_001d66c0 + 0x1d663c));
    piVar1 = *(int **)(DAT_001d66c4 + 0x1d6646);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x78));
    if (*(int **)(this + 0x78) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x78) + 4))();
    }
    *(undefined4 *)(this + 0x78) = 0;
    sprintf(acStack_114,(char *)(DAT_001d66c8 + 0x1d6668),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001d66cc + 0x1d6674),acStack_114);
  }
  if (*(int **)(this + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x6c) + 4))();
  }
  if (*(int **)(this + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x70) + 4))();
  }
  QuestItem::~QuestItem((QuestItem *)this);
  if (local_14 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


