/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001cc040 GameStateChangeHard::layout_passward_upload */

/* GameStateChangeHard::layout_passward_upload() */

void __thiscall GameStateChangeHard::layout_passward_upload(GameStateChangeHard *this)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  piVar5 = *(int **)(this + 0x2c);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar6 = piVar5[3];
  pcVar4 = *(code **)(*piVar5 + 0x14);
  iVar7 = piVar5[4];
  iVar2 = SmDev();
  uVar3 = __floatunsisf(*(undefined4 *)(iVar2 * 4 + DAT_001cc120 + 0x1cc066));
  __mulsf3(uVar3,*(undefined4 *)(this + 0xbc));
  uVar3 = __fixsfsi();
  (*pcVar4)(piVar5,(int)sVar1,uVar3);
  (**(code **)(**(int **)(this + 0x34) + 0x14))(*(int **)(this + 0x34),iVar6 / 2,iVar7 / 2);
  String::String(aSStack_30,(char *)(DAT_001cc124 + 0x1cc09e));
  String::String(aSStack_28,(char *)(DAT_001cc128 + 0x1cc0a8));
  MultiByteString::insertStringNextLine(aSStack_28,aSStack_30,0x1e);
  piVar5 = *(int **)(this + 0x34);
  pcVar4 = *(code **)(*piVar5 + 0x44);
  String::String(aSStack_20,aSStack_28);
  (*pcVar4)(piVar5,aSStack_20);
  String::~String(aSStack_20);
  (**(code **)(**(int **)(this + 0x60) + 0x20))(*(int **)(this + 0x60),0);
  (**(code **)(**(int **)(this + 0x38) + 0x20))(*(int **)(this + 0x38),0);
  (**(code **)(**(int **)(this + 0x3c) + 0x20))(*(int **)(this + 0x3c),0);
  (**(code **)(**(int **)(this + 0x4c) + 0x20))(*(int **)(this + 0x4c),0);
  String::~String(aSStack_28);
  String::~String(aSStack_30);
  return;
}


