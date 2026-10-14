/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001cc3d8 GameStateChangeHard::layout_savedataUpload_faild */

/* GameStateChangeHard::layout_savedataUpload_faild() */

void __thiscall GameStateChangeHard::layout_savedataUpload_faild(GameStateChangeHard *this)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  int *piVar6;
  int iVar7;
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar2 = DAT_001cc538;
  piVar6 = *(int **)(this + 0x2c);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar7 = piVar6[3];
  pcVar5 = *(code **)(*piVar6 + 0x14);
  iVar3 = SmDev();
  uVar4 = __floatunsisf(*(undefined4 *)(iVar3 * 4 + iVar2 + 0x1cc3fa));
  __mulsf3(uVar4,*(undefined4 *)(this + 0xbc));
  uVar4 = __fixsfsi();
  (*pcVar5)(piVar6,(int)sVar1,uVar4);
  piVar6 = *(int **)(this + 0x30);
  pcVar5 = *(code **)(*piVar6 + 0x14);
  iVar3 = SmDev();
  uVar4 = __floatunsisf(*(undefined4 *)(iVar2 + 0x1cc3fa + iVar3 * 4 + 0x18));
  __mulsf3(uVar4,*(undefined4 *)(this + 0xbc));
  uVar4 = __fixsfsi();
  (*pcVar5)(piVar6,iVar7 / 2,uVar4);
  String::String(aSStack_40,(char *)(DAT_001cc53c + 0x1cc454));
  piVar6 = *(int **)(this + 0x30);
  pcVar5 = *(code **)(*piVar6 + 0x44);
  String::String(aSStack_38,aSStack_40);
  (*pcVar5)(piVar6,aSStack_38);
  String::~String(aSStack_38);
  (**(code **)(**(int **)(this + 0x30) + 0x20))(*(int **)(this + 0x30),1);
  (**(code **)(**(int **)(this + 0x34) + 0x14))
            (*(int **)(this + 0x34),(int)sVar1,*(int *)(*(int *)(this + 0x2c) + 0x10) / 2);
  String::String(aSStack_30,(char *)(DAT_001cc540 + 0x1cc496));
  String::operator=(aSStack_40,aSStack_30);
  String::~String(aSStack_30);
  String::String(aSStack_28,(char *)(DAT_001cc544 + 0x1cc4ae));
  MultiByteString::insertStringNextLine(aSStack_28,aSStack_40,0x1e);
  piVar6 = *(int **)(this + 0x34);
  pcVar5 = *(code **)(*piVar6 + 0x44);
  String::String(aSStack_20,aSStack_28);
  (*pcVar5)(piVar6,aSStack_20);
  String::~String(aSStack_20);
  (**(code **)(**(int **)(this + 0x34) + 0x20))(*(int **)(this + 0x34),1);
  (**(code **)(**(int **)(this + 0x38) + 0x20))(*(int **)(this + 0x38),0);
  (**(code **)(**(int **)(this + 0x3c) + 0x20))(*(int **)(this + 0x3c),0);
  (**(code **)(**(int **)(this + 0x4c) + 0x20))(*(int **)(this + 0x4c),0);
  String::~String(aSStack_28);
  String::~String(aSStack_40);
  return;
}


