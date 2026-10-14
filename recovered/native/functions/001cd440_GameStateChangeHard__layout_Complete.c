/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001cd440 GameStateChangeHard::layout_Complete */

/* GameStateChangeHard::layout_Complete() */

void __thiscall GameStateChangeHard::layout_Complete(GameStateChangeHard *this)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  JSONTakeOverData *this_00;
  char *pcVar4;
  int iVar5;
  code *pcVar6;
  int *piVar7;
  int iVar8;
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  StringUtil aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar5 = DAT_001cd600;
  piVar7 = *(int **)(this + 0x2c);
  iVar8 = piVar7[3];
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  pcVar6 = *(code **)(*piVar7 + 0x14);
  iVar2 = SmDev();
  uVar3 = __floatunsisf(*(undefined4 *)(iVar2 * 4 + iVar5 + 0x1cd462));
  __mulsf3(uVar3,*(undefined4 *)(this + 0xbc));
  uVar3 = __fixsfsi();
  (*pcVar6)(piVar7,(int)sVar1,uVar3);
  piVar7 = *(int **)(this + 0x34);
  pcVar6 = *(code **)(*piVar7 + 0x14);
  iVar2 = SmDev();
  uVar3 = __floatunsisf(*(undefined4 *)(iVar5 + 0x1cd462 + iVar2 * 4 + 0x30));
  __mulsf3(uVar3,*(undefined4 *)(this + 0xbc));
  uVar3 = __fixsfsi();
  (*pcVar6)(piVar7,iVar8 / 2,uVar3);
  this_00 = (JSONTakeOverData *)JSONTakeOverData::getInstance();
  pcVar4 = (char *)JSONTakeOverData::GetMessege(this_00);
  String::String(aSStack_50,(char *)(DAT_001cd604 + 0x1cd4c6));
  String::String(aSStack_48,pcVar4);
  String::String(aSStack_40,(char *)(DAT_001cd608 + 0x1cd4d8));
  String::String(aSStack_38,(char *)(DAT_001cd60c + 0x1cd4e2));
  StringUtil::replace(aSStack_30,aSStack_48,aSStack_40,aSStack_38);
  String::operator=(aSStack_50,aSStack_30);
  String::~String((String *)aSStack_30);
  String::~String(aSStack_38);
  String::~String(aSStack_40);
  String::~String(aSStack_48);
  piVar7 = *(int **)(this + 0x34);
  pcVar6 = *(code **)(*piVar7 + 0x44);
  String::String(aSStack_28,aSStack_50);
  (*pcVar6)(piVar7,aSStack_28);
  String::~String(aSStack_28);
  (**(code **)(**(int **)(this + 0x34) + 0x20))(*(int **)(this + 0x34),1);
  (**(code **)(**(int **)(this + 0x38) + 0x20))(*(int **)(this + 0x38),0);
  piVar7 = *(int **)(this + 0x60);
  pcVar6 = *(code **)(*piVar7 + 0x14);
  iVar5 = SmDev();
  uVar3 = __floatunsisf(*(undefined4 *)(DAT_001cd610 + iVar5 * 4 + 0x1cd568));
  __mulsf3(uVar3,*(undefined4 *)(this + 0xbc));
  uVar3 = __fixsfsi();
  (*pcVar6)(piVar7,(int)sVar1,uVar3);
  piVar7 = *(int **)(this + 100);
  pcVar6 = *(code **)(*piVar7 + 0x44);
  String::String(aSStack_20,(char *)(DAT_001cd614 + 0x1cd578));
  (*pcVar6)(piVar7,aSStack_20);
  String::~String(aSStack_20);
  (**(code **)(**(int **)(this + 0x60) + 0x20))(*(int **)(this + 0x60),1);
  (**(code **)(**(int **)(this + 0x68) + 0x20))(*(int **)(this + 0x68),0);
  (**(code **)(**(int **)(this + 0x5c) + 0x20))(*(int **)(this + 0x5c),0);
  (**(code **)(**(int **)(this + 0x3c) + 0x20))(*(int **)(this + 0x3c),0);
  (**(code **)(**(int **)(this + 0x4c) + 0x20))(*(int **)(this + 0x4c),0);
  String::~String(aSStack_50);
  return;
}


