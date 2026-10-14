/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018fc8c GameStateSurvivalMenu::Layout_Default */

/* GameStateSurvivalMenu::Layout_Default() */

void __thiscall GameStateSurvivalMenu::Layout_Default(GameStateSurvivalMenu *this)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  String *this_00;
  code *pcVar5;
  int iVar6;
  String aSStack_d4 [8];
  String aSStack_cc [8];
  String aSStack_c4 [8];
  String aSStack_bc [8];
  String aSStack_b4 [8];
  String aSStack_ac [8];
  String aSStack_a4 [8];
  String aSStack_9c [8];
  String aSStack_94 [8];
  String aSStack_8c [8];
  String aSStack_84 [8];
  String aSStack_7c [8];
  String aSStack_74 [8];
  StringBuffer aSStack_6c [28];
  StringBuffer aSStack_50 [28];
  StringBuffer aSStack_34 [32];
  
  CapcomApp::getInstance();
  CapcomApp::getInstance();
  iVar1 = CapcomApp::getInstance();
  uVar2 = *(undefined4 *)(iVar1 + 0x44);
  (**(code **)(**(int **)(this + 0x24) + 0x20))(*(int **)(this + 0x24),0);
  (**(code **)(**(int **)(this + 0x84) + 0x20))(*(int **)(this + 0x84),0);
  (**(code **)(**(int **)(this + 0x88) + 0x20))(*(int **)(this + 0x88),0);
  (**(code **)(**(int **)(this + 0x3c) + 0x20))(*(int **)(this + 0x3c),1);
  (**(code **)(**(int **)(this + 0x40) + 0x20))(*(int **)(this + 0x40),1);
  piVar3 = *(int **)(this + 0x48);
  if (*(int *)(*(int *)(this + 0xc) + DAT_0018ffdc) == 0) {
    (**(code **)(*piVar3 + 0x20))(piVar3,1);
    (**(code **)(**(int **)(this + 0x50) + 0x20))(*(int **)(this + 0x50),0);
    (**(code **)(**(int **)(this + 0x8c) + 0x20))(*(int **)(this + 0x8c),0);
  }
  else {
    (**(code **)(*piVar3 + 0x20))(piVar3,0);
    (**(code **)(**(int **)(this + 0x50) + 0x20))(*(int **)(this + 0x50),1);
    (**(code **)(**(int **)(this + 0x8c) + 0x20))(*(int **)(this + 0x8c),1);
    drawReOpenTimer(this);
  }
  StringBuffer::StringBuffer(aSStack_6c);
  String::String(aSStack_d4,(char *)(DAT_0018ffe0 + 0x18fd3a));
  StringBuffer::append(aSStack_6c,aSStack_d4);
  String::~String(aSStack_d4);
  String::valueOf((int)aSStack_cc);
  StringBuffer::append(aSStack_6c,aSStack_cc);
  String::~String(aSStack_cc);
  String::String(aSStack_c4,(char *)(DAT_0018ffe4 + 0x18fd6c));
  StringBuffer::append(aSStack_6c,aSStack_c4);
  String::~String(aSStack_c4);
  piVar3 = *(int **)(this + 0x78);
  pcVar5 = *(code **)(*piVar3 + 0x44);
  StringBuffer::toString();
  (*pcVar5)(piVar3,aSStack_bc);
  String::~String(aSStack_bc);
  piVar3 = *(int **)(this + 0x78);
  pcVar5 = *(code **)(*piVar3 + 0x14);
  iVar6 = *(int *)(*(int *)(this + 0x1c) + 0xc);
  iVar1 = SmDev();
  uVar4 = __floatunsisf(*(undefined4 *)(DAT_0018ffe8 + iVar1 * 4 + 0x18fdfe));
  __mulsf3(uVar4,uVar2);
  uVar4 = __fixsfsi();
  (*pcVar5)(piVar3,iVar6 / 2,uVar4);
  (**(code **)(**(int **)(this + 0x78) + 0x20))(*(int **)(this + 0x78),1);
  StringBuffer::StringBuffer(aSStack_50);
  String::String(aSStack_b4,(char *)(DAT_0018ffec + 0x18fde2));
  StringBuffer::append(aSStack_50,aSStack_b4);
  String::~String(aSStack_b4);
  String::valueOf((int)aSStack_ac);
  StringBuffer::append(aSStack_50,aSStack_ac);
  String::~String(aSStack_ac);
  String::String(aSStack_a4,(char *)(DAT_0018fff0 + 0x18fe14));
  StringBuffer::append(aSStack_50,aSStack_a4);
  String::~String(aSStack_a4);
  piVar3 = *(int **)(this + 0x7c);
  pcVar5 = *(code **)(*piVar3 + 0x44);
  StringBuffer::toString();
  (*pcVar5)(piVar3,aSStack_9c);
  String::~String(aSStack_9c);
  piVar3 = *(int **)(this + 0x7c);
  pcVar5 = *(code **)(*piVar3 + 0x14);
  iVar6 = *(int *)(*(int *)(this + 0x1c) + 0xc);
  iVar1 = SmDev();
  uVar4 = __floatunsisf(*(undefined4 *)(DAT_0018fff4 + iVar1 * 4 + 0x18febe));
  __mulsf3(uVar4,uVar2);
  uVar4 = __fixsfsi();
  (*pcVar5)(piVar3,iVar6 / 2,uVar4);
  (**(code **)(**(int **)(this + 0x7c) + 0x20))(*(int **)(this + 0x7c),1);
  StringBuffer::StringBuffer(aSStack_34);
  String::String(aSStack_94,(char *)(DAT_0018fff8 + 0x18fe8a));
  StringBuffer::append(aSStack_34,aSStack_94);
  String::~String(aSStack_94);
  if (*(int *)(this + 0xb0) < 1) {
    String::String(aSStack_8c,(char *)(DAT_0018fffc + 0x18feac));
    StringBuffer::append(aSStack_34,aSStack_8c);
    this_00 = aSStack_8c;
  }
  else {
    String::valueOf((int)aSStack_84);
    StringBuffer::append(aSStack_34,aSStack_84);
    this_00 = aSStack_84;
  }
  String::~String(this_00);
  String::String(aSStack_7c,(char *)(DAT_00190000 + 0x18fed6));
  StringBuffer::append(aSStack_34,aSStack_7c);
  String::~String(aSStack_7c);
  piVar3 = *(int **)(this + 0x80);
  pcVar5 = *(code **)(*piVar3 + 0x44);
  StringBuffer::toString();
  (*pcVar5)(piVar3,aSStack_74);
  String::~String(aSStack_74);
  piVar3 = *(int **)(this + 0x80);
  pcVar5 = *(code **)(*piVar3 + 0x14);
  iVar6 = *(int *)(*(int *)(this + 0x1c) + 0xc);
  iVar1 = SmDev();
  uVar4 = __floatunsisf(*(undefined4 *)(&UNK_0018ff9c + DAT_00190004 + iVar1 * 4));
  __mulsf3(uVar4,uVar2);
  uVar2 = __fixsfsi();
  (*pcVar5)(piVar3,iVar6 / 2,uVar2);
  (**(code **)(**(int **)(this + 0x80) + 0x20))(*(int **)(this + 0x80),1);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_50);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_6c);
  return;
}


