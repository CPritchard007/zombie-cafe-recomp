/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a18c2 StringBuffer::toString */

/* StringBuffer::toString() */

String * StringBuffer::toString(void)

{
  String *in_r0;
  StringRef *this;
  undefined4 uVar1;
  String *pSVar2;
  int iVar3;
  int in_r1;
  int iVar4;
  int *local_30;
  short sStack_2c;
  short sStack_2a;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  String::String(in_r0);
  this = (StringRef *)operator_new(8);
  StringRef::StringRef(this);
  *(StringRef **)in_r0 = this;
  uVar1 = String::Test(*(String **)(in_r1 + 0x18));
  *(undefined4 *)this = uVar1;
  *(short *)(in_r0 + 6) = (short)*(undefined4 *)(in_r1 + 0x18);
  String::String((String *)&local_30);
  iVar4 = 0;
  *(undefined4 *)(in_r1 + 0x10) = *(undefined4 *)(in_r1 + 8);
  while( true ) {
    CapcomLinkedList<String>::nextItem();
    pSVar2 = (String *)String::operator=((String *)&local_30,aSStack_28);
    String::String(aSStack_20,pSVar2);
    iVar3 = operator!=(aSStack_20,0);
    String::~String(aSStack_20);
    String::~String(aSStack_28);
    if (iVar3 == 0) break;
    memcpy((void *)(**(int **)in_r0 + iVar4),(void *)(*local_30 + (int)sStack_2c),(int)sStack_2a);
    iVar4 = iVar4 + sStack_2a;
  }
  String::~String((String *)&local_30);
  return in_r0;
}


