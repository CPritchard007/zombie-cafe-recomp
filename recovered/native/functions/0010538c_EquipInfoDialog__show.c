/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010538c EquipInfoDialog::show */

/* EquipInfoDialog::show() */

void __thiscall EquipInfoDialog::show(EquipInfoDialog *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  TrueTypeTextElement *pTVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  int *piVar9;
  char *__s;
  code *pcVar10;
  int *piVar11;
  int iVar12;
  String *local_164;
  String aSStack_14c [8];
  String aSStack_144 [8];
  String aSStack_13c [8];
  String aSStack_134 [8];
  String aSStack_12c [8];
  String aSStack_124 [8];
  char acStack_11c [256];
  int local_1c;
  
  iVar12 = DAT_00105700 + 0x105398;
  pcVar8 = (char *)(DAT_00105708 + 0x10539e);
  local_1c = **(int **)(iVar12 + DAT_00105704);
  L_PrintLog(pcVar8,(char *)(DAT_0010570c + 0x1053a6));
  uVar1 = __floatsisf(*(int *)(this + 0xc) >> 4);
  __mulsf3(uVar1,*(undefined4 *)(this + 0x60));
  uVar2 = __fixsfsi();
  __mulsf3(uVar1,*(undefined4 *)(this + 100));
  iVar3 = __fixsfsi();
  __s = *(char **)(iVar12 + DAT_00105710);
  memset(__s,0,0x100);
  sprintf(__s,(char *)(DAT_00105714 + 0x1053ea),uVar2,iVar3);
  L_PrintLog(pcVar8,__s);
  uVar1 = FontManager::addFont(**(int **)(iVar12 + DAT_00105718),true);
  local_164 = (String *)
              CapcomLinkedList<EquipInfoDialog::QueueMessage*>::get
                        ((CapcomLinkedList<EquipInfoDialog::QueueMessage*> *)(this + 0x88),0);
  String::String(aSStack_14c,(char *)(DAT_0010571c + 0x10541e));
  iVar4 = SmDev();
  MultiByteString::insertStringNextLine
            (aSStack_14c,local_164,*(int *)(DAT_00105720 + iVar4 * 4 + 0x105446));
  pcVar10 = *(code **)(*(int *)this + 0x2c);
  String::String(aSStack_144,aSStack_14c);
  pTVar5 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement(pTVar5,aSStack_144,uVar1,0xffffffff,0,0,9,0);
  *(TrueTypeTextElement **)(this + 0x78) = pTVar5;
  (*pcVar10)(this,pTVar5);
  String::~String(aSStack_144);
  piVar9 = *(int **)(iVar12 + DAT_00105724);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar9,*(TrueTypeTextElement **)(this + 0x78));
  L_PrintLog((char *)(DAT_00105728 + 0x105484),(char *)(DAT_0010572c + 0x105486));
  sprintf(acStack_11c,(char *)(DAT_00105730 + 0x105494),*(int *)(*piVar9 + 4) + 1);
  L_PrintLog((char *)(DAT_00105734 + 0x1054a0),acStack_11c);
  *(undefined1 *)(*(int *)(this + 0x78) + 0x7f) = 0x11;
  (**(code **)(**(int **)(this + 0x78) + 0x14))(*(int **)(this + 0x78),0,iVar3);
  piVar11 = *(int **)(this + 0x78);
  uVar7 = *(undefined4 *)(this + 0xc);
  iVar4 = *piVar11;
  __mulsf3(*(undefined4 *)(this + 100),DAT_00105738);
  uVar2 = __fixsfsi();
  (**(code **)(iVar4 + 0x18))(piVar11,uVar7,uVar2);
  iVar4 = (**(code **)(**(int **)(this + 0x78) + 0x4c))();
  if (2 < *(int *)(this + 0x98)) {
    local_164 = (String *)
                CapcomLinkedList<EquipInfoDialog::QueueMessage*>::get
                          ((CapcomLinkedList<EquipInfoDialog::QueueMessage*> *)(this + 0x88),1);
    String::String(aSStack_13c,(char *)(DAT_0010573c + 0x1054fe));
    String::~String(aSStack_13c);
  }
  iVar6 = SmDev();
  MultiByteString::insertStringNextLine
            (aSStack_14c,local_164 + 8,*(int *)(DAT_00105740 + iVar6 * 4 + 0x10552c));
  pcVar10 = *(code **)(*(int *)this + 0x2c);
  String::String(aSStack_134,aSStack_14c);
  pTVar5 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement(pTVar5,aSStack_134,uVar1,0xffffffff,0,0,9,0);
  *(TrueTypeTextElement **)(this + 0x7c) = pTVar5;
  (*pcVar10)(this,pTVar5);
  String::~String(aSStack_134);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar9,*(TrueTypeTextElement **)(this + 0x7c));
  L_PrintLog((char *)(DAT_00105744 + 0x10556c),(char *)(DAT_00105748 + 0x10556e));
  sprintf(acStack_11c,(char *)(DAT_0010574c + 0x10557c),*(int *)(*piVar9 + 4) + 1);
  L_PrintLog((char *)(DAT_00105750 + 0x105588),acStack_11c);
  *(undefined1 *)(*(int *)(this + 0x7c) + 0x7f) = 0x11;
  (**(code **)(**(int **)(this + 0x7c) + 0x14))(*(int **)(this + 0x7c),0,iVar3 + iVar4);
  piVar11 = *(int **)(this + 0x7c);
  uVar7 = *(undefined4 *)(this + 0xc);
  iVar3 = *piVar11;
  __mulsf3(*(undefined4 *)(this + 100),DAT_00105738);
  uVar2 = __fixsfsi();
  (**(code **)(iVar3 + 0x18))(piVar11,uVar7,uVar2);
  pcVar10 = *(code **)(*(int *)this + 0x2c);
  String::String(aSStack_12c,(char *)(DAT_00105754 + 0x1055d0));
  pTVar5 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement(pTVar5,aSStack_12c,uVar1,DAT_00105758,0,0,9,0);
  *(TrueTypeTextElement **)(this + 0x80) = pTVar5;
  (*pcVar10)(this,pTVar5);
  String::~String(aSStack_12c);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar9,*(TrueTypeTextElement **)(this + 0x80));
  L_PrintLog((char *)(DAT_0010575c + 0x105616),(char *)(DAT_00105760 + 0x105618));
  sprintf(acStack_11c,(char *)(DAT_00105764 + 0x105626),*(int *)(*piVar9 + 4) + 1);
  L_PrintLog((char *)(DAT_00105768 + 0x105632),acStack_11c);
  *(undefined1 *)(*(int *)(this + 0x80) + 0x7f) = 0x11;
  piVar9 = *(int **)(this + 0x80);
  uVar2 = *(undefined4 *)(this + 0xc);
  iVar3 = *piVar9;
  __mulsf3(*(undefined4 *)(this + 100),DAT_00105738);
  uVar1 = __fixsfsi();
  (**(code **)(iVar3 + 0x18))(piVar9,uVar2,uVar1);
  (**(code **)(**(int **)(this + 0x80) + 0x14))
            (*(int **)(this + 0x80),0,
             *(int *)(*(int *)(this + 0x70) + 8) + *(int *)(*(int *)(this + 0x70) + 0x10));
  piVar9 = *(int **)(this + 0x84);
  pcVar10 = *(code **)(*piVar9 + 0x44);
  String::String(aSStack_124,local_164 + 0x10);
  (*pcVar10)(piVar9,aSStack_124);
  String::~String(aSStack_124);
  iVar4 = DAT_00105770;
  iVar3 = DAT_0010576c;
  this[0x14] = (EquipInfoDialog)0x1;
  L_PrintLog((char *)(iVar3 + 0x10569e),(char *)(iVar4 + 0x1056a0));
  String::~String(aSStack_14c);
  if (local_1c != **(int **)(iVar12 + DAT_00105704)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


