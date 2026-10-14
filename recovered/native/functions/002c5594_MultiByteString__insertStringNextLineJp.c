/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c5594 MultiByteString::insertStringNextLineJp */

/* MultiByteString::insertStringNextLineJp(String*, String*, int) */

int MultiByteString::insertStringNextLineJp(String *param_1,String *param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  String aSStack_58 [6];
  short sStack_52;
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  String::String(aSStack_58,param_2);
  String::String(aSStack_50,(char *)(DAT_002c56b4 + 0x2c55aa));
  String::operator=(param_1,aSStack_50);
  String::~String(aSStack_50);
  if (sStack_52 < param_3) {
    String::String(aSStack_48,aSStack_58);
    String::operator+=(param_1,aSStack_48);
    String::~String(aSStack_48);
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
    pcVar1 = (char *)(DAT_002c56b8 + 0x2c55ea);
    for (iVar3 = param_3; iVar3 < sStack_52; iVar3 = iVar3 + param_3) {
      String::substring((int)aSStack_28,(int)aSStack_58);
      String::operator+=(param_1,aSStack_28);
      String::~String(aSStack_28);
      String::String(aSStack_20,pcVar1);
      String::operator+=(param_1,aSStack_20);
      String::~String(aSStack_20);
      iVar2 = iVar2 + 1;
    }
    String::substring(aSStack_40,(int)aSStack_58);
    String::String(aSStack_38,(char *)(DAT_002c56bc + 0x2c5602));
    String::operator+(aSStack_30,aSStack_40,aSStack_38);
    String::operator+=(param_1,aSStack_30);
    String::~String(aSStack_30);
    String::~String(aSStack_38);
    String::~String(aSStack_40);
    iVar2 = iVar2 + 1;
  }
  String::~String(aSStack_58);
  return iVar2;
}


