/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ccb0c GameStateChangeHard::layout_passward_error_draw */

/* GameStateChangeHard::layout_passward_error_draw(int) */

void __thiscall
GameStateChangeHard::layout_passward_error_draw(GameStateChangeHard *this,int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  JSONTakeOverData *pJVar6;
  char *pcVar7;
  ImageElement *this_00;
  code *pcVar8;
  int iVar9;
  int *piVar10;
  GameStateChangeHard *pGVar11;
  undefined8 uVar12;
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  StringUtil aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar2 = DAT_001ccd3c;
  piVar10 = *(int **)(this + 0x2c);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  pcVar8 = *(code **)(*piVar10 + 0x14);
  iVar3 = SmDev();
  pGVar11 = this + 0xbc;
  uVar4 = __floatunsisf(*(undefined4 *)(iVar3 * 4 + iVar2 + 0x1ccb30));
  __mulsf3(uVar4,*(undefined4 *)pGVar11);
  uVar4 = __fixsfsi();
  (*pcVar8)(piVar10,(int)sVar1,uVar4);
  iVar3 = DAT_001ccd40;
  this_00 = *(ImageElement **)(this + 0x2c);
  iVar5 = SmDev();
  __mulsf3(*(undefined4 *)(iVar3 + 0x1ccb5a + iVar5 * 4 + 8),*(undefined4 *)(this + 0xb8));
  iVar5 = SmDev();
  uVar12 = __mulsf3(*(undefined4 *)(iVar3 + 0x1ccb5a + iVar5 * 4 + 0x20),*(undefined4 *)pGVar11);
  ImageElement::setScale(this_00,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
  piVar10 = *(int **)(this + 0x30);
  iVar5 = *(int *)(*(int *)(this + 0x2c) + 0x10);
  pcVar8 = *(code **)(*piVar10 + 0x14);
  iVar9 = *(int *)(*(int *)(this + 0x2c) + 0xc) / 2;
  iVar3 = SmDev();
  uVar4 = __floatunsisf(*(undefined4 *)(iVar2 + 0x1ccb30 + iVar3 * 4 + 0x18));
  __mulsf3(uVar4,*(undefined4 *)pGVar11);
  uVar4 = __fixsfsi();
  (*pcVar8)(piVar10,iVar9,uVar4);
  String::String(aSStack_60,(char *)(DAT_001ccd44 + 0x1ccbc6));
  pJVar6 = (JSONTakeOverData *)JSONTakeOverData::getInstance();
  pcVar7 = (char *)JSONTakeOverData::GetTitle(pJVar6);
  String::operator=(aSStack_60,pcVar7);
  piVar10 = *(int **)(this + 0x30);
  pcVar8 = *(code **)(*piVar10 + 0x44);
  String::String(aSStack_58,aSStack_60);
  (*pcVar8)(piVar10,aSStack_58);
  String::~String(aSStack_58);
  (**(code **)(**(int **)(this + 0x30) + 0x20))(*(int **)(this + 0x30),1);
  (**(code **)(**(int **)(this + 0x34) + 0x14))(*(int **)(this + 0x34),iVar9,iVar5 / 2);
  pJVar6 = (JSONTakeOverData *)JSONTakeOverData::getInstance();
  pcVar7 = (char *)JSONTakeOverData::GetMessege(pJVar6);
  String::String(aSStack_50,(char *)(DAT_001ccd48 + 0x1ccc20));
  String::operator=(aSStack_60,aSStack_50);
  String::~String(aSStack_50);
  String::String(aSStack_48,pcVar7);
  String::String(aSStack_40,(char *)(DAT_001ccd4c + 0x1ccc40));
  String::String(aSStack_38,(char *)(DAT_001ccd50 + 0x1ccc4a));
  StringUtil::replace(aSStack_30,aSStack_48,aSStack_40,aSStack_38);
  String::operator=(aSStack_60,aSStack_30);
  String::~String((String *)aSStack_30);
  String::~String(aSStack_38);
  String::~String(aSStack_40);
  String::~String(aSStack_48);
  piVar10 = *(int **)(this + 0x34);
  pcVar8 = *(code **)(*piVar10 + 0x44);
  String::String(aSStack_28,aSStack_60);
  (*pcVar8)(piVar10,aSStack_28);
  String::~String(aSStack_28);
  (**(code **)(**(int **)(this + 0x34) + 0x20))(*(int **)(this + 0x34),1);
  (**(code **)(**(int **)(this + 0x38) + 0x20))(*(int **)(this + 0x38),0);
  if ((4 < param_1 - 0xd2U) && (param_1 != 0x19a)) {
    piVar10 = *(int **)(this + 0x34);
    pcVar8 = *(code **)(*piVar10 + 0x44);
    String::String(aSStack_20,(char *)(DAT_001ccd54 + 0x1cccc4));
    (*pcVar8)(piVar10,aSStack_20);
    String::~String(aSStack_20);
  }
  (**(code **)(**(int **)(this + 0x3c) + 0x20))(*(int **)(this + 0x3c),0);
  (**(code **)(**(int **)(this + 0x4c) + 0x20))(*(int **)(this + 0x4c),0);
  String::~String(aSStack_60);
  return;
}


