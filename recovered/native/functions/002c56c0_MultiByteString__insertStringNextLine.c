/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c56c0 MultiByteString::insertStringNextLine */

/* MultiByteString::insertStringNextLine(String*, String*, int) */

int MultiByteString::insertStringNextLine(String *param_1,String *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_60;
  int local_5c;
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [6];
  short sStack_3a;
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  String::String(aSStack_50,param_1);
  iVar1 = operator==(aSStack_50,0);
  iVar4 = 1;
  if (iVar1 == 0) {
    String::String(aSStack_48,param_2);
    iVar4 = operator==(aSStack_48,0);
    String::~String(aSStack_48);
  }
  iVar1 = 0;
  String::~String(aSStack_50);
  if (iVar4 == 0) {
    String::String(aSStack_40,param_2);
    String::String(aSStack_38,(char *)(DAT_002c5860 + 0x2c5728));
    String::operator=(param_1,aSStack_38);
    String::~String(aSStack_38);
    local_5c = 0;
    local_60 = 0;
    for (iVar4 = 0; iVar4 < sStack_3a; iVar4 = iVar4 + 1) {
      iVar2 = String::charAt(aSStack_40,iVar4);
      if ((iVar2 == 10) || (param_3 <= local_5c)) {
        String::substring((int)aSStack_30,(int)aSStack_40);
        String::operator+=(param_1,aSStack_30);
        String::~String(aSStack_30);
        String::String(aSStack_28,(char *)(DAT_002c5864 + 0x2c57d6));
        String::operator+=(param_1,aSStack_28);
        String::~String(aSStack_28);
        local_60 = iVar4 + (uint)(iVar2 == 10);
        iVar1 = iVar1 + 1;
        local_5c = 0;
      }
      else {
        uVar3 = 1;
        if ((((0x1f < (iVar2 + 0x40U & 0xff)) && (uVar3 = 2, 0xf < (iVar2 + 0x20U & 0xff))) &&
            (uVar3 = 3, 7 < (iVar2 + 0x10U & 0xff))) && (uVar3 = 4, 3 < (iVar2 + 8U & 0xff))) {
          uVar3 = -(uint)((iVar2 + 4U & 0xff) < 2) & 5;
        }
        iVar4 = iVar4 + uVar3;
        local_5c = local_5c + 1;
      }
    }
    if (local_60 < sStack_3a) {
      String::substring((int)aSStack_20,(int)aSStack_40);
      String::operator+=(param_1,aSStack_20);
      String::~String(aSStack_20);
      iVar1 = iVar1 + 1;
    }
    String::~String(aSStack_40);
  }
  return iVar1;
}


