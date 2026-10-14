/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b95d2 CapcomLinkedList<String>::~CapcomLinkedList */

/* CapcomLinkedList<String>::~CapcomLinkedList() */

CapcomLinkedList<String> * __thiscall
CapcomLinkedList<String>::~CapcomLinkedList(CapcomLinkedList<String> *this)

{
  String *this_00;
  undefined4 uVar1;
  
  if (*(int *)(this + 0x14) != 0) {
    while (this_00 = *(String **)(this + 8), this_00 != (String *)0x0) {
      uVar1 = *(undefined4 *)(this_00 + 8);
      String::~String(this_00);
      operator_delete(this_00);
      *(undefined4 *)(this + 8) = uVar1;
    }
    *(undefined4 *)(this + 0x14) = 0;
    *(CapcomLinkedList<String> **)(this + 0xc) = this;
    *(undefined4 *)(this + 0x10) = 0;
  }
  String::~String((String *)this);
  return this;
}


