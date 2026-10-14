/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018fb2c GameStateSurvivalMenu::Layout_Default_EventFinish */

/* GameStateSurvivalMenu::Layout_Default_EventFinish() */

void __thiscall GameStateSurvivalMenu::Layout_Default_EventFinish(GameStateSurvivalMenu *this)

{
  code *pcVar1;
  int *piVar2;
  String aSStack_3c [8];
  String aSStack_34 [8];
  StringBuffer aSStack_2c [28];
  
  (**(code **)(**(int **)(this + 0x24) + 0x20))(*(int **)(this + 0x24),0);
  (**(code **)(**(int **)(this + 0x84) + 0x20))(*(int **)(this + 0x84),0);
  (**(code **)(**(int **)(this + 0x88) + 0x20))(*(int **)(this + 0x88),0);
  StringBuffer::StringBuffer(aSStack_2c);
  String::String(aSStack_3c,(char *)(DAT_0018fbd8 + 0x18fb66));
  StringBuffer::append(aSStack_2c,aSStack_3c);
  String::~String(aSStack_3c);
  piVar2 = *(int **)(this + 0x78);
  pcVar1 = *(code **)(*piVar2 + 0x44);
  StringBuffer::toString();
  (*pcVar1)(piVar2,aSStack_34);
  String::~String(aSStack_34);
  (**(code **)(**(int **)(this + 0x78) + 0x14))
            (*(int **)(this + 0x78),*(int *)(*(int *)(this + 0x1c) + 0xc) / 2,
             *(int *)(*(int *)(this + 0x1c) + 0x10) / 2);
  (**(code **)(**(int **)(this + 0x78) + 0x20))(*(int **)(this + 0x78),1);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_2c);
  return;
}


