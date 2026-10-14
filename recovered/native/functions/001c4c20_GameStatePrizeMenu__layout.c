/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c4c20 GameStatePrizeMenu::layout */

/* GameStatePrizeMenu::layout() */

void __thiscall GameStatePrizeMenu::layout(GameStatePrizeMenu *this)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = DAT_001c4d7c;
  (**(code **)(**(int **)(this + 0x18) + 0x18))
            (*(int **)(this + 0x18),*(int *)(*(int *)(this + 0xc) + 0x10) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x10));
  iVar8 = iVar8 + 0x1c4c42;
  (**(code **)(**(int **)(this + 0x20) + 0x14))
            (*(int **)(this + 0x20),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  piVar6 = *(int **)(this + 0x24);
  pcVar5 = *(code **)(*piVar6 + 0x14);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar2 = SmDev();
  __mulsf3(*(undefined4 *)(iVar2 * 4 + iVar8),*(undefined4 *)(this + 0x80));
  uVar3 = __fixsfsi();
  (*pcVar5)(piVar6,(int)sVar1,uVar3);
  piVar6 = *(int **)(this + 0x28);
  (**(code **)(*piVar6 + 0x14))(piVar6,0,*(int *)(*(int *)(this + 0x18) + 0x10) - piVar6[4]);
  (**(code **)(**(int **)(this + 0x34) + 0x14))
            (*(int **)(this + 0x34),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  NoticeDialog::layout();
  (**(code **)(**(int **)(this + 0x38) + 0x14))
            (*(int **)(this + 0x38),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  ConfirmDialog::layout();
  piVar6 = *(int **)(this + 0x3c);
  pcVar5 = *(code **)(*piVar6 + 0x14);
  iVar7 = *(int *)(*(int *)(this + 0xc) + 0x14);
  iVar2 = SmDev();
  uVar3 = __floatsisf((int)(short)iVar7);
  uVar4 = __mulsf3(*(undefined4 *)(iVar8 + iVar2 * 4 + 0x18),*(undefined4 *)(this + 0x80));
  __addsf3(uVar3,uVar4);
  uVar3 = __fixsfsi();
  (*pcVar5)(piVar6,iVar7 >> 0x10,uVar3);
  piVar6 = *(int **)(this + 0x44);
  pcVar5 = *(code **)(*piVar6 + 0x14);
  iVar2 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(DAT_001c4d80 + 0x1c4d18)));
  iVar2 = SmDev();
  uVar4 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(DAT_001c4d84 + 0x1c4d2c)));
  (*pcVar5)(piVar6,uVar3,uVar4);
  piVar6 = *(int **)(this + 0x40);
  pcVar5 = *(code **)(*piVar6 + 0x14);
  iVar2 = SmDev();
  __mulsf3(*(undefined4 *)(iVar8 + iVar2 * 4 + 0x30),*(undefined4 *)(this + 0x7c));
  uVar3 = __fixsfsi();
  iVar2 = SmDev();
  __mulsf3(*(undefined4 *)(iVar8 + iVar2 * 4 + 0x48),*(undefined4 *)(this + 0x80));
  uVar4 = __fixsfsi();
  (*pcVar5)(piVar6,uVar3,uVar4);
  return;
}


