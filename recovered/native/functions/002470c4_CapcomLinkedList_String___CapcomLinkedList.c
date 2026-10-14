/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002470c4 CapcomLinkedList<String>::CapcomLinkedList */

/* CapcomLinkedList<String>::CapcomLinkedList() */

CapcomLinkedList<String> * __thiscall
CapcomLinkedList<String>::CapcomLinkedList(CapcomLinkedList<String> *this)

{
  String::String((String *)this);
  *(undefined4 *)(this + 8) = 0;
  *(CapcomLinkedList<String> **)(this + 0xc) = this;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return this;
}


