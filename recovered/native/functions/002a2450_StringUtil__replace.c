/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a2450 StringUtil::replace */

/* StringUtil::replace(String, String, String) */

StringUtil * __thiscall
StringUtil::replace(StringUtil *this,String *param_2,String *param_3,String *param_4)

{
  short sVar1;
  int iVar2;
  String aSStack_54 [8];
  String aSStack_4c [8];
  String aSStack_44 [8];
  String aSStack_3c [8];
  StringBuffer aSStack_34 [32];
  
  sVar1 = *(short *)(param_3 + 6);
  iVar2 = 0;
  StringBuffer::StringBuffer(aSStack_34);
  while( true ) {
    String::String(aSStack_54,param_3);
    iVar2 = String::indexOf(param_2,aSStack_54,iVar2);
    String::~String(aSStack_54);
    if (iVar2 < 0) break;
    String::substring((int)aSStack_4c,(int)param_2);
    StringBuffer::append(aSStack_34,aSStack_4c);
    String::~String(aSStack_4c);
    String::String(aSStack_44,param_4);
    StringBuffer::append(aSStack_34,aSStack_44);
    String::~String(aSStack_44);
    iVar2 = iVar2 + sVar1;
  }
  String::substring(aSStack_3c,(int)param_2);
  StringBuffer::append(aSStack_34,aSStack_3c);
  String::~String(aSStack_3c);
  StringBuffer::toString();
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
  return this;
}


