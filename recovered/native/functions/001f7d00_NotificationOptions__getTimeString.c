/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f7d00 NotificationOptions::getTimeString */

/* NotificationOptions::getTimeString(int) */

int NotificationOptions::getTimeString(int param_1)

{
  int in_r1;
  int in_r2;
  undefined4 *puVar1;
  String aSStack_44 [8];
  String aSStack_3c [8];
  String aSStack_34 [8];
  StringBuffer aSStack_2c [28];
  
  StringBuffer::StringBuffer(aSStack_2c);
  __aeabi_idivmod(in_r2,0xc);
  String::valueOf((int)aSStack_44);
  StringBuffer::append(aSStack_2c,aSStack_44);
  String::~String(aSStack_44);
  String::String(aSStack_3c,(char *)(DAT_001f7db4 + 0x1f7d3a));
  StringBuffer::append(aSStack_2c,aSStack_3c);
  String::~String(aSStack_3c);
  if (in_r2 < 0xc) {
    puVar1 = (undefined4 *)(DAT_001f7db8 + 0x1f7d5c);
  }
  else {
    puVar1 = (undefined4 *)(DAT_001f7dbc + 0x1f7d62);
  }
  String::String(aSStack_34,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(in_r1 + 0x60) + 0x4b0) + 8) + *(int *)*puVar1 * 8));
  StringBuffer::append(aSStack_2c,aSStack_34);
  String::~String(aSStack_34);
  StringBuffer::toString();
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_2c);
  return param_1;
}


