/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011f354 GameStateCafe::enterExpansionPreviewMode */

/* GameStateCafe::enterExpansionPreviewMode() */

void __thiscall GameStateCafe::enterExpansionPreviewMode(GameStateCafe *this)

{
  code *pcVar1;
  int *piVar2;
  String aSStack_84 [8];
  String aSStack_7c [8];
  String aSStack_74 [8];
  String aSStack_6c [8];
  String aSStack_64 [8];
  String aSStack_5c [8];
  String aSStack_54 [8];
  String aSStack_4c [8];
  String aSStack_44 [8];
  String aSStack_3c [8];
  String aSStack_34 [8];
  StringBuffer aSStack_2c [28];
  
  this[DAT_0011f554] = (GameStateCafe)0x9;
  (**(code **)(**(int **)(this + 0xf8) + 0x20))(*(int **)(this + 0xf8),0);
  *(undefined4 *)(this + 0x168) = *(undefined4 *)(*(int *)(*(int *)(this + 0x84) + 0xd0) + 0x34);
  StringBuffer::StringBuffer(aSStack_2c);
  Vector<String>::elementAt((int)aSStack_84);
  StringBuffer::append(aSStack_2c,aSStack_84);
  String::~String(aSStack_84);
  if (*(char *)(*(int *)(*(int *)(this + 0x84) + 0xd0) + 0x38) == '\0') {
    String::String(aSStack_7c,(char *)(DAT_0011f55c + 0x11f3c4));
    StringBuffer::append(aSStack_2c,aSStack_7c);
    String::~String(aSStack_7c);
  }
  String::valueOf((int)aSStack_74);
  StringBuffer::append(aSStack_2c,aSStack_74);
  String::~String(aSStack_74);
  if (*(char *)(*(int *)(*(int *)(this + 0x84) + 0xd0) + 0x38) != '\0') {
    Vector<String>::elementAt((int)aSStack_6c);
    StringBuffer::append(aSStack_2c,aSStack_6c);
    String::~String(aSStack_6c);
  }
  piVar2 = *(int **)(this + 0xfc);
  pcVar1 = *(code **)(*piVar2 + 0x44);
  StringBuffer::toString();
  (*pcVar1)(piVar2,aSStack_64);
  String::~String(aSStack_64);
  String::String(aSStack_5c,(String *)(*(int *)(*(int *)(this + 0x84) + 0xd0) + 100));
  setItemDescriptionText(this,aSStack_5c);
  String::~String(aSStack_5c);
  piVar2 = *(int **)(this + 0x100);
  pcVar1 = *(code **)(*piVar2 + 0x44);
  String::String(aSStack_54,(char *)(DAT_0011f564 + 0x11f46e));
  __fixsfsi(*(undefined4 *)(*(int *)(*(int *)(this + 0x84) + 0xd0) + 0x6c));
  String::valueOf((int)aSStack_4c);
  String::operator+(aSStack_44,aSStack_54,aSStack_4c);
  String::String(aSStack_3c,(char *)(DAT_0011f568 + 0x11f49c));
  String::operator+(aSStack_34,aSStack_44,aSStack_3c);
  (*pcVar1)(piVar2,aSStack_34);
  String::~String(aSStack_34);
  String::~String(aSStack_3c);
  String::~String(aSStack_44);
  String::~String(aSStack_4c);
  String::~String(aSStack_54);
  (**(code **)(**(int **)(this + 0x84) + 0x20))(*(int **)(this + 0x84),0);
  (**(code **)(**(int **)(this + 0xe8) + 0x20))(*(int **)(this + 0xe8),1);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_2c);
  return;
}


