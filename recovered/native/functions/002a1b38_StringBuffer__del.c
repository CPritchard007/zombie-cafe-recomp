/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a1b38 StringBuffer::del */

/* StringBuffer::del(int, int) */

StringBuffer * __thiscall StringBuffer::del(StringBuffer *this,int param_1,int param_2)

{
  short sVar1;
  String *pSVar2;
  uint uVar3;
  String aSStack_38 [4];
  short local_34;
  short local_32;
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  if (((-1 < param_1) &&
      ((((param_1 >> 0x1f) - (param_2 >> 0x1f)) + (uint)((uint)param_2 <= (uint)param_1) & 0xff) ==
       0)) && ((((param_2 >> 0x1f) - ((int)*(uint *)(this + 0x18) >> 0x1f)) +
                (uint)(*(uint *)(this + 0x18) <= (uint)param_2) & 0xff) == 0)) {
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 8);
    String::String(aSStack_38);
    while( true ) {
      CapcomLinkedList<String>::nextItem();
      pSVar2 = (String *)String::operator=(aSStack_38,aSStack_30);
      String::String(aSStack_28,pSVar2);
      uVar3 = operator!=(aSStack_28,0);
      if (uVar3 != 0) {
        uVar3 = (uint)((param_2 >> 0x1f) - param_2) >> 0x1f;
      }
      String::~String(aSStack_28);
      String::~String(aSStack_30);
      if (uVar3 == 0) break;
      sVar1 = local_32;
      if (param_1 < local_32) {
        if (param_1 == 0) {
          sVar1 = (short)param_2;
          if (local_32 <= param_2) {
            CapcomLinkedList<String>::remove((int)aSStack_20);
            String::~String(aSStack_20);
            sVar1 = local_32;
          }
        }
        else {
          local_34 = (short)param_1 + local_34;
          sVar1 = (short)param_2 - (short)param_1;
        }
      }
      local_32 = sVar1;
      uVar3 = (uint)local_32;
      param_1 = param_1 - ((int)~uVar3 >> 0x1f & uVar3);
      param_2 = param_2 - uVar3;
    }
    String::~String(aSStack_38);
  }
  return this;
}


