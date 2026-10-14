/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002253bc SaveDataInfo::setSaveData */

/* SaveDataInfo::setSaveData(ZombieCafe*, String) */

void __thiscall SaveDataInfo::setSaveData(SaveDataInfo *this,ZombieCafe *param_1,String *param_3)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  String aSStack_80 [8];
  String aSStack_78 [8];
  String aSStack_70 [8];
  String aSStack_68 [8];
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  if (param_1 != (ZombieCafe *)0x0) {
    piVar3 = *(int **)(this + 0x74);
    pcVar2 = *(code **)(*piVar3 + 0x44);
    String::String(aSStack_80,param_3);
    (*pcVar2)(piVar3,aSStack_80);
    String::~String(aSStack_80);
    piVar3 = *(int **)(this + 0x78);
    pcVar2 = *(code **)(*piVar3 + 0x44);
    Vector<String>::elementAt((int)aSStack_78);
    String::valueOf((int)aSStack_70);
    String::operator+(aSStack_68,aSStack_78,aSStack_70);
    (*pcVar2)(piVar3,aSStack_68);
    String::~String(aSStack_68);
    String::~String(aSStack_70);
    String::~String(aSStack_78);
    iVar1 = *(int *)(param_1 + DAT_0022558c);
    iVar4 = *(int *)(*(int *)(param_1 + 0x680) * 4 + **(int **)(DAT_00225590 + 0x225444));
    piVar3 = *(int **)(this + 0x80);
    pcVar2 = *(code **)(*piVar3 + 0x44);
    String::valueOf((int)aSStack_60);
    String::String(aSStack_58,(char *)(DAT_00225594 + 0x22545e));
    String::operator+(aSStack_50,aSStack_60,aSStack_58);
    String::valueOf((int)aSStack_48);
    String::operator+(aSStack_40,aSStack_50,aSStack_48);
    String::String(aSStack_38,(char *)(DAT_00225598 + 0x225484));
    String::operator+(aSStack_30,aSStack_40,aSStack_38);
    (*pcVar2)(piVar3,aSStack_30);
    String::~String(aSStack_30);
    String::~String(aSStack_38);
    String::~String(aSStack_40);
    String::~String(aSStack_48);
    String::~String(aSStack_50);
    String::~String(aSStack_58);
    String::~String(aSStack_60);
    ProgressBar::setMaximumValue(*(ProgressBar **)(this + 0x7c),iVar4);
    ProgressBar::setValue(*(ProgressBar **)(this + 0x7c),iVar1,false);
    piVar3 = *(int **)(this + 0x8c);
    pcVar2 = *(code **)(*piVar3 + 0x44);
    String::valueOf((int)aSStack_28);
    (*pcVar2)(piVar3,aSStack_28);
    String::~String(aSStack_28);
    piVar3 = *(int **)(this + 0xa0);
    pcVar2 = *(code **)(*piVar3 + 0x44);
    ZombieCafe::getToxin(param_1);
    String::valueOf((int)aSStack_20);
    (*pcVar2)(piVar3,aSStack_20);
    String::~String(aSStack_20);
  }
  return;
}


