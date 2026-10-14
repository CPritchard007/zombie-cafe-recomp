/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001380a4 GameStateColosseum::updateKillCountText */

/* GameStateColosseum::updateKillCountText() */

void __thiscall GameStateColosseum::updateKillCountText(GameStateColosseum *this)

{
  code *pcVar1;
  int *piVar2;
  String aSStack_3c [8];
  String aSStack_34 [8];
  StringBuffer aSStack_2c [32];
  
  StringBuffer::StringBuffer(aSStack_2c);
  String::valueOf((int)aSStack_3c);
  StringBuffer::append(aSStack_2c,aSStack_3c);
  String::~String(aSStack_3c);
  piVar2 = *(int **)(this + 0xb0);
  pcVar1 = *(code **)(*piVar2 + 0x44);
  StringBuffer::toString();
  (*pcVar1)(piVar2,aSStack_34);
  String::~String(aSStack_34);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_2c);
  return;
}


