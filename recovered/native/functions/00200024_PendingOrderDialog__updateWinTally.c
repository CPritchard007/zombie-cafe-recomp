/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00200024 PendingOrderDialog::updateWinTally */

/* PendingOrderDialog::updateWinTally() */

void __thiscall PendingOrderDialog::updateWinTally(PendingOrderDialog *this)

{
  code *pcVar1;
  int *piVar2;
  String aSStack_64 [8];
  String aSStack_5c [8];
  String aSStack_54 [8];
  String aSStack_4c [8];
  String aSStack_44 [8];
  String aSStack_3c [8];
  String aSStack_34 [8];
  StringBuffer aSStack_2c [32];
  
  StringBuffer::StringBuffer(aSStack_2c);
  String::String(aSStack_64);
  Vector<String>::elementAt((int)aSStack_5c);
  StringBuffer::append(aSStack_2c,aSStack_5c);
  String::~String(aSStack_5c);
  String::valueOf((int)aSStack_54);
  StringBuffer::append(aSStack_2c,aSStack_54);
  String::~String(aSStack_54);
  Vector<String>::elementAt((int)aSStack_4c);
  StringBuffer::append(aSStack_2c,aSStack_4c);
  String::~String(aSStack_4c);
  String::valueOf((int)aSStack_44);
  StringBuffer::append(aSStack_2c,aSStack_44);
  String::~String(aSStack_44);
  StringBuffer::toString();
  String::operator=(aSStack_64,aSStack_3c);
  String::~String(aSStack_3c);
  piVar2 = *(int **)(this + 0xd8);
  pcVar1 = *(code **)(*piVar2 + 0x44);
  String::String(aSStack_34,aSStack_64);
  (*pcVar1)(piVar2,aSStack_34);
  String::~String(aSStack_34);
  String::~String(aSStack_64);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_2c);
  return;
}


