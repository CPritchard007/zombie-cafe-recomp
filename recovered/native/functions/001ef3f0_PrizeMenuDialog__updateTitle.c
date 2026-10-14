/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ef3f0 PrizeMenuDialog::updateTitle */

/* PrizeMenuDialog::updateTitle() */

void __thiscall PrizeMenuDialog::updateTitle(PrizeMenuDialog *this)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  String aSStack_4c [8];
  String aSStack_44 [8];
  String aSStack_3c [8];
  StringBuffer aSStack_34 [32];
  
  puts((char *)(DAT_001ef4c4 + 0x1ef3fc));
  if (*(char *)(*(int *)(this + 0x7c) + 0x14) != '\0') {
    StringBuffer::StringBuffer(aSStack_34);
    String::String(aSStack_4c,(char *)(DAT_001ef4c8 + 0x1ef414));
    StringBuffer::append(aSStack_34,aSStack_4c);
    String::~String(aSStack_4c);
    String::valueOf((long)aSStack_44);
    StringBuffer::append(aSStack_34,aSStack_44);
    String::~String(aSStack_44);
    piVar5 = *(int **)(this + 0xa4);
    pcVar3 = *(code **)(*piVar5 + 0x44);
    StringBuffer::toString();
    (*pcVar3)(piVar5,aSStack_3c);
    String::~String(aSStack_3c);
    piVar5 = *(int **)(this + 0xa4);
    iVar4 = *(int *)(this + 0xc);
    pcVar3 = *(code **)(*piVar5 + 0x14);
    iVar1 = SmDev();
    uVar2 = __floatsisf(*(undefined4 *)(iVar1 * 4 + DAT_001ef4cc + 0x1ef47c));
    __mulsf3(uVar2,*(undefined4 *)(this + 0xac));
    uVar2 = __fixsfsi();
    (*pcVar3)(piVar5,iVar4 / 2,uVar2);
    CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
  }
  return;
}


