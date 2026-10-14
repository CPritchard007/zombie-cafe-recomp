/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ccd58 GameStateChangeHard::layout_download_savedata_error */

/* GameStateChangeHard::layout_download_savedata_error() */

void __thiscall GameStateChangeHard::layout_download_savedata_error(GameStateChangeHard *this)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  piVar5 = *(int **)(this + 0x2c);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar6 = piVar5[3];
  pcVar4 = *(code **)(*piVar5 + 0x14);
  iVar2 = SmDev();
  uVar3 = __floatunsisf(*(undefined4 *)(iVar2 * 4 + DAT_001ccee0 + 0x1ccd7a));
  __mulsf3(uVar3,*(undefined4 *)(this + 0xbc));
  uVar3 = __fixsfsi();
  (*pcVar4)(piVar5,(int)sVar1,uVar3);
  (**(code **)(**(int **)(this + 0x30) + 0x20))(*(int **)(this + 0x30),0);
  (**(code **)(**(int **)(this + 0x34) + 0x14))
            (*(int **)(this + 0x34),iVar6 / 2,*(int *)(*(int *)(this + 0x2c) + 0x10) / 2);
  String::String(aSStack_48,(char *)(DAT_001ccee4 + 0x1ccdc2));
  String::String(aSStack_40,(char *)(DAT_001ccee8 + 0x1ccdcc));
  MultiByteString::insertStringNextLine(aSStack_40,aSStack_48,0x1e);
  piVar5 = *(int **)(this + 0x34);
  pcVar4 = *(code **)(*piVar5 + 0x44);
  String::String(aSStack_38,aSStack_40);
  (*pcVar4)(piVar5,aSStack_38);
  String::~String(aSStack_38);
  (**(code **)(**(int **)(this + 0x34) + 0x20))(*(int **)(this + 0x34),1);
  piVar5 = *(int **)(this + 0x38);
  pcVar4 = *(code **)(*piVar5 + 0x14);
  iVar2 = SmDev();
  uVar3 = __floatunsisf(*(undefined4 *)(DAT_001cceec + iVar2 * 4 + 0x1cce7e));
  __mulsf3(uVar3,*(undefined4 *)(this + 0xbc));
  uVar3 = __fixsfsi();
  (*pcVar4)(piVar5,iVar6 / 2,uVar3);
  String::String(aSStack_30,(char *)(DAT_001ccef0 + 0x1cce32));
  String::operator=(aSStack_48,aSStack_30);
  String::~String(aSStack_30);
  String::String(aSStack_28,(char *)(DAT_001ccef4 + 0x1cce4a));
  String::operator=(aSStack_40,aSStack_28);
  String::~String(aSStack_28);
  MultiByteString::insertStringNextLine(aSStack_40,aSStack_48,0x1e);
  piVar5 = *(int **)(this + 0x38);
  pcVar4 = *(code **)(*piVar5 + 0x44);
  String::String(aSStack_20,aSStack_40);
  (*pcVar4)(piVar5,aSStack_20);
  String::~String(aSStack_20);
  (**(code **)(**(int **)(this + 0x38) + 0x20))(*(int **)(this + 0x38),1);
  (**(code **)(**(int **)(this + 0x3c) + 0x20))(*(int **)(this + 0x3c),0);
  (**(code **)(**(int **)(this + 0x4c) + 0x20))(*(int **)(this + 0x4c),0);
  String::~String(aSStack_40);
  String::~String(aSStack_48);
  return;
}


