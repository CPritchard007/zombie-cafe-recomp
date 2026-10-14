/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001bc1a4 GameStateEventRaid3Menu::Layout_Default_EventBefore */

/* GameStateEventRaid3Menu::Layout_Default_EventBefore() */

void __thiscall GameStateEventRaid3Menu::Layout_Default_EventBefore(GameStateEventRaid3Menu *this)

{
  code *pcVar1;
  int *piVar2;
  String aSStack_3c [8];
  String aSStack_34 [8];
  StringBuffer aSStack_2c [28];
  
  (**(code **)(**(int **)(this + 0x20) + 0x20))(*(int **)(this + 0x20),0);
  (**(code **)(**(int **)(this + 0xa8) + 0x20))(*(int **)(this + 0xa8),0);
  (**(code **)(**(int **)(this + 0xac) + 0x20))(*(int **)(this + 0xac),0);
  StringBuffer::StringBuffer(aSStack_2c);
  String::String(aSStack_3c,(char *)(DAT_001bc288 + 0x1bc1de));
  StringBuffer::append(aSStack_2c,aSStack_3c);
  String::~String(aSStack_3c);
  piVar2 = *(int **)(this + 0x9c);
  pcVar1 = *(code **)(*piVar2 + 0x44);
  StringBuffer::toString();
  (*pcVar1)(piVar2,aSStack_34);
  String::~String(aSStack_34);
  piVar2 = *(int **)(this + 0x9c);
  (**(code **)(*piVar2 + 0x14))
            (piVar2,*(int *)(*(int *)(this + 0x1c) + 0xc) / 2,
             *(int *)(*(int *)(this + 0x1c) + 0x10) / 2);
  piVar2 = *(int **)(this + 0x9c);
  (**(code **)(*piVar2 + 0x20))(piVar2,1);
  (**(code **)(**(int **)(this + 0x68) + 0x20))(*(int **)(this + 0x68),0);
  (**(code **)(**(int **)(this + 0x6c) + 0x20))(*(int **)(this + 0x6c),0);
  (**(code **)(**(int **)(this + 0x70) + 0x20))(*(int **)(this + 0x70),0);
  (**(code **)(**(int **)(this + 0x74) + 0x20))(*(int **)(this + 0x74),0);
  SoulVisible(SUB41(this,0));
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_2c);
  return;
}


