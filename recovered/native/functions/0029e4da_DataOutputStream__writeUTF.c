/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029e4da DataOutputStream::writeUTF */

/* DataOutputStream::writeUTF(String) */

void __thiscall DataOutputStream::writeUTF(DataOutputStream *this,String *param_2)

{
  void *__ptr;
  undefined4 local_1c;
  StringUtil aSStack_18 [12];
  
  if (*(short *)(param_2 + 6) == 0) {
    writeShort((short)this);
  }
  else {
    StringUtil::getEncodingString(aSStack_18,'\x01');
    __ptr = (void *)String::getBytes(param_2,aSStack_18,0,0,&local_1c);
    String::~String((String *)aSStack_18);
    writeShort((short)this);
    (**(code **)(**(int **)this + 0x14))(*(int **)this,__ptr,local_1c);
    free(__ptr);
  }
  return;
}


