/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001461d0 GameStateFriends::layout */

/* GameStateFriends::layout() */

void __thiscall GameStateFriends::layout(GameStateFriends *this)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  code *local_28;
  
  iVar7 = DAT_0014643c;
  (**(code **)(**(int **)(this + 0x14) + 0x18))
            (*(int **)(this + 0x14),*(int *)(*(int *)(this + 0xc) + 0x10) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x10));
  iVar7 = iVar7 + 0x1461f2;
  FUN_00145f84(*(undefined4 *)(this + 0x18),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
  piVar8 = *(int **)(this + 0x20);
  pcVar5 = *(code **)(*piVar8 + 0x14);
  iVar9 = *(int *)(*(int *)(this + 0xc) + 0x10);
  iVar2 = SmDev();
  uVar3 = __floatsisf((int)(short)iVar9 / 2);
  iVar6 = *(int *)(iVar7 + DAT_00146440);
  __addsf3(uVar3,*(undefined4 *)(iVar2 * 4 + iVar6));
  uVar3 = __fixsfsi();
  (*pcVar5)(piVar8,(iVar9 >> 0x10) - (iVar9 >> 0x1f) >> 1,uVar3);
  LayoutList(this);
  piVar8 = *(int **)(this + 0x44);
  if (piVar8 != (int *)0x0) {
    pcVar5 = *(code **)(*piVar8 + 0x14);
    iVar10 = *(int *)(*(int *)(this + 0xc) + 0x10);
    iVar9 = **(int **)(iVar7 + DAT_00146444);
    iVar2 = SmDev();
    uVar3 = __floatsisf((int)(short)iVar10 / 2);
    uVar3 = __addsf3(uVar3,*(undefined4 *)(iVar2 * 4 + iVar6));
    uVar4 = __floatsisf(**(undefined4 **)(iVar7 + DAT_00146448));
    __addsf3(uVar3,uVar4);
    uVar3 = __fixsfsi();
    (*pcVar5)(piVar8,((iVar10 >> 0x10) - (iVar10 >> 0x1f) >> 1) + iVar9,uVar3);
  }
  piVar8 = *(int **)(this + 0x40);
  iVar6 = *piVar8;
  iVar9 = *(int *)(*(int *)(this + 0x1c) + 0x10);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar2 = __divsi3((((*(int *)(*(int *)(this + 0x14) + 0x10) - iVar9) -
                    *(int *)(*(int *)(this + 0x20) + 0x10)) - piVar8[4]) -
                   *(int *)(*(int *)(this + 0x24) + 0x10),7);
  (**(code **)(iVar6 + 0x14))(piVar8,(int)sVar1,iVar9 + iVar2);
  iVar2 = *(int *)(this + 0xc);
  if (((*(char *)(iVar2 + DAT_0014644c) != '\0') || (*(char *)(iVar2 + DAT_00146450) == '\0')) ||
     (iVar2 = TutorialSystem::isTutorialCompleted(*(TutorialSystem **)(iVar2 + DAT_00146454),'\x16')
     , iVar2 == 0)) {
    (**(code **)(**(int **)(this + 0x34) + 0x20))(*(int **)(this + 0x34),0);
  }
  piVar8 = *(int **)(this + 0x28);
  iVar2 = *(int *)(iVar7 + DAT_00146458);
  if (*(char *)(*(int *)(this + 0x34) + 0x14) == '\0') {
    local_28 = *(code **)(*piVar8 + 0x14);
    iVar6 = (int)*(short *)(*(int *)(this + 0xc) + 0x12) / 2;
    iVar9 = SmDev();
    uVar3 = __fixsfsi(*(undefined4 *)(iVar2 + iVar9 * 4));
  }
  else {
    pcVar5 = *(code **)(*piVar8 + 0x14);
    iVar6 = SmDev();
    uVar3 = __fixsfsi(*(undefined4 *)(iVar6 * 4 + *(int *)(iVar7 + DAT_0014645c)));
    iVar6 = SmDev();
    uVar4 = __fixsfsi(*(undefined4 *)(iVar2 + iVar6 * 4));
    (*pcVar5)(piVar8,uVar3,uVar4);
    piVar8 = *(int **)(this + 0x34);
    local_28 = *(code **)(*piVar8 + 0x14);
    iVar2 = SmDev();
    iVar6 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(iVar7 + DAT_00146460)));
    iVar2 = SmDev();
    uVar3 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(iVar7 + DAT_00146464)));
  }
  (*local_28)(piVar8,iVar6,uVar3);
  piVar8 = *(int **)(this + 0x24);
  pcVar5 = *(code **)(*piVar8 + 0x14);
  iVar2 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(iVar7 + DAT_00146468)));
  iVar2 = SmDev();
  uVar4 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(iVar7 + DAT_0014646c)));
  (*pcVar5)(piVar8,uVar3,uVar4);
  (**(code **)(**(int **)(this + 0x58) + 0x14))
            (*(int **)(this + 0x58),*(int *)(*(int *)(this + 0x14) + 0xc) / 2,
             *(int *)(*(int *)(this + 0x14) + 0x10) / 2);
  (**(code **)(**(int **)(this + 0x5c) + 0x14))
            (*(int **)(this + 0x5c),*(int *)(*(int *)(this + 0x14) + 0xc) / 2,
             *(int *)(*(int *)(this + 0x14) + 0x10) / 2);
  (**(code **)(**(int **)(this + 0x68) + 0x14))
            (*(int **)(this + 0x68),*(int *)(*(int *)(this + 0x14) + 0xc) / 2,
             *(int *)(*(int *)(this + 0x14) + 0x10) / 2);
  NoticeDialog::layout();
  FUN_00145f84(*(undefined4 *)(this + 0x54),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
  return;
}


