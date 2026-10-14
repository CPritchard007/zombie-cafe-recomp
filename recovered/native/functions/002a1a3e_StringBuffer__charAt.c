/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a1a3e StringBuffer::charAt */

/* StringBuffer::charAt(int) */

undefined4 StringBuffer::charAt(int param_1)

{
  int in_r1;
  int iVar1;
  undefined4 uVar2;
  int iStack_20;
  undefined4 uStack_1c;
  String aSStack_18 [8];
  
  if (in_r1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (in_r1 < *(int *)(param_1 + 0x18)) {
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 8);
      iStack_20 = param_1;
      uStack_1c = in_r1;
      CapcomLinkedList<String>::nextItem();
      for (; iVar1 = (int)uStack_1c._2_2_, iVar1 <= in_r1; in_r1 = in_r1 - iVar1) {
        CapcomLinkedList<String>::nextItem();
        String::operator=((String *)&iStack_20,aSStack_18);
        String::~String(aSStack_18);
      }
      uVar2 = String::charAt((String *)&iStack_20,in_r1);
      String::~String((String *)&iStack_20);
    }
  }
  return uVar2;
}


