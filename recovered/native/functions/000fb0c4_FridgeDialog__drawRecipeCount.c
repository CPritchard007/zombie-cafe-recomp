/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000fb0c4 FridgeDialog::drawRecipeCount */

/* FridgeDialog::drawRecipeCount() */

void __thiscall FridgeDialog::drawRecipeCount(FridgeDialog *this)

{
  code *pcVar1;
  int *piVar2;
  String aSStack_4c [8];
  String aSStack_44 [8];
  String aSStack_3c [8];
  String aSStack_34 [8];
  StringBuffer aSStack_2c [28];
  
  StringBuffer::StringBuffer(aSStack_2c);
  String::valueOf((int)aSStack_4c);
  StringBuffer::append(aSStack_2c,aSStack_4c);
  String::~String(aSStack_4c);
  String::String(aSStack_44,(char *)(DAT_000fb180 + 0xfb0f4));
  StringBuffer::append(aSStack_2c,aSStack_44);
  String::~String(aSStack_44);
  String::valueOf((int)aSStack_3c);
  StringBuffer::append(aSStack_2c,aSStack_3c);
  String::~String(aSStack_3c);
  piVar2 = *(int **)(this + 0xbc);
  pcVar1 = *(code **)(*piVar2 + 0x44);
  StringBuffer::toString();
  (*pcVar1)(piVar2,aSStack_34);
  String::~String(aSStack_34);
  (**(code **)(**(int **)(this + 0xbc) + 0x20))(*(int **)(this + 0xbc),1);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_2c);
  return;
}


