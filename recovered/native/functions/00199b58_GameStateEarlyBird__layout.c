/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00199b58 GameStateEarlyBird::layout */

/* GameStateEarlyBird::layout() */

void __thiscall GameStateEarlyBird::layout(GameStateEarlyBird *this)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  GameStateEarlyBird *pGVar9;
  int iVar10;
  ScreenElement *this_00;
  int *piVar11;
  int iVar12;
  
  iVar10 = DAT_00199e44;
  pcVar5 = (char *)(DAT_00199e3c + 0x199b64);
  L_PrintLog(pcVar5,(char *)(DAT_00199e40 + 0x199b6e));
  iVar8 = DAT_00199e48;
  iVar10 = iVar10 + 0x199b78;
  (**(code **)(**(int **)(this + 0x14) + 0x18))
            (*(int **)(this + 0x14),*(int *)(*(int *)(this + 0xc) + 0x10) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x10));
  iVar8 = iVar8 + 0x199b8e;
  (**(code **)(**(int **)(this + 0x38) + 0x14))
            (*(int **)(this + 0x38),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  piVar11 = *(int **)(this + 0x3c);
  pcVar6 = *(code **)(*piVar11 + 0x14);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar2 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar10 + iVar2 * 4 + 0x48));
  (*pcVar6)(piVar11,(int)sVar1,uVar3);
  piVar11 = *(int **)(this + 0x40);
  pcVar6 = *(code **)(*piVar11 + 0x14);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar2 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar10 + iVar2 * 4 + 0x60));
  (*pcVar6)(piVar11,(int)sVar1,uVar3);
  piVar11 = *(int **)(this + 0x44);
  pcVar6 = *(code **)(*piVar11 + 0x14);
  iVar2 = SmDev();
  uVar3 = *(undefined4 *)(iVar10 + iVar2 * 4 + 0x78);
  iVar10 = SmDev();
  iVar2 = DAT_00199e4c + 0x199c0a;
  (*pcVar6)(piVar11,uVar3,*(undefined4 *)(iVar2 + iVar10 * 4 + 0x10));
  piVar11 = *(int **)(this + 0xe8);
  pcVar6 = *(code **)(*piVar11 + 0x14);
  iVar10 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar10 * 4 + *(int *)(iVar8 + DAT_00199e50)));
  iVar10 = SmDev();
  uVar4 = __fixsfsi(*(undefined4 *)(iVar10 * 4 + *(int *)(iVar8 + DAT_00199e54)));
  (*pcVar6)(piVar11,uVar3,uVar4);
  piVar11 = *(int **)(this + 0x364);
  pcVar6 = *(code **)(*piVar11 + 0x14);
  iVar12 = *(int *)(*(int *)(this + 0x14) + 0xc);
  iVar10 = SmDev();
  iVar7 = *(int *)(iVar10 * 4 + *(int *)(iVar8 + DAT_00199e58));
  iVar10 = SmDev();
  (*pcVar6)(piVar11,iVar12 - iVar7,*(undefined4 *)(iVar10 * 4 + *(int *)(iVar8 + DAT_00199e5c)));
  piVar11 = *(int **)(this + 0x368);
  uVar3 = __floatsisf(*(undefined4 *)(*(int *)(this + 0x364) + 0xc));
  iVar10 = SmDev();
  this_00 = *(ScreenElement **)(this + 0x364);
  __addsf3(uVar3,*(undefined4 *)(iVar10 * 4 + *(int *)(iVar8 + DAT_00199e60)));
  iVar10 = __fixsfsi();
  iVar10 = ScreenElement::localToParentCoords(this_00,iVar10,*(int *)(this_00 + 0x10) >> 1);
  (**(code **)(*piVar11 + 0x14))(piVar11,iVar10 >> 0x10,(int)(short)iVar10);
  (**(code **)(**(int **)(this + 0x374) + 0x14))
            (*(int **)(this + 0x374),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  ConfirmDialog::layout();
  (**(code **)(**(int **)(this + 900) + 0x14))
            (*(int **)(this + 900),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  NoticeDialog::layout();
  piVar11 = *(int **)(this + 0xf8);
  pcVar6 = *(code **)(*piVar11 + 0x14);
  iVar10 = SmDev();
  uVar3 = *(undefined4 *)(iVar2 + iVar10 * 4 + 0x28);
  iVar10 = SmDev();
  (*pcVar6)(piVar11,uVar3,*(undefined4 *)(iVar2 + iVar10 * 4 + 0x40));
  piVar11 = *(int **)(this + 0xf8);
  pGVar9 = this + 0xfc;
  (**(code **)(*piVar11 + 0x20))(piVar11,1);
  piVar11 = *(int **)pGVar9;
  pcVar6 = *(code **)(*piVar11 + 0x14);
  iVar10 = SmDev();
  uVar3 = *(undefined4 *)(iVar2 + iVar10 * 4 + 0x58);
  iVar10 = SmDev();
  (*pcVar6)(piVar11,uVar3,*(undefined4 *)(iVar2 + iVar10 * 4 + 0x70));
  iVar8 = DAT_00199e64 + 0x199d6e;
  (**(code **)(**(int **)pGVar9 + 0x20))(*(int **)pGVar9,1);
  piVar11 = *(int **)(this + 0x100);
  pcVar6 = *(code **)(*piVar11 + 0x14);
  iVar10 = SmDev();
  uVar3 = *(undefined4 *)(iVar8 + iVar10 * 4 + 8);
  iVar10 = SmDev();
  (*pcVar6)(piVar11,uVar3,*(undefined4 *)(iVar8 + iVar10 * 4 + 0x20));
  (**(code **)(**(int **)(this + 0x100) + 0x20))(*(int **)(this + 0x100),1);
  iVar10 = CapcomApp::getInstance();
  uVar3 = __mulsf3(*(undefined4 *)(iVar10 + 0x44),DAT_00199e68);
  piVar11 = *(int **)pGVar9;
  pcVar6 = *(code **)(*piVar11 + 0x14);
  iVar10 = SmDev();
  uVar4 = __floatsisf(*(undefined4 *)(iVar8 + iVar10 * 4 + 8));
  __addsf3(uVar4,uVar3);
  uVar3 = __fixsfsi();
  iVar10 = SmDev();
  (*pcVar6)(piVar11,uVar3,*(undefined4 *)(iVar8 + iVar10 * 4 + 0x20));
  piVar11 = *(int **)(this + 0xec);
  pcVar6 = *(code **)(*piVar11 + 0x14);
  iVar10 = SmDev();
  uVar3 = *(undefined4 *)(iVar8 + iVar10 * 4 + 0x38);
  iVar10 = SmDev();
  (*pcVar6)(piVar11,uVar3,*(undefined4 *)(iVar8 + iVar10 * 4 + 0x50));
  piVar11 = *(int **)(this + 0xf4);
  pcVar6 = *(code **)(*piVar11 + 0x14);
  iVar10 = SmDev();
  uVar3 = *(undefined4 *)(iVar8 + iVar10 * 4 + 0x68);
  iVar10 = SmDev();
  (*pcVar6)(piVar11,uVar3,*(undefined4 *)(iVar10 * 4 + DAT_00199e6c + 0x199e2a));
  L_PrintLog(pcVar5,(char *)(DAT_00199e70 + 0x199e36));
  return;
}


