/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a4b28 GameStateEventRaidMenu::layout */

/* GameStateEventRaidMenu::layout() */

void __thiscall GameStateEventRaidMenu::layout(GameStateEventRaidMenu *this)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  int *piVar7;
  GameStateEventRaidMenu *pGVar8;
  undefined8 uVar9;
  code *local_20;
  
  CapcomApp::getInstance();
  iVar6 = DAT_001a4e44;
  (**(code **)(**(int **)(this + 0x14) + 0x18))
            (*(int **)(this + 0x14),*(int *)(*(int *)(this + 0xc) + 0x10) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x10));
  iVar6 = iVar6 + 0x1a4b50;
  pGVar8 = this + 0xb4;
  (**(code **)(**(int **)(this + 0x18) + 0x14))
            (*(int **)(this + 0x18),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  piVar7 = *(int **)(this + 0x20);
  pcVar5 = *(code **)(*piVar7 + 0x14);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar2 = SmDev();
  __mulsf3(*(undefined4 *)(iVar2 * 4 + iVar6),*(undefined4 *)pGVar8);
  uVar3 = __fixsfsi();
  (*pcVar5)(piVar7,(int)sVar1,uVar3);
  piVar7 = *(int **)(this + 0x24);
  (**(code **)(*piVar7 + 0x14))(piVar7,0,*(int *)(*(int *)(this + 0x14) + 0x10) - piVar7[4]);
  piVar7 = *(int **)(this + 0x1c);
  pcVar5 = *(code **)(*piVar7 + 0x14);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar2 = SmDev();
  __mulsf3(*(undefined4 *)(iVar6 + iVar2 * 4 + 0x18),*(undefined4 *)pGVar8);
  uVar3 = __fixsfsi();
  (*pcVar5)(piVar7,(int)sVar1,uVar3);
  (**(code **)(**(int **)(this + 0x1c) + 0x20))(*(int **)(this + 0x1c),1);
  NoticeDialog::layout();
  (**(code **)(**(int **)(this + 0x48) + 0x14))
            (*(int **)(this + 0x48),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  ConfirmDialog::layout();
  (**(code **)(**(int **)(this + 0x4c) + 0x14))
            (*(int **)(this + 0x4c),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  ConfirmDialog::layout();
  (**(code **)(**(int **)(this + 0x50) + 0x14))
            (*(int **)(this + 0x50),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  piVar7 = *(int **)(this + 0x58);
  pcVar5 = *(code **)(*piVar7 + 0x14);
  iVar2 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(DAT_001a4e48 + 0x1a4c30)));
  iVar2 = SmDev();
  uVar4 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(DAT_001a4e4c + 0x1a4c44)));
  (*pcVar5)(piVar7,uVar3,uVar4);
  piVar7 = *(int **)(this + 0x54);
  pcVar5 = *(code **)(*piVar7 + 0x14);
  iVar2 = SmDev();
  uVar3 = __subsf3(*(undefined4 *)(iVar6 + iVar2 * 4 + 0x30),DAT_001a4e50);
  uVar3 = __subsf3(uVar3,DAT_001a4e50);
  __mulsf3(uVar3,*(undefined4 *)(this + 0xb0));
  uVar3 = __fixsfsi();
  iVar2 = SmDev();
  __mulsf3(*(undefined4 *)(iVar6 + iVar2 * 4 + 0x48),*(undefined4 *)pGVar8);
  uVar4 = __fixsfsi();
  (*pcVar5)(piVar7,uVar3,uVar4);
  (**(code **)(**(int **)(this + 0x98) + 0x14))
            (*(int **)(this + 0x98),*(int *)(*(int *)(this + 0x54) + 0xc) / 2,
             *(int *)(*(int *)(this + 0x54) + 0x10) / 2);
  piVar7 = *(int **)(this + 0x5c);
  pcVar5 = *(code **)(*piVar7 + 0x14);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x12);
  iVar2 = SmDev();
  __mulsf3(*(undefined4 *)(iVar6 + iVar2 * 4 + 0x60),*(undefined4 *)pGVar8);
  uVar3 = __fixsfsi();
  uVar9 = (*pcVar5)(piVar7,(int)sVar1 / 2,uVar3);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x5c),(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  piVar7 = *(int **)(this + 0x60);
  pcVar5 = *(code **)(*piVar7 + 0x14);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x12);
  iVar2 = SmDev();
  __mulsf3(*(undefined4 *)(iVar6 + iVar2 * 4 + 0x60),*(undefined4 *)pGVar8);
  uVar3 = __fixsfsi();
  uVar9 = (*pcVar5)(piVar7,(int)sVar1 / 2,uVar3);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x60),(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  piVar7 = *(int **)(this + 0x84);
  pcVar5 = *(code **)(*piVar7 + 0x14);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar2 = SmDev();
  __mulsf3(*(undefined4 *)(iVar6 + iVar2 * 4 + 0x60),*(undefined4 *)pGVar8);
  uVar3 = __fixsfsi();
  (*pcVar5)(piVar7,(int)sVar1,uVar3);
  piVar7 = *(int **)(this + 0x80);
  pcVar5 = *(code **)(*piVar7 + 0x14);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar2 = SmDev();
  __mulsf3(*(undefined4 *)(iVar6 + iVar2 * 4 + 0x78),*(undefined4 *)pGVar8);
  uVar3 = __fixsfsi();
  (*pcVar5)(piVar7,(int)sVar1,uVar3);
  iVar2 = DAT_001a4e58 + 0x1a4daa;
  (**(code **)(**(int **)(this + 0x3c) + 0x20))(*(int **)(this + 0x3c),0);
  piVar7 = *(int **)(this + 0x3c);
  pcVar5 = *(code **)(*piVar7 + 0x14);
  iVar6 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(iVar2 + iVar6 * 4 + 0x10));
  __mulsf3(uVar3,*(undefined4 *)(this + 0xb0));
  uVar3 = __fixsfsi();
  iVar6 = SmDev();
  uVar4 = __floatsisf(*(undefined4 *)(iVar2 + iVar6 * 4 + 0x28));
  __mulsf3(uVar4,*(undefined4 *)pGVar8);
  uVar4 = __fixsfsi();
  (*pcVar5)(piVar7,uVar3,uVar4);
  iVar6 = ZombieCafe::isEventRaid_dropUp();
  if (iVar6 != 0) {
    (**(code **)(**(int **)(this + 0x3c) + 0x20))(*(int **)(this + 0x3c),1);
  }
  piVar7 = *(int **)(this + 0x38);
  if (*(char *)(*(int *)(this + 0x3c) + 0x14) == '\0') {
    local_20 = *(code **)(*piVar7 + 0x14);
    iVar2 = DAT_001a4f24 + 0x1a4e6a;
    iVar6 = SmDev();
    uVar3 = __floatsisf(*(undefined4 *)(iVar2 + iVar6 * 4 + 0x10));
    __mulsf3(uVar3,*(undefined4 *)(this + 0xb0));
    uVar3 = __fixsfsi();
    iVar6 = SmDev();
    uVar4 = *(undefined4 *)(iVar2 + iVar6 * 4 + 0x28);
  }
  else {
    local_20 = *(code **)(*piVar7 + 0x14);
    iVar2 = DAT_001a4e5c + 0x1a4e1a;
    iVar6 = SmDev();
    uVar3 = __floatsisf(*(undefined4 *)(iVar2 + iVar6 * 4 + 0x40));
    __mulsf3(uVar3,*(undefined4 *)(this + 0xb0));
    uVar3 = __fixsfsi();
    iVar6 = SmDev();
    uVar4 = *(undefined4 *)(iVar2 + iVar6 * 4 + 0x58);
  }
  uVar4 = __floatsisf(uVar4);
  __mulsf3(uVar4,*(undefined4 *)(this + 0xb4));
  uVar4 = __fixsfsi();
  (*local_20)(piVar7,uVar3,uVar4);
  piVar7 = *(int **)(this + 0x88);
  pcVar5 = *(code **)(*piVar7 + 0x14);
  iVar6 = SmDev();
  __mulsf3(*(undefined4 *)(DAT_001a4f28 + iVar6 * 4 + 0x1a4f34),*(undefined4 *)(this + 0xb0));
  uVar3 = __fixsfsi();
  (*pcVar5)(piVar7,uVar3,*(int *)(*(int *)(this + 0x14) + 0x10) / 2);
  piVar7 = *(int **)(this + 0x8c);
  (**(code **)(*piVar7 + 0x20))(piVar7,0);
  piVar7 = *(int **)(this + 0x90);
  (**(code **)(*piVar7 + 0x20))(piVar7,0);
  piVar7 = *(int **)(this + 0x94);
  (**(code **)(*piVar7 + 0x20))(piVar7,0);
  *(undefined1 *)(*(int *)(this + 0x8c) + 0x86) = 0;
  *(undefined1 *)(*(int *)(this + 0x90) + 0x86) = 0;
  *(undefined1 *)(*(int *)(this + 0x94) + 0x86) = 0;
  return;
}


