/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002990d0 CapcomFile::CapcomFile */

/* CapcomFile::CapcomFile(String, bool) */

CapcomFile * __thiscall
CapcomFile::CapcomFile(CapcomFile *this,String *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  String *pSVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pSVar2 = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  StringUtil::getEncodingString((StringUtil *)&uStack_18,'\0');
  uVar1 = String::getBytes(param_2,&uStack_18,0,0,0,pSVar2);
  *(undefined4 *)this = uVar1;
  String::~String((String *)&uStack_18);
  this[5] = SUB41(param_3,0);
  this[4] = (CapcomFile)0x0;
  return this;
}


