/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001bbb2c GameStateEventRaid3Menu::Layout_Default_EventClose */

/* GameStateEventRaid3Menu::Layout_Default_EventClose() */

void __thiscall GameStateEventRaid3Menu::Layout_Default_EventClose(GameStateEventRaid3Menu *this)

{
  String *this_00;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int *piVar5;
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
  
  (**(code **)(**(int **)(this + 0x20) + 0x20))(*(int **)(this + 0x20),0);
  (**(code **)(**(int **)(this + 0xa8) + 0x20))(*(int **)(this + 0xa8),0);
  (**(code **)(**(int **)(this + 0xac) + 0x20))(*(int **)(this + 0xac),0);
  StringBuffer::StringBuffer(aSStack_6c);
  if (*(int *)(*(int *)(DAT_001bbe44 + 0x1bbb64) + 0xa0) < 1) {
    String::String(aSStack_a4,(char *)(DAT_001bbe4c + 0x1bbba8));
    StringBuffer::append(aSStack_6c,aSStack_a4);
    this_00 = aSStack_a4;
  }
  else {
    String::String(aSStack_b4,(char *)(DAT_001bbe48 + 0x1bbb78));
    StringBuffer::append(aSStack_6c,aSStack_b4);
    String::~String(aSStack_b4);
    String::valueOf((int)aSStack_ac);
    StringBuffer::append(aSStack_6c,aSStack_ac);
    this_00 = aSStack_ac;
  }
  String::~String(this_00);
  piVar5 = *(int **)(this + 0x90);
  pcVar4 = *(code **)(*piVar5 + 0x44);
  StringBuffer::toString();
  (*pcVar4)(piVar5,aSStack_9c);
  String::~String(aSStack_9c);
  iVar1 = isGetEventRaid3Item(this);
  if (iVar1 < 1) {
    piVar5 = *(int **)(this + 0x90);
    iVar1 = *(int *)(*(int *)(this + 0x1c) + 0xc);
    pcVar4 = *(code **)(*piVar5 + 0x14);
    iVar2 = SmDev();
    iVar1 = iVar1 / 2;
    uVar3 = __floatsisf(*(undefined4 *)(DAT_001bbe54 + iVar2 * 4 + 0x1bbc70));
    __mulsf3(uVar3,*(undefined4 *)(this + 0xe8));
    uVar3 = __fixsfsi();
  }
  else {
    piVar5 = *(int **)(this + 0x90);
    iVar1 = *(int *)(*(int *)(this + 0x1c) + 0xc);
    pcVar4 = *(code **)(*piVar5 + 0x14);
    iVar2 = SmDev();
    iVar1 = ((int)(((uint)(iVar1 >> 0x1f) >> 0x1d) + iVar1) >> 3) * 3;
    uVar3 = __floatsisf(*(undefined4 *)(DAT_001bbe50 + iVar2 * 4 + 0x1bbc3a));
    __mulsf3(uVar3,*(undefined4 *)(this + 0xe8));
    uVar3 = __fixsfsi();
  }
  (*pcVar4)(piVar5,iVar1,uVar3);
  StringBuffer::StringBuffer(aSStack_50);
  String::String(aSStack_94,(char *)(DAT_001bbe58 + 0x1bbc66));
  StringBuffer::append(aSStack_50,aSStack_94);
  String::~String(aSStack_94);
  String::valueOf((long)aSStack_8c);
  StringBuffer::append(aSStack_50,aSStack_8c);
  String::~String(aSStack_8c);
  piVar5 = *(int **)(this + 0x94);
  pcVar4 = *(code **)(*piVar5 + 0x44);
  StringBuffer::toString();
  (*pcVar4)(piVar5,aSStack_84);
  String::~String(aSStack_84);
  (**(code **)(**(int **)(this + 0x94) + 0x20))(*(int **)(this + 0x94),1);
  iVar1 = isGetEventRaid3Item(this);
  if (iVar1 < 1) {
    piVar5 = *(int **)(this + 0x94);
    iVar1 = *(int *)(*(int *)(this + 0x1c) + 0xc);
    pcVar4 = *(code **)(*piVar5 + 0x14);
    iVar2 = SmDev();
    iVar1 = iVar1 / 2;
    uVar3 = __floatsisf(*(undefined4 *)(DAT_001bbe60 + iVar2 * 4 + 0x1bbd6e));
    __mulsf3(uVar3,*(undefined4 *)(this + 0xe8));
    uVar3 = __fixsfsi();
  }
  else {
    piVar5 = *(int **)(this + 0x94);
    iVar1 = *(int *)(*(int *)(this + 0x1c) + 0xc);
    pcVar4 = *(code **)(*piVar5 + 0x14);
    iVar2 = SmDev();
    iVar1 = ((int)(((uint)(iVar1 >> 0x1f) >> 0x1d) + iVar1) >> 3) * 3;
    uVar3 = __floatsisf(*(undefined4 *)(DAT_001bbe5c + iVar2 * 4 + 0x1bbd38));
    __mulsf3(uVar3,*(undefined4 *)(this + 0xe8));
    uVar3 = __fixsfsi();
  }
  (*pcVar4)(piVar5,iVar1,uVar3);
  StringBuffer::StringBuffer(aSStack_34);
  String::String(aSStack_7c,(char *)(DAT_001bbe64 + 0x1bbd4c));
  StringBuffer::append(aSStack_34,aSStack_7c);
  String::~String(aSStack_7c);
  piVar5 = *(int **)(this + 0x9c);
  pcVar4 = *(code **)(*piVar5 + 0x44);
  StringBuffer::toString();
  (*pcVar4)(piVar5,aSStack_74);
  String::~String(aSStack_74);
  piVar5 = *(int **)(this + 0x9c);
  (**(code **)(*piVar5 + 0x14))
            (piVar5,*(int *)(*(int *)(this + 0x1c) + 0xc) / 2,
             *(int *)(*(int *)(this + 0x1c) + 0x10) / 2);
  piVar5 = *(int **)(this + 0x9c);
  (**(code **)(*piVar5 + 0x20))(piVar5,1);
  (**(code **)(**(int **)(this + 0x68) + 0x20))(*(int **)(this + 0x68),0);
  (**(code **)(**(int **)(this + 0x6c) + 0x20))(*(int **)(this + 0x6c),0);
  (**(code **)(**(int **)(this + 0x70) + 0x20))(*(int **)(this + 0x70),0);
  (**(code **)(**(int **)(this + 0x74) + 0x20))(*(int **)(this + 0x74),0);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_50);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_6c);
  return;
}


