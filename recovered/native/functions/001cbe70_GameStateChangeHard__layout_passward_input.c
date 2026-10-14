/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001cbe70 GameStateChangeHard::layout_passward_input */

/* GameStateChangeHard::layout_passward_input() */

void __thiscall GameStateChangeHard::layout_passward_input(GameStateChangeHard *this)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  code *pcVar7;
  GameStateChangeHard *pGVar8;
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  piVar5 = *(int **)(this + 0x60);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar4 = *(int *)(*(int *)(this + 0x2c) + 0xc);
  iVar6 = DAT_001cc028 + 0x1cbe8e;
  pcVar7 = *(code **)(*piVar5 + 0x14);
  iVar2 = SmDev();
  (*pcVar7)(piVar5,(int)sVar1,*(undefined4 *)(iVar6 + iVar2 * 4 + 0x40));
  (**(code **)(**(int **)(this + 100) + 0x14))
            (*(int **)(this + 100),*(int *)(*(int *)(this + 0x60) + 0xc) / 2,
             *(int *)(*(int *)(this + 0x60) + 0x10) / 2);
  piVar5 = *(int **)(this + 0x2c);
  pGVar8 = this + 0xbc;
  pcVar7 = *(code **)(*piVar5 + 0x14);
  iVar2 = SmDev();
  uVar3 = __floatunsisf(*(undefined4 *)(iVar2 * 4 + DAT_001cc02c + 0x1cbed0));
  __mulsf3(uVar3,*(undefined4 *)pGVar8);
  uVar3 = __fixsfsi();
  (*pcVar7)(piVar5,(int)sVar1,uVar3);
  (**(code **)(**(int **)(this + 0x30) + 0x20))(*(int **)(this + 0x30),0);
  piVar5 = *(int **)(this + 0x34);
  pcVar7 = *(code **)(*piVar5 + 0x14);
  iVar4 = iVar4 / 2;
  iVar2 = SmDev();
  uVar3 = __floatunsisf(*(undefined4 *)(iVar6 + iVar2 * 4 + 0x58));
  __mulsf3(uVar3,*(undefined4 *)pGVar8);
  uVar3 = __fixsfsi();
  (*pcVar7)(piVar5,iVar4,uVar3);
  String::String(aSStack_40,(char *)(DAT_001cc030 + 0x1cbf2e));
  String::String(aSStack_38,(char *)(DAT_001cc034 + 0x1cbf38));
  MultiByteString::insertStringNextLine(aSStack_38,aSStack_40,0x1e);
  piVar5 = *(int **)(this + 0x34);
  pcVar7 = *(code **)(*piVar5 + 0x44);
  String::String(aSStack_30,aSStack_38);
  (*pcVar7)(piVar5,aSStack_30);
  String::~String(aSStack_30);
  (**(code **)(**(int **)(this + 0x34) + 0x20))(*(int **)(this + 0x34),1);
  piVar5 = *(int **)(this + 0x38);
  pcVar7 = *(code **)(*piVar5 + 0x14);
  iVar2 = SmDev();
  uVar3 = __floatunsisf(*(undefined4 *)(DAT_001cc038 + iVar2 * 4 + 0x1cbfea));
  __mulsf3(uVar3,*(undefined4 *)pGVar8);
  uVar3 = __fixsfsi();
  (*pcVar7)(piVar5,iVar4,uVar3);
  String::String(aSStack_28,(char *)(DAT_001cc03c + 0x1cbf9a));
  String::operator=(aSStack_40,aSStack_28);
  String::~String(aSStack_28);
  piVar5 = *(int **)(this + 0x38);
  pcVar7 = *(code **)(*piVar5 + 0x44);
  String::String(aSStack_20,aSStack_40);
  (*pcVar7)(piVar5,aSStack_20);
  String::~String(aSStack_20);
  (**(code **)(**(int **)(this + 0x38) + 0x20))(*(int **)(this + 0x38),0);
  (**(code **)(**(int **)(this + 0x60) + 0x20))(*(int **)(this + 0x60),0);
  (**(code **)(**(int **)(this + 0x3c) + 0x20))(*(int **)(this + 0x3c),0);
  (**(code **)(**(int **)(this + 0x4c) + 0x20))(*(int **)(this + 0x4c),0);
  String::~String(aSStack_38);
  String::~String(aSStack_40);
  return;
}


