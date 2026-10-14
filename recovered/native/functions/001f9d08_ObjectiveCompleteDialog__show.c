/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f9d08 ObjectiveCompleteDialog::show */

/* ObjectiveCompleteDialog::show() */

void __thiscall ObjectiveCompleteDialog::show(ObjectiveCompleteDialog *this)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  ObjectiveCompleteDialog *pOVar9;
  code *pcVar10;
  int iVar11;
  int local_50;
  uint local_4c;
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar1 = ObjectiveSystem::getBonusTimeRemaining
                    (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001f9f2c));
  piVar7 = *(int **)(this + 0x9c);
  pcVar10 = *(code **)(*piVar7 + 0x44);
  __divsi3(iVar1 + DAT_001f9f30,DAT_001f9f34);
  String::valueOf((int)aSStack_30);
  (*pcVar10)(piVar7,aSStack_30);
  String::~String(aSStack_30);
  piVar7 = *(int **)(this + 0xa4);
  iVar11 = *(int *)(*(int *)(this + 0x60) + 0x4b0);
  pcVar10 = *(code **)(*piVar7 + 0x44);
  iVar6 = **(int **)(DAT_001f9f38 + 0x1f9d5a);
  iVar1 = ObjectiveSystem::getBonusStreak
                    (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001f9f2c));
  uVar2 = iVar1 - 1;
  if (2 < (int)uVar2) {
    uVar2 = 2;
  }
  String::String(aSStack_28,
                 (String *)(*(int *)(iVar11 + 8) + (iVar6 + (uVar2 & (int)~uVar2 >> 0x1f)) * 8));
  (*pcVar10)(piVar7,aSStack_28);
  String::~String(aSStack_28);
  piVar7 = *(int **)(this + 0xa8);
  pcVar10 = *(code **)(*piVar7 + 0x44);
  iVar11 = *(int *)(*(int *)(this + 0x60) + 0x4b0);
  iVar6 = **(int **)(DAT_001f9f3c + 0x1f9dae);
  iVar1 = ObjectiveSystem::getBonusStreak
                    (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001f9f2c));
  uVar2 = iVar1 - 1;
  if (2 < (int)uVar2) {
    uVar2 = 2;
  }
  String::String(aSStack_20,
                 (String *)(*(int *)(iVar11 + 8) + (iVar6 + (uVar2 & (int)~uVar2 >> 0x1f)) * 8));
  (*pcVar10)(piVar7,aSStack_20);
  String::~String(aSStack_20);
  piVar7 = *(int **)(this + 0xa8);
  pcVar10 = *(code **)(*piVar7 + 0x14);
  iVar1 = SmDev();
  (*pcVar10)(piVar7,*(undefined4 *)(DAT_001f9f40 + iVar1 * 4 + 0x1f9e18),
             *(int *)(*(int *)(this + 0xa4) + 8) + *(int *)(*(int *)(this + 0xa4) + 0x10));
  local_4c = ObjectiveSystem::getBonusStreak
                       (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001f9f2c));
  if ((int)local_4c < 4) {
    local_4c = local_4c & (int)~local_4c >> 0x1f;
  }
  else {
    local_4c = 3;
  }
  iVar1 = CapcomApp::getInstance();
  uVar8 = *(undefined4 *)(iVar1 + 0x40);
  iVar1 = CapcomApp::getInstance();
  uVar8 = __mulsf3(uVar8,*(undefined4 *)(iVar1 + 0x50));
  iVar1 = SmDev();
  iVar6 = CImage::getWidth(*(CImage **)(this + 0x68));
  uVar3 = __floatsisf(*(undefined4 *)(DAT_001f9f44 + iVar1 * 4 + 0x1f9e82));
  uVar4 = __floatsisf(local_4c * iVar6);
  uVar4 = __mulsf3(uVar4,uVar8);
  uVar4 = __mulsf3(uVar4,0x3f000000);
  __subsf3(uVar3,uVar4);
  uVar3 = __fixsfsi();
  iVar1 = DAT_001f9f48;
  pOVar9 = this + 0x84;
  local_50 = 0;
  do {
    piVar7 = *(int **)pOVar9;
    if (local_50 < (int)local_4c) {
      (**(code **)(*piVar7 + 0x20))(piVar7,1);
      piVar7 = *(int **)pOVar9;
      pcVar10 = *(code **)(*piVar7 + 0x14);
      iVar6 = CImage::getWidth(*(CImage **)(this + 0x68));
      iVar11 = SmDev();
      uVar4 = __floatsisf(uVar3);
      uVar5 = __floatsisf(iVar6 * local_50);
      uVar5 = __mulsf3(uVar5,uVar8);
      __addsf3(uVar4,uVar5);
      uVar4 = __fixsfsi();
      (*pcVar10)(piVar7,uVar4,*(undefined4 *)(iVar1 + iVar11 * 4 + 0x1f9ed0));
    }
    else {
      (**(code **)(*piVar7 + 0x20))(piVar7,0);
    }
    pOVar9 = pOVar9 + 4;
    local_50 = local_50 + 1;
  } while (local_50 != 3);
  this[0x14] = (ObjectiveCompleteDialog)0x1;
  return;
}


