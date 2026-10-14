/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001cb940 GameStateChangeHard::layout_mode_select */

/* GameStateChangeHard::layout_mode_select() */

void __thiscall GameStateChangeHard::layout_mode_select(GameStateChangeHard *this)

{
  size_t sVar1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  String *this_00;
  undefined4 uVar6;
  int iVar7;
  code *pcVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  piVar9 = *(int **)(this + 0x2c);
  iVar7 = (int)*(short *)(*(int *)(this + 0xc) + 0x16);
  sVar1 = strlen(*(char **)(DAT_001cbc78 + 0x1cb954));
  iVar5 = DAT_001cbc80;
  iVar10 = piVar9[3];
  sVar2 = strlen(*(char **)(DAT_001cbc7c + 0x1cb966));
  pcVar8 = *(code **)(*piVar9 + 0x14);
  iVar3 = SmDev();
  uVar4 = __floatunsisf(*(undefined4 *)(iVar3 * 4 + iVar5 + 0x1cb972));
  __mulsf3(uVar4,*(undefined4 *)(this + 0xbc));
  uVar4 = __fixsfsi();
  (*pcVar8)(piVar9,iVar7,uVar4);
  (**(code **)(**(int **)(this + 0x30) + 0x20))(*(int **)(this + 0x30),0);
  piVar9 = *(int **)(this + 0x30);
  pcVar8 = *(code **)(*piVar9 + 0x14);
  SmDev();
  (*pcVar8)(piVar9,iVar10 / 2);
  piVar9 = *(int **)(this + 0x30);
  pcVar8 = *(code **)(*piVar9 + 0x44);
  String::String(aSStack_50,(char *)(DAT_001cbc84 + 0x1cb9ce));
  (*pcVar8)(piVar9,aSStack_50);
  bVar11 = sVar1 < 3;
  bVar12 = sVar2 < 3;
  String::~String(aSStack_50);
  piVar9 = *(int **)(this + 0x34);
  pcVar8 = *(code **)(*piVar9 + 0x14);
  iVar5 = SmDev();
  uVar4 = __floatunsisf(*(undefined4 *)(DAT_001cbc88 + iVar5 * 4 + 0x1cba36));
  __mulsf3(uVar4,*(undefined4 *)(this + 0xbc));
  uVar4 = __fixsfsi();
  (*pcVar8)(piVar9,iVar10 / 2,uVar4);
  String::String(aSStack_48,(char *)(DAT_001cbc8c + 0x1cba2a));
  if (bVar11) {
    if (bVar12) goto LAB_001cba6a;
    String::String(aSStack_38,(char *)(DAT_001cbc94 + 0x1cba5c));
    String::operator=(aSStack_48,aSStack_38);
    this_00 = aSStack_38;
  }
  else if (bVar12) {
LAB_001cba6a:
    String::String(aSStack_30,(char *)(DAT_001cbc98 + 0x1cba72));
    String::operator=(aSStack_48,aSStack_30);
    this_00 = aSStack_30;
  }
  else {
    String::String(aSStack_40,(char *)(DAT_001cbc90 + 0x1cba40));
    String::operator=(aSStack_48,aSStack_40);
    this_00 = aSStack_40;
  }
  String::~String(this_00);
  String::String(aSStack_28,(char *)(DAT_001cbc9c + 0x1cba8a));
  MultiByteString::insertStringNextLine(aSStack_28,aSStack_48,0x1a);
  piVar9 = *(int **)(this + 0x34);
  pcVar8 = *(code **)(*piVar9 + 0x44);
  String::String(aSStack_20,aSStack_28);
  (*pcVar8)(piVar9,aSStack_20);
  String::~String(aSStack_20);
  (**(code **)(**(int **)(this + 0x38) + 0x20))(*(int **)(this + 0x38),0);
  piVar9 = *(int **)(this + 0x3c);
  pcVar8 = *(code **)(*piVar9 + 0x14);
  iVar5 = SmDev();
  uVar4 = __floatunsisf(*(undefined4 *)(DAT_001cbca0 + iVar5 * 4 + 0x1cbb1c));
  __mulsf3(uVar4,*(undefined4 *)(this + 0xbc));
  uVar4 = __fixsfsi();
  (*pcVar8)(piVar9,iVar7 / 2,uVar4);
  piVar9 = *(int **)(this + 0x44);
  pcVar8 = *(code **)(*piVar9 + 0x14);
  iVar3 = *(int *)(*(int *)(this + 0x3c) + 0xc);
  iVar5 = SmDev();
  uVar4 = __floatunsisf(*(undefined4 *)(DAT_001cbca4 + iVar5 * 4 + 0x1cbb6c));
  __mulsf3(uVar4,*(undefined4 *)(this + 0xbc));
  uVar4 = __fixsfsi();
  (*pcVar8)(piVar9,iVar3 / 2,uVar4);
  piVar9 = *(int **)(this + 0x40);
  pcVar8 = *(code **)(*piVar9 + 0x14);
  iVar3 = *(int *)(*(int *)(this + 0x3c) + 0xc);
  iVar5 = SmDev();
  uVar4 = __floatunsisf(*(undefined4 *)(DAT_001cbca8 + iVar5 * 4 + 0x1cbbbc));
  __mulsf3(uVar4,*(undefined4 *)(this + 0xbc));
  uVar4 = __fixsfsi();
  (*pcVar8)(piVar9,iVar3 / 2,uVar4);
  (**(code **)(**(int **)(this + 0x48) + 0x14))
            (*(int **)(this + 0x48),*(int *)(*(int *)(this + 0x40) + 0xc) / 2,
             *(int *)(*(int *)(this + 0x40) + 0x10) / 2);
  if ((bVar11) || (uVar4 = 1, bVar12)) {
    uVar4 = 0;
  }
  (**(code **)(**(int **)(this + 0x3c) + 0x20))(*(int **)(this + 0x3c),uVar4);
  piVar9 = *(int **)(this + 0x4c);
  pcVar8 = *(code **)(*piVar9 + 0x14);
  iVar5 = SmDev();
  uVar4 = __floatunsisf(*(undefined4 *)(DAT_001cbcac + iVar5 * 4 + 0x1cbbf8));
  __mulsf3(uVar4,*(undefined4 *)(this + 0xbc));
  uVar4 = __fixsfsi();
  (*pcVar8)(piVar9,(iVar7 * 3) / 2,uVar4);
  piVar9 = *(int **)(this + 0x54);
  pcVar8 = *(code **)(*piVar9 + 0x14);
  iVar3 = *(int *)(*(int *)(this + 0x4c) + 0xc);
  iVar5 = SmDev();
  uVar4 = __floatunsisf(*(undefined4 *)(DAT_001cbcb0 + iVar5 * 4 + 0x1cbbf8));
  __mulsf3(uVar4,*(undefined4 *)(this + 0xbc));
  uVar4 = __fixsfsi();
  (*pcVar8)(piVar9,iVar3 / 2,uVar4);
  piVar9 = *(int **)(this + 0x50);
  pcVar8 = *(code **)(*piVar9 + 0x14);
  iVar3 = *(int *)(*(int *)(this + 0x4c) + 0xc);
  iVar5 = SmDev();
  uVar4 = __floatunsisf(*(undefined4 *)(DAT_001cbcb4 + iVar5 * 4 + 0x1cbc48));
  __mulsf3(uVar4,*(undefined4 *)(this + 0xbc));
  uVar4 = __fixsfsi();
  (*pcVar8)(piVar9,iVar3 / 2,uVar4);
  (**(code **)(**(int **)(this + 0x58) + 0x14))
            (*(int **)(this + 0x58),*(int *)(*(int *)(this + 0x50) + 0xc) / 2,
             *(int *)(*(int *)(this + 0x50) + 0x10) / 2);
  if (bVar11) {
    if (bVar12) goto LAB_001cbcb8;
    piVar9 = *(int **)(this + 0x3c);
  }
  else {
    if (bVar12) {
LAB_001cbcb8:
      piVar9 = *(int **)(this + 0x4c);
      uVar4 = 0;
      pcVar8 = *(code **)(*piVar9 + 0x20);
      goto LAB_001cbcc0;
    }
    piVar9 = *(int **)(this + 0x4c);
  }
  uVar4 = 1;
  pcVar8 = *(code **)(*piVar9 + 0x20);
LAB_001cbcc0:
  (*pcVar8)(piVar9,uVar4);
  piVar9 = *(int **)(this + 0x5c);
  pcVar8 = *(code **)(*piVar9 + 0x14);
  iVar5 = SmDev();
  uVar4 = *(undefined4 *)(iVar5 * 4 + *(int *)(DAT_001cbd54 + 0x1cbcd6));
  iVar5 = SmDev();
  uVar4 = __fixsfsi(uVar4);
  uVar6 = __fixsfsi(*(undefined4 *)(iVar5 * 4 + *(int *)(DAT_001cbd58 + 0x1cbcee)));
  (*pcVar8)(piVar9,uVar4,uVar6);
  (**(code **)(**(int **)(this + 0x5c) + 0x20))(*(int **)(this + 0x5c),1);
  String::~String(aSStack_28);
  String::~String(aSStack_48);
  return;
}


