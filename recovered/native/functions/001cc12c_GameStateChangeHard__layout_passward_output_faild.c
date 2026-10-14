/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001cc12c GameStateChangeHard::layout_passward_output_faild */

/* GameStateChangeHard::layout_passward_output_faild(int) */

void GameStateChangeHard::layout_passward_output_faild(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  JSONTakeOverData *pJVar5;
  char *pcVar6;
  ImageElement *this;
  code *pcVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  String aSStack_78 [8];
  String aSStack_70 [8];
  String aSStack_68 [8];
  String aSStack_60 [8];
  StringUtil aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  StringUtil aSStack_28 [8];
  String aSStack_20 [12];
  
  piVar8 = *(int **)(param_1 + 0x2c);
  sVar1 = *(short *)(*(int *)(param_1 + 0xc) + 0x16);
  pcVar7 = *(code **)(*piVar8 + 0x14);
  iVar9 = DAT_001cc3b0 + 0x1cc146;
  iVar2 = SmDev();
  puVar10 = (undefined4 *)(param_1 + 0xbc);
  uVar3 = __floatunsisf(*(undefined4 *)(iVar2 * 4 + iVar9));
  __mulsf3(uVar3,*puVar10);
  uVar3 = __fixsfsi();
  (*pcVar7)(piVar8,(int)sVar1,uVar3);
  iVar2 = DAT_001cc3b4;
  this = *(ImageElement **)(param_1 + 0x2c);
  iVar4 = SmDev();
  __mulsf3(*(undefined4 *)(iVar2 + 0x1cc178 + iVar4 * 4 + 8),*(undefined4 *)(param_1 + 0xb8));
  iVar4 = SmDev();
  uVar11 = __mulsf3(*(undefined4 *)(iVar2 + 0x1cc178 + iVar4 * 4 + 0x20),*puVar10);
  ImageElement::setScale(this,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  piVar8 = *(int **)(param_1 + 0x30);
  pcVar7 = *(code **)(*piVar8 + 0x14);
  iVar4 = *(int *)(*(int *)(param_1 + 0x2c) + 0xc) / 2;
  iVar2 = SmDev();
  uVar3 = __floatunsisf(*(undefined4 *)(iVar9 + iVar2 * 4 + 0x18));
  __mulsf3(uVar3,*puVar10);
  uVar3 = __fixsfsi();
  (*pcVar7)(piVar8,iVar4,uVar3);
  (**(code **)(**(int **)(param_1 + 0x30) + 0x20))(*(int **)(param_1 + 0x30),1);
  pJVar5 = (JSONTakeOverData *)JSONTakeOverData::getInstance();
  pcVar6 = (char *)JSONTakeOverData::SetTitle(pJVar5);
  String::String(aSStack_78,(char *)(DAT_001cc3b8 + 0x1cc1f4));
  String::String(aSStack_70,pcVar6);
  String::String(aSStack_68,(char *)(DAT_001cc3bc + 0x1cc206));
  String::String(aSStack_60,(char *)(DAT_001cc3c0 + 0x1cc210));
  StringUtil::replace(aSStack_58,aSStack_70,aSStack_68,aSStack_60);
  String::operator=(aSStack_78,aSStack_58);
  String::~String((String *)aSStack_58);
  String::~String(aSStack_60);
  String::~String(aSStack_68);
  String::~String(aSStack_70);
  piVar8 = *(int **)(param_1 + 0x30);
  pcVar7 = *(code **)(*piVar8 + 0x44);
  String::String(aSStack_50,aSStack_78);
  (*pcVar7)(piVar8,aSStack_50);
  String::~String(aSStack_50);
  (**(code **)(**(int **)(param_1 + 0x30) + 0x20))(*(int **)(param_1 + 0x30),1);
  piVar8 = *(int **)(param_1 + 0x34);
  pcVar7 = *(code **)(*piVar8 + 0x14);
  iVar2 = SmDev();
  uVar3 = __floatunsisf(*(undefined4 *)(DAT_001cc3c4 + iVar2 * 4 + 0x1cc2a4));
  __mulsf3(uVar3,*puVar10);
  uVar3 = __fixsfsi();
  (*pcVar7)(piVar8,iVar4,uVar3);
  pJVar5 = (JSONTakeOverData *)JSONTakeOverData::getInstance();
  pcVar6 = (char *)JSONTakeOverData::SetMessege(pJVar5);
  String::String(aSStack_48,(char *)(DAT_001cc3c8 + 0x1cc29e));
  String::operator=(aSStack_78,aSStack_48);
  String::~String(aSStack_48);
  String::String(aSStack_40,pcVar6);
  String::String(aSStack_38,(char *)(DAT_001cc3cc + 0x1cc2be));
  String::String(aSStack_30,(char *)(DAT_001cc3d0 + 0x1cc2c8));
  StringUtil::replace(aSStack_28,aSStack_40,aSStack_38,aSStack_30);
  String::operator=(aSStack_78,aSStack_28);
  String::~String((String *)aSStack_28);
  String::~String(aSStack_30);
  String::~String(aSStack_38);
  String::~String(aSStack_40);
  printf((char *)(DAT_001cc3d4 + 0x1cc2fe),pcVar6);
  piVar8 = *(int **)(param_1 + 0x34);
  pcVar7 = *(code **)(*piVar8 + 0x44);
  String::String(aSStack_20,aSStack_78);
  (*pcVar7)(piVar8,aSStack_20);
  String::~String(aSStack_20);
  (**(code **)(**(int **)(param_1 + 0x34) + 0x20))(*(int **)(param_1 + 0x34),1);
  (**(code **)(**(int **)(param_1 + 0x38) + 0x20))(*(int **)(param_1 + 0x38),0);
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x20))(*(int **)(param_1 + 0x3c),0);
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x20))(*(int **)(param_1 + 0x4c),0);
  String::~String(aSStack_78);
  return;
}


