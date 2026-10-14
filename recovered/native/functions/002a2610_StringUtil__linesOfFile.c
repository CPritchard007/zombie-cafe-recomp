/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a2610 StringUtil::linesOfFile */

/* StringUtil::linesOfFile(String, int, unsigned char) */

undefined4 StringUtil::linesOfFile(String *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  String::String(aSStack_28,param_1);
  contentsOfFile((StringUtil *)aSStack_30,aSStack_28,param_2,param_3);
  String::~String(aSStack_28);
  String::String(aSStack_20,aSStack_30);
  iVar1 = operator==(aSStack_20,0);
  String::~String(aSStack_20);
  if (iVar1 == 0) {
    String::String(aSStack_18,aSStack_30);
    uVar2 = splitString(aSStack_18,10);
    String::~String(aSStack_18);
  }
  else {
    uVar2 = 0;
  }
  String::~String(aSStack_30);
  return uVar2;
}


