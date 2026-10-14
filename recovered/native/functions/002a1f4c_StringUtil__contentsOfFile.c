/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a1f4c StringUtil::contentsOfFile */

/* StringUtil::contentsOfFile(String, int, unsigned char) */

StringUtil * __thiscall
StringUtil::contentsOfFile(StringUtil *this,String *param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  char *pcVar2;
  String *this_00;
  wchar_t *pwVar3;
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  StringUtil aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  String::String(aSStack_48,param_2);
  String::String(aSStack_20,aSStack_48);
  piVar1 = (int *)ResourceManager::load(aSStack_20,param_3,1);
  String::~String(aSStack_20);
  String::~String(aSStack_48);
  pwVar3 = (wchar_t *)piVar1[5];
  pcVar2 = (char *)String::getBytes(param_2);
  L_PrintLog((char *)(DAT_002a2070 + 0x2a1f8e),pcVar2);
  if (pwVar3 == (wchar_t *)0x0) {
    L_PrintLog((char *)(DAT_002a2074 + 0x2a1fa6),(char *)(DAT_002a2078 + 0x2a1fa8));
    String::String((String *)this,0);
    return this;
  }
  String::String(aSStack_40);
  if (param_4 == 1) {
    stringFromUtf8(aSStack_30,(uchar *)pwVar3,piVar1[6]);
    String::operator=(aSStack_40,aSStack_30);
    this_00 = (String *)aSStack_30;
  }
  else if (param_4 == 0) {
    String::String(aSStack_38,(char *)pwVar3);
    String::operator=(aSStack_40,aSStack_38);
    this_00 = aSStack_38;
  }
  else {
    if (param_4 != 2) {
      L_PrintLog((char *)(DAT_002a207c + 0x2a2012),(char *)(DAT_002a2080 + 0x2a2014));
      (**(code **)(*piVar1 + 0xc))(piVar1);
      String::String((String *)this,0);
      goto LAB_002a2038;
    }
    String::String(aSStack_28,pwVar3);
    String::operator=(aSStack_40,aSStack_28);
    this_00 = aSStack_28;
  }
  String::~String(this_00);
  (**(code **)(*piVar1 + 0xc))(piVar1);
  String::String((String *)this,aSStack_40);
LAB_002a2038:
  String::~String(aSStack_40);
  return this;
}


