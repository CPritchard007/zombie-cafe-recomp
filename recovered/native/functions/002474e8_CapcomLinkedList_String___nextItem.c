/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002474e8 CapcomLinkedList<String>::nextItem */

/* CapcomLinkedList<String>::nextItem() */

undefined8 CapcomLinkedList<String>::nextItem(void)

{
  String *in_r0;
  int in_r1;
  String *apSStack_18 [3];
  
  apSStack_18[0] = in_r0;
  if (*(String **)(in_r1 + 0x10) == (String *)0x0) {
    String::String(in_r0,0);
  }
  else {
    String::String((String *)apSStack_18,*(String **)(in_r1 + 0x10));
    *(undefined4 *)(in_r1 + 0x10) = *(undefined4 *)(*(int *)(in_r1 + 0x10) + 8);
    String::String(in_r0,(String *)apSStack_18);
    String::~String((String *)apSStack_18);
  }
  return CONCAT44(apSStack_18[0],in_r0);
}


