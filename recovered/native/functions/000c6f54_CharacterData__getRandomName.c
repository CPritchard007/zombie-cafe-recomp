/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c6f54 CharacterData::getRandomName */

/* CharacterData::getRandomName(bool, int) */

CharacterData * __thiscall
CharacterData::getRandomName(CharacterData *this,bool param_1,int param_2)

{
  int iVar1;
  String *this_00;
  int *piVar2;
  int iVar3;
  ZombieCafe *this_01;
  int *piVar4;
  int iVar5;
  int iVar6;
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
  
  String::String((String *)this);
  if (param_2 != 0) {
    iVar1 = CapcomApp::getInstance();
    this_01 = *(ZombieCafe **)(iVar1 + 4);
    iVar1 = ZombieCafe::isGaistColabo_Bana(this_01,param_2);
    if (iVar1 != 0) {
      String::String(aSStack_68,(char *)(DAT_000c715c + 0xc6f82));
      String::operator=((String *)this,aSStack_68);
      this_00 = aSStack_68;
      goto LAB_000c70f4;
    }
    iVar1 = ZombieCafe::isGaistColabo_Rekka(this_01,param_2);
    if (iVar1 != 0) {
      String::String(aSStack_60,(char *)(DAT_000c7160 + 0xc6fa4));
      String::operator=((String *)this,aSStack_60);
      this_00 = aSStack_60;
      goto LAB_000c70f4;
    }
    iVar1 = ZombieCafe::isGaistColabo_Sango(this_01,param_2);
    if (iVar1 != 0) {
      String::String(aSStack_58,(char *)(DAT_000c7164 + 0xc6fc6));
      String::operator=((String *)this,aSStack_58);
      this_00 = aSStack_58;
      goto LAB_000c70f4;
    }
    iVar1 = ZombieCafe::isGaistColabo_Bana2(this_01,param_2);
    if (iVar1 != 0) {
      String::String(aSStack_50,(char *)(DAT_000c7168 + 0xc6fe8));
      String::operator=((String *)this,aSStack_50);
      this_00 = aSStack_50;
      goto LAB_000c70f4;
    }
    iVar1 = ZombieCafe::isGaistColabo_Rekka2(this_01,param_2);
    if (iVar1 != 0) {
      String::String(aSStack_48,(char *)(DAT_000c716c + 0xc700a));
      String::operator=((String *)this,aSStack_48);
      this_00 = aSStack_48;
      goto LAB_000c70f4;
    }
    iVar1 = ZombieCafe::isGaistColabo_Kuma(this_01,param_2);
    if (iVar1 != 0) {
      String::String(aSStack_40,(char *)(DAT_000c7170 + 0xc702c));
      String::operator=((String *)this,aSStack_40);
      this_00 = aSStack_40;
      goto LAB_000c70f4;
    }
    iVar1 = ZombieCafe::isGaistColabo_Kohaku(this_01,param_2);
    if (iVar1 != 0) {
      String::String(aSStack_38,(char *)(DAT_000c7174 + 0xc704e));
      String::operator=((String *)this,aSStack_38);
      this_00 = aSStack_38;
      goto LAB_000c70f4;
    }
    iVar1 = ZombieCafe::isGaistColabo_Hisui(this_01,param_2);
    if (iVar1 != 0) {
      String::String(aSStack_30,(char *)(DAT_000c7178 + 0xc7070));
      String::operator=((String *)this,aSStack_30);
      this_00 = aSStack_30;
      goto LAB_000c70f4;
    }
  }
  piVar2 = *(int **)(DAT_000c717c + 0xc708a);
  piVar4 = *(int **)(DAT_000c7180 + 0xc708c);
  if (param_1) {
    iVar1 = CapcomApp::getInstance();
    iVar3 = *piVar2;
    iVar6 = *(int *)(*(int *)(iVar1 + 4) + 0x4b0);
    iVar5 = *piVar4;
    iVar1 = CapcomMath::random(**(int **)(DAT_000c7184 + 0xc70d2));
    String::String(aSStack_20,(String *)(*(int *)(iVar6 + 8) + (iVar3 + iVar5 + iVar1) * 8));
    String::operator=((String *)this,aSStack_20);
    this_00 = aSStack_20;
  }
  else {
    iVar1 = CapcomApp::getInstance();
    iVar3 = *piVar2;
    iVar5 = *(int *)(*(int *)(iVar1 + 4) + 0x4b0);
    iVar1 = CapcomMath::random(*piVar4);
    String::String(aSStack_28,(String *)(*(int *)(iVar5 + 8) + (iVar3 + iVar1) * 8));
    String::operator=((String *)this,aSStack_28);
    this_00 = aSStack_28;
  }
LAB_000c70f4:
  String::~String(this_00);
  return this;
}


