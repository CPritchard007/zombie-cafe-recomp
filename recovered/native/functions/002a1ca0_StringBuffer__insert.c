/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a1ca0 StringBuffer::insert */

/* StringBuffer::insert(int, String) */

StringBuffer * __thiscall StringBuffer::insert(StringBuffer *this,int param_1,String *param_3)

{
  String *this_00;
  int iVar1;
  int iVar2;
  String aSStack_48 [6];
  short local_42;
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x18))) {
    iVar2 = 0;
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 8);
    CapcomLinkedList<String>::nextItem();
    while( true ) {
      iVar1 = (int)local_42;
      if (param_1 <= iVar1) break;
      CapcomLinkedList<String>::nextItem();
      String::operator=(aSStack_48,aSStack_40);
      String::~String(aSStack_40);
      param_1 = param_1 - iVar1;
      iVar2 = iVar2 + 1;
    }
    if (param_1 == iVar1) {
      String::String(aSStack_38,param_3);
      CapcomLinkedList<String>::insert((CapcomLinkedList<String> *)this,aSStack_38,iVar2);
      this_00 = aSStack_38;
    }
    else {
      String::String(aSStack_30,aSStack_48,param_1,iVar1 - param_1);
      local_42 = (short)param_1;
      String::String(aSStack_28,param_3);
      CapcomLinkedList<String>::insert((CapcomLinkedList<String> *)this,aSStack_28,iVar2);
      String::~String(aSStack_28);
      String::String(aSStack_20,aSStack_30);
      CapcomLinkedList<String>::insert((CapcomLinkedList<String> *)this,aSStack_20,iVar2 + 1);
      String::~String(aSStack_20);
      this_00 = aSStack_30;
    }
    String::~String(this_00);
    String::~String(aSStack_48);
  }
  return this;
}


