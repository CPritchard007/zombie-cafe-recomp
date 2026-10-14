/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011846c GameStateCafe::layout */

/* GameStateCafe::layout() */

void __thiscall GameStateCafe::layout(GameStateCafe *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  code *pcVar6;
  GameStateCafe *pGVar7;
  int iVar8;
  
  CapcomApp::getInstance();
  iVar1 = CapcomApp::getInstance();
  uVar2 = *(undefined4 *)(iVar1 + 0x40);
  iVar1 = CapcomApp::getInstance();
  uVar3 = *(undefined4 *)(iVar1 + 0x50);
  CapcomApp::getInstance();
  CapcomApp::getInstance();
  if (this[0x1f8] == (GameStateCafe)0x0) {
    pGVar7 = this + 0xac;
    (**(code **)(**(int **)(this + 0x78) + 0x18))
              (*(int **)(this + 0x78),*(int *)(*(int *)(this + 0xc) + 0x10) >> 0x10,
               (int)(short)*(int *)(*(int *)(this + 0xc) + 0x10));
    (**(code **)(**(int **)(this + 0x7c) + 0x14))
              (*(int **)(this + 0x7c),0,(int)*(short *)(*(int *)(this + 0xc) + 0x10));
    MessageElement::layout(*(MessageElement **)(this + 0x7c));
    HudElement::layout(*(HudElement **)(this + 200));
    PullMenuElement::layout(*(PullMenuElement **)(this + 0xcc));
    (**(code **)(**(int **)pGVar7 + 0x14))
              (*(int **)pGVar7,(int)*(short *)(*(int *)(this + 0xc) + 0x16),
               (int)*(short *)(*(int *)(this + 0xc) + 0x10));
    CharacterCommandBar::layout(*(CharacterCommandBar **)pGVar7);
    FUN_00118458(*(undefined4 *)(this + 0xb4),
                 CONCAT22(*(undefined2 *)(*(int *)pGVar7 + 4),*(undefined2 *)(*(int *)pGVar7 + 8)));
    FUN_00118458(*(undefined4 *)(this + 0xb8),
                 CONCAT22(*(undefined2 *)(*(int *)pGVar7 + 4),*(undefined2 *)(*(int *)pGVar7 + 8)));
    FUN_00118458(*(undefined4 *)(this + 0xb0),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
    (**(code **)(**(int **)(this + 0x84) + 0x14))
              (*(int **)(this + 0x84),(int)*(short *)(*(int *)(this + 0xc) + 0x16),
               (int)*(short *)(*(int *)(this + 0xc) + 0x10));
    Store::layout(*(Store **)(this + 0x84));
    piVar4 = *(int **)(this + 0xbc);
    (**(code **)(*piVar4 + 0x14))
              (piVar4,(int)*(short *)(*(int *)(this + 0xc) + 0x16),
               (int)*(short *)(*(int *)(this + 0xc) + 0x10));
    Storage::layout(*(Storage **)(this + 0xbc));
    FUN_00118458(*(undefined4 *)(this + 0x8c),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
    FUN_00118458(*(undefined4 *)(this + 0x90),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
    FUN_00118458(*(undefined4 *)(this + 0x94),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
    FUN_00118458(*(undefined4 *)(this + 0x9c),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
    FUN_00118458(*(undefined4 *)(this + 0xa0),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
    (**(code **)(**(int **)(this + 0xe0) + 0x14))
              (*(int **)(this + 0xe0),(int)*(short *)(*(int *)(this + 0xc) + 0x16),
               (int)*(short *)(*(int *)(this + 0xc) + 0x10));
    piVar4 = *(int **)(this + 0xe0);
    iVar8 = DAT_001187e8 + 0x1185c6;
    pcVar6 = *(code **)(*piVar4 + 0x18);
    iVar1 = SmDev();
    uVar5 = *(undefined4 *)(iVar1 * 4 + iVar8);
    iVar1 = SmDev();
    (*pcVar6)(piVar4,uVar5,*(undefined4 *)(iVar8 + iVar1 * 4 + 0x18));
    (**(code **)(**(int **)(this + 0xe4) + 0x14))
              (*(int **)(this + 0xe4),0,*(undefined4 *)(*(int *)(this + 0xe0) + 0x10));
    piVar4 = *(int **)(this + 0xe8);
    pcVar6 = *(code **)(*piVar4 + 0x14);
    iVar1 = SmDev();
    uVar5 = *(undefined4 *)(iVar8 + iVar1 * 4 + 0x30);
    iVar1 = SmDev();
    (*pcVar6)(piVar4,uVar5,*(undefined4 *)(iVar8 + iVar1 * 4 + 0x48));
    piVar4 = *(int **)(this + 0xf0);
    pcVar6 = *(code **)(*piVar4 + 0x14);
    iVar1 = SmDev();
    uVar5 = __floatsisf(*(undefined4 *)(iVar8 + iVar1 * 4 + 0x30));
    uVar2 = __mulsf3(uVar2,uVar3);
    uVar2 = __mulsf3(uVar2,DAT_001187ec);
    __subsf3(uVar5,uVar2);
    uVar2 = __fixsfsi();
    iVar1 = SmDev();
    (*pcVar6)(piVar4,uVar2,*(undefined4 *)(iVar8 + iVar1 * 4 + 0x48));
    (**(code **)(**(int **)(this + 0xec) + 0x14))
              (*(int **)(this + 0xec),*(undefined4 *)(*(int *)(this + 0xe0) + 0xc),0);
    piVar4 = *(int **)(this + 0xf8);
    pcVar6 = *(code **)(*piVar4 + 0x14);
    iVar1 = SmDev();
    uVar2 = *(undefined4 *)(iVar8 + iVar1 * 4 + 0x60);
    iVar1 = SmDev();
    (*pcVar6)(piVar4,uVar2,*(undefined4 *)(iVar8 + iVar1 * 4 + 0x78));
    piVar4 = *(int **)(this + 0xf8);
    iVar8 = DAT_001187f0 + 0x1186b2;
    pcVar6 = *(code **)(*piVar4 + 0x18);
    iVar1 = SmDev();
    (*pcVar6)(piVar4,*(undefined4 *)(iVar8 + iVar1 * 4 + 0x10),0);
    piVar4 = *(int **)(this + 0x108);
    pcVar6 = *(code **)(*piVar4 + 0x14);
    iVar1 = SmDev();
    uVar2 = *(undefined4 *)(iVar8 + iVar1 * 4 + 0x28);
    iVar1 = SmDev();
    (*pcVar6)(piVar4,uVar2,*(undefined4 *)(iVar8 + iVar1 * 4 + 0x40));
    piVar4 = *(int **)(this + 0x108);
    pcVar6 = *(code **)(*piVar4 + 0x18);
    iVar1 = SmDev();
    (*pcVar6)(piVar4,*(undefined4 *)(iVar8 + iVar1 * 4 + 0x58),1000);
    piVar4 = *(int **)(this + 0x100);
    pcVar6 = *(code **)(*piVar4 + 0x14);
    iVar1 = SmDev();
    uVar2 = *(undefined4 *)(iVar8 + iVar1 * 4 + 0x70);
    iVar1 = SmDev();
    iVar8 = DAT_001187f4 + 0x118736;
    (*pcVar6)(piVar4,uVar2,*(undefined4 *)(iVar8 + iVar1 * 4 + 8));
    (**(code **)(**(int **)(this + 0x100) + 0x18))
              (*(int **)(this + 0x100),*(undefined4 *)(*(int *)(this + 0xe0) + 0xc),0);
    piVar4 = *(int **)(this + 0xfc);
    pcVar6 = *(code **)(*piVar4 + 0x14);
    iVar1 = SmDev();
    uVar2 = *(undefined4 *)(iVar8 + iVar1 * 4 + 0x20);
    iVar1 = SmDev();
    (*pcVar6)(piVar4,uVar2,*(undefined4 *)(iVar8 + iVar1 * 4 + 0x38));
    piVar4 = *(int **)(this + 0xfc);
    (**(code **)(*piVar4 + 0x18))(piVar4,*(undefined4 *)(*(int *)(this + 0xe0) + 0xc),0);
    ConfirmDialog::layout();
    FUN_00118458(*(undefined4 *)(this + 0x80),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
    NoticeDialog::layout();
    FUN_00118458(*(undefined4 *)(this + 0xd0),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
    NoticeDialog::layout();
    FUN_00118458(*(undefined4 *)(this + 0xd4),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
    EquipInfoDialog::layout();
    FUN_00118458(*(undefined4 *)(this + 0x134),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
    if (*(int *)(this + 0x13c) != 0) {
      FUN_00118458(*(int *)(this + 0x13c),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
      WaitDialog::layout();
    }
    this[0x1f8] = (GameStateCafe)0x1;
  }
  return;
}


