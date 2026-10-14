/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001cc640 GameStateChangeHard::layout_output_comm_error */

/* GameStateChangeHard::layout_output_comm_error() */

void __thiscall GameStateChangeHard::layout_output_comm_error(GameStateChangeHard *this)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  piVar5 = *(int **)(this + 0x2c);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar6 = piVar5[3];
  pcVar4 = *(code **)(*piVar5 + 0x14);
  iVar2 = SmDev();
  uVar3 = __floatunsisf(*(undefined4 *)(iVar2 * 4 + DAT_001cc748 + 0x1cc662));
  __mulsf3(uVar3,*(undefined4 *)(this + 0xbc));
  uVar3 = __fixsfsi();
  (*pcVar4)(piVar5,(int)sVar1,uVar3);
  (**(code **)(**(int **)(this + 0x30) + 0x20))(*(int **)(this + 0x30),0);
  (**(code **)(**(int **)(this + 0x34) + 0x14))
            (*(int **)(this + 0x34),iVar6 / 2,*(int *)(*(int *)(this + 0x2c) + 0x10) / 2);
  String::String(aSStack_30,(char *)(DAT_001cc74c + 0x1cc6a8));
  String::String(aSStack_28,(char *)(DAT_001cc750 + 0x1cc6b2));
  MultiByteString::insertStringNextLine(aSStack_28,aSStack_30,0x1e);
  piVar5 = *(int **)(this + 0x34);
  pcVar4 = *(code **)(*piVar5 + 0x44);
  String::String(aSStack_20,aSStack_28);
  (*pcVar4)(piVar5,aSStack_20);
  String::~String(aSStack_20);
  (**(code **)(**(int **)(this + 0x34) + 0x20))(*(int **)(this + 0x34),1);
  (**(code **)(**(int **)(this + 0x38) + 0x20))(*(int **)(this + 0x38),0);
  (**(code **)(**(int **)(this + 0x5c) + 0x20))(*(int **)(this + 0x5c),1);
  (**(code **)(**(int **)(this + 0x60) + 0x20))(*(int **)(this + 0x60),0);
  (**(code **)(**(int **)(this + 0x68) + 0x20))(*(int **)(this + 0x68),0);
  (**(code **)(**(int **)(this + 0x3c) + 0x20))(*(int **)(this + 0x3c),0);
  (**(code **)(**(int **)(this + 0x4c) + 0x20))(*(int **)(this + 0x4c),0);
  String::~String(aSStack_28);
  String::~String(aSStack_30);
  return;
}


