/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d64e8 QuestRecordItem::~QuestRecordItem */

/* QuestRecordItem::~QuestRecordItem() */

void __thiscall QuestRecordItem::~QuestRecordItem(QuestRecordItem *this)

{
  int *piVar1;
  int *piVar2;
  char acStack_114 [256];
  int local_14;
  
  piVar2 = *(int **)(DAT_001d657c + 0x1d64f4);
  local_14 = *piVar2;
  *(int *)this = *(int *)(DAT_001d6580 + 0x1d64fe) + 8;
  if (*(int **)(this + 100) != (int *)0x0) {
    (**(code **)(**(int **)(this + 100) + 4))();
  }
  if (*(int *)(this + 0x68) != 0) {
    L_PrintLog((char *)(DAT_001d6584 + 0x1d651c),(char *)(DAT_001d6588 + 0x1d651e));
    piVar1 = *(int **)(DAT_001d658c + 0x1d6528);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x68));
    if (*(int **)(this + 0x68) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x68) + 4))();
    }
    *(undefined4 *)(this + 0x68) = 0;
    sprintf(acStack_114,(char *)(DAT_001d6590 + 0x1d654a),*(int *)(*piVar1 + 4) + 1);
    L_PrintLog((char *)(DAT_001d6594 + 0x1d6556),acStack_114);
  }
  QuestItem::~QuestItem((QuestItem *)this);
  if (local_14 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


