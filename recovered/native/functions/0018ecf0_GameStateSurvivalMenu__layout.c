/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018ecf0 GameStateSurvivalMenu::layout */

/* GameStateSurvivalMenu::layout() */

void __thiscall GameStateSurvivalMenu::layout(GameStateSurvivalMenu *this)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  
  CapcomApp::getInstance();
  iVar2 = CapcomApp::getInstance();
  iVar7 = DAT_0018f010;
  uVar3 = *(undefined4 *)(iVar2 + 0x40);
  iVar2 = CapcomApp::getInstance();
  uVar4 = *(undefined4 *)(iVar2 + 0x44);
  iVar7 = iVar7 + 0x18ed10;
  (**(code **)(**(int **)(this + 0x14) + 0x18))
            (*(int **)(this + 0x14),*(int *)(*(int *)(this + 0xc) + 0x10) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x10));
  (**(code **)(**(int **)(this + 0x18) + 0x14))
            (*(int **)(this + 0x18),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  piVar8 = *(int **)(this + 0x20);
  pcVar6 = *(code **)(*piVar8 + 0x14);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar2 = SmDev();
  __mulsf3(uVar4,*(undefined4 *)(iVar2 * 4 + iVar7));
  uVar5 = __fixsfsi();
  (*pcVar6)(piVar8,(int)sVar1,uVar5);
  piVar8 = *(int **)(this + 0x28);
  pcVar6 = *(code **)(*piVar8 + 0x14);
  uVar9 = *(undefined4 *)(*(int *)(this + 0x14) + 0xc);
  iVar2 = SmDev();
  __mulsf3(uVar4,*(undefined4 *)(iVar7 + iVar2 * 4 + 0x18));
  uVar5 = __fixsfsi();
  (*pcVar6)(piVar8,uVar9,uVar5);
  piVar8 = *(int **)(this + 0x1c);
  pcVar6 = *(code **)(*piVar8 + 0x14);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar2 = SmDev();
  __mulsf3(uVar4,*(undefined4 *)(iVar7 + iVar2 * 4 + 0x30));
  uVar5 = __fixsfsi();
  (*pcVar6)(piVar8,(int)sVar1,uVar5);
  NoticeDialog::layout();
  (**(code **)(**(int **)(this + 0x34) + 0x14))
            (*(int **)(this + 0x34),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  ConfirmDialog::layout();
  (**(code **)(**(int **)(this + 0x38) + 0x14))
            (*(int **)(this + 0x38),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  piVar8 = *(int **)(this + 0x44);
  pcVar6 = *(code **)(*piVar8 + 0x14);
  iVar2 = SmDev();
  uVar5 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(DAT_0018f014 + 0x18edf6)));
  iVar2 = SmDev();
  uVar9 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(DAT_0018f018 + 0x18ee0a)));
  (*pcVar6)(piVar8,uVar5,uVar9);
  piVar8 = *(int **)(this + 0x3c);
  pcVar6 = *(code **)(*piVar8 + 0x14);
  iVar2 = SmDev();
  uVar5 = __subsf3(*(undefined4 *)(iVar7 + iVar2 * 4 + 0x48),DAT_0018f01c);
  __mulsf3(uVar5,uVar3);
  uVar5 = __fixsfsi();
  iVar2 = SmDev();
  __mulsf3(uVar4,*(undefined4 *)(iVar7 + iVar2 * 4 + 0x60));
  uVar9 = __fixsfsi();
  uVar11 = (*pcVar6)(piVar8,uVar5,uVar9);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x3c),(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  piVar8 = *(int **)(this + 0x40);
  pcVar6 = *(code **)(*piVar8 + 0x14);
  iVar2 = SmDev();
  uVar5 = __subsf3(*(undefined4 *)(iVar7 + iVar2 * 4 + 0x78),DAT_0018f01c);
  __mulsf3(uVar5,uVar3);
  uVar5 = __fixsfsi();
  iVar7 = SmDev();
  iVar2 = DAT_0018f024 + 0x18ee9a;
  __mulsf3(uVar4,*(undefined4 *)(iVar2 + iVar7 * 4 + 0x10));
  uVar9 = __fixsfsi();
  uVar11 = (*pcVar6)(piVar8,uVar5,uVar9);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x40),(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  pcVar6 = *(code **)(**(int **)(this + 0x48) + 0x14);
  iVar7 = SmDev();
  uVar5 = __subsf3(*(undefined4 *)(iVar2 + iVar7 * 4 + 0x28),DAT_0018f01c);
  uVar5 = __mulsf3(uVar5,uVar3);
  iVar10 = *(int *)(this + 0x48);
  uVar9 = __floatsisf(*(int *)(iVar10 + 0xc) / 2);
  __subsf3(uVar5,uVar9);
  uVar5 = __fixsfsi();
  iVar7 = SmDev();
  __mulsf3(uVar4,*(undefined4 *)(iVar2 + iVar7 * 4 + 0x40));
  uVar9 = __fixsfsi();
  (*pcVar6)(iVar10,uVar5,uVar9);
  pcVar6 = *(code **)(**(int **)(this + 0x4c) + 0x14);
  iVar7 = SmDev();
  uVar5 = __subsf3(*(undefined4 *)(iVar2 + iVar7 * 4 + 0x58),DAT_0018f01c);
  uVar5 = __mulsf3(uVar5,uVar3);
  iVar10 = *(int *)(this + 0x4c);
  uVar9 = __floatsisf(*(int *)(iVar10 + 0xc) / 2);
  __subsf3(uVar5,uVar9);
  uVar5 = __fixsfsi();
  iVar7 = SmDev();
  __mulsf3(uVar4,*(undefined4 *)(iVar2 + iVar7 * 4 + 0x70));
  uVar9 = __fixsfsi();
  uVar11 = (*pcVar6)(iVar10,uVar5,uVar9);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x4c),(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  piVar8 = *(int **)(this + 0x50);
  pcVar6 = *(code **)(*piVar8 + 0x14);
  iVar7 = SmDev();
  uVar5 = __subsf3(*(undefined4 *)(DAT_0018f028 + iVar7 * 4 + 0x18ef94),DAT_0018f01c);
  uVar3 = __mulsf3(uVar5,uVar3);
  uVar5 = __floatsisf(*(int *)(*(int *)(this + 0x48) + 0xc) / 2);
  __subsf3(uVar3,uVar5);
  uVar3 = __fixsfsi();
  iVar7 = SmDev();
  __mulsf3(uVar4,*(undefined4 *)(iVar2 + iVar7 * 4 + 0x40));
  uVar4 = __fixsfsi();
  (*pcVar6)(piVar8,uVar3,uVar4);
  piVar8 = *(int **)(this + 0x8c);
  pcVar6 = *(code **)(*piVar8 + 0x14);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar7 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar2 + iVar7 * 4 + 0x40));
  uVar11 = (*pcVar6)(piVar8,(int)sVar1,uVar3);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x50),(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  return;
}


