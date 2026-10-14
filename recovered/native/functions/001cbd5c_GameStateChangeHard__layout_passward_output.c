/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001cbd5c GameStateChangeHard::layout_passward_output */

/* GameStateChangeHard::layout_passward_output() */

void __thiscall GameStateChangeHard::layout_passward_output(GameStateChangeHard *this)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  int *piVar6;
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar2 = DAT_001cbe64;
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  (**(code **)(**(int **)(this + 0x30) + 0x20))(*(int **)(this + 0x30),0);
  piVar6 = *(int **)(this + 0x2c);
  pcVar5 = *(code **)(*piVar6 + 0x14);
  iVar3 = SmDev();
  uVar4 = __floatunsisf(*(undefined4 *)(iVar3 * 4 + iVar2 + 0x1cbd7c));
  __mulsf3(uVar4,*(undefined4 *)(this + 0xbc));
  uVar4 = __fixsfsi();
  (*pcVar5)(piVar6,(int)sVar1,uVar4);
  (**(code **)(**(int **)(this + 0x30) + 0x20))(*(int **)(this + 0x30),0);
  piVar6 = *(int **)(this + 0x34);
  pcVar5 = *(code **)(*piVar6 + 0x14);
  iVar3 = SmDev();
  uVar4 = __floatunsisf(*(undefined4 *)(iVar2 + 0x1cbd7c + iVar3 * 4 + 0x30));
  __mulsf3(uVar4,*(undefined4 *)(this + 0xbc));
  uVar4 = __fixsfsi();
  (*pcVar5)(piVar6,(int)sVar1,uVar4);
  String::String(aSStack_30,(char *)(DAT_001cbe68 + 0x1cbde0));
  String::String(aSStack_28,(char *)(DAT_001cbe6c + 0x1cbdea));
  MultiByteString::insertStringNextLine(aSStack_28,aSStack_30,0x1e);
  piVar6 = *(int **)(this + 0x34);
  pcVar5 = *(code **)(*piVar6 + 0x44);
  String::String(aSStack_20,aSStack_28);
  (*pcVar5)(piVar6,aSStack_20);
  String::~String(aSStack_20);
  (**(code **)(**(int **)(this + 0x38) + 0x20))(*(int **)(this + 0x38),1);
  (**(code **)(**(int **)(this + 0x38) + 0x20))(*(int **)(this + 0x38),0);
  (**(code **)(**(int **)(this + 0x3c) + 0x20))(*(int **)(this + 0x3c),0);
  (**(code **)(**(int **)(this + 0x4c) + 0x20))(*(int **)(this + 0x4c),0);
  String::~String(aSStack_28);
  String::~String(aSStack_30);
  return;
}


