/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00105168 EquipInfoDialog::~EquipInfoDialog */

/* EquipInfoDialog::~EquipInfoDialog() */

void __thiscall EquipInfoDialog::~EquipInfoDialog(EquipInfoDialog *this)

{
  QueueMessage *this_00;
  void *pvVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  char acStack_11c [256];
  int local_1c;
  
  iVar4 = DAT_00105334 + 0x105174;
  piVar2 = *(int **)(iVar4 + DAT_00105338);
  local_1c = *piVar2;
  *(int *)this = *(int *)(iVar4 + DAT_0010533c) + 8;
  while (this_00 = (QueueMessage *)
                   CapcomLinkedList<EquipInfoDialog::QueueMessage*>::remove
                             ((CapcomLinkedList<EquipInfoDialog::QueueMessage*> *)(this + 0x88),0),
        this_00 != (QueueMessage *)0x0) {
    QueueMessage::~QueueMessage(this_00);
    operator_delete(this_00);
  }
  if (*(int **)(*(int *)(this + 0x74) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x74) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x6c) + 4))();
  }
  if (*(int **)(this + 0x84) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x84) + 4))();
  }
  if (*(int **)(this + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x70) + 4))();
  }
  if (*(int **)(this + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x74) + 4))();
  }
  if (*(int *)(this + 0x7c) != 0) {
    L_PrintLog((char *)(DAT_00105340 + 0x1051f2),(char *)(DAT_00105344 + 0x1051f4));
    piVar3 = *(int **)(iVar4 + DAT_00105348);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar3,*(TrueTypeTextElement **)(this + 0x7c));
    if (*(int **)(this + 0x7c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x7c) + 4))();
    }
    *(undefined4 *)(this + 0x7c) = 0;
    sprintf(acStack_11c,(char *)(DAT_0010534c + 0x10521e),*(int *)(*piVar3 + 4) + 1);
    L_PrintLog((char *)(DAT_00105350 + 0x10522a),acStack_11c);
  }
  if (*(int *)(this + 0x78) != 0) {
    L_PrintLog((char *)(DAT_00105354 + 0x10523a),(char *)(DAT_00105358 + 0x10523c));
    piVar3 = *(int **)(iVar4 + DAT_00105348);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar3,*(TrueTypeTextElement **)(this + 0x78));
    if (*(int **)(this + 0x78) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x78) + 4))();
    }
    *(undefined4 *)(this + 0x78) = 0;
    sprintf(acStack_11c,(char *)(DAT_0010535c + 0x105266),*(int *)(*piVar3 + 4) + 1);
    L_PrintLog((char *)(DAT_00105360 + 0x105272),acStack_11c);
  }
  if (*(int *)(this + 0x80) != 0) {
    L_PrintLog((char *)(DAT_00105364 + 0x105284),(char *)(DAT_00105368 + 0x105286));
    piVar3 = *(int **)(iVar4 + DAT_00105348);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar3,*(TrueTypeTextElement **)(this + 0x80));
    if (*(int **)(this + 0x80) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x80) + 4))();
    }
    *(undefined4 *)(this + 0x80) = 0;
    sprintf(acStack_11c,(char *)(DAT_0010536c + 0x1052b4),*(int *)(*piVar3 + 4) + 1);
    L_PrintLog((char *)(DAT_00105370 + 0x1052c0),acStack_11c);
  }
  FontManager::delFont((FontManager *)**(undefined4 **)(iVar4 + DAT_00105374),1);
  if (*(int *)(this + 0x98) != 0) {
    while (pvVar1 = *(void **)(this + 0x8c), pvVar1 != (void *)0x0) {
      uVar5 = *(undefined4 *)((int)pvVar1 + 4);
      operator_delete(pvVar1);
      *(undefined4 *)(this + 0x8c) = uVar5;
    }
    *(undefined4 *)(this + 0x98) = 0;
    *(EquipInfoDialog **)(this + 0x90) = this + 0x88;
    *(undefined4 *)(this + 0x94) = 0;
  }
  ScreenElement::~ScreenElement((ScreenElement *)this);
  if (local_1c == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


