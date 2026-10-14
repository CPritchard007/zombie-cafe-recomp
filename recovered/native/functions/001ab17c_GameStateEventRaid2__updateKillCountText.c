/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ab17c GameStateEventRaid2::updateKillCountText */

/* GameStateEventRaid2::updateKillCountText() */

void __thiscall GameStateEventRaid2::updateKillCountText(GameStateEventRaid2 *this)

{
  code *pcVar1;
  int *piVar2;
  String aSStack_54 [8];
  String aSStack_4c [8];
  String aSStack_44 [8];
  String aSStack_3c [8];
  String aSStack_34 [8];
  StringBuffer aSStack_2c [32];
  
  StringBuffer::StringBuffer(aSStack_2c);
  String::valueOf((int)aSStack_54);
  String::String(aSStack_4c,(char *)(DAT_001ab22c + 0x1ab198));
  String::operator+(aSStack_44,aSStack_54,aSStack_4c);
  StringBuffer::append(aSStack_2c,aSStack_44);
  String::~String(aSStack_44);
  String::~String(aSStack_4c);
  String::~String(aSStack_54);
  String::valueOf((int)aSStack_3c);
  StringBuffer::append(aSStack_2c,aSStack_3c);
  String::~String(aSStack_3c);
  piVar2 = *(int **)(this + 0xc0);
  pcVar1 = *(code **)(*piVar2 + 0x44);
  StringBuffer::toString();
  (*pcVar1)(piVar2,aSStack_34);
  String::~String(aSStack_34);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_2c);
  return;
}


