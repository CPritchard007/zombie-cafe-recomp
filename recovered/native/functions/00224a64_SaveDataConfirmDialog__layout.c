/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00224a64 SaveDataConfirmDialog::layout */

/* SaveDataConfirmDialog::layout() */

void __thiscall SaveDataConfirmDialog::layout(SaveDataConfirmDialog *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  CapcomApp::getInstance();
  CapcomApp::getInstance();
  iVar1 = CapcomApp::getInstance();
  iVar7 = DAT_00224c34;
  uVar2 = *(undefined4 *)(iVar1 + 0x44);
  (**(code **)(*(int *)this + 0x18))
            (this,*(int *)(*(int *)(this + 0x60) + 0x10) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0x60) + 0x10));
  piVar8 = *(int **)(this + 0x68);
  iVar7 = iVar7 + 0x224a94;
  pcVar5 = *(code **)(*piVar8 + 0x14);
  iVar6 = *(int *)(this + 0xc);
  iVar1 = SmDev();
  iVar9 = *(int *)(iVar7 + DAT_00224c38);
  uVar3 = __fixsfsi(*(undefined4 *)(iVar1 * 4 + iVar9));
  (*pcVar5)(piVar8,iVar6 / 2,uVar3);
  iVar1 = SmDev();
  uVar3 = *(undefined4 *)(iVar1 * 4 + iVar9);
  iVar1 = SmDev();
  __addsf3(uVar3,*(undefined4 *)(iVar1 * 4 + *(int *)(iVar7 + DAT_00224c3c)));
  uVar3 = __fixsfsi();
  SmDev();
  SmDev();
  (**(code **)(**(int **)(this + 0x6c) + 0x14))
            (*(int **)(this + 0x6c),*(int *)(this + 0xc) / 2,uVar3);
  piVar8 = *(int **)(this + 0x74);
  iVar1 = *(int *)(*(int *)(this + 0x6c) + 100);
  iVar9 = *(int *)(this + 0xc);
  iVar6 = *piVar8;
  uVar3 = __floatsisf((int)*(short *)(iVar1 + 0x22));
  uVar3 = __mulsf3(uVar3,*(undefined4 *)(iVar1 + 0x2c));
  uVar4 = __floatsisf((int)*(short *)(iVar1 + 0x24));
  uVar3 = __addsf3(uVar3,uVar4);
  uVar4 = __floatsisf((int)*(short *)(iVar1 + 0x28));
  __addsf3(uVar3,uVar4);
  iVar1 = __fixsfsi();
  uVar3 = __floatsisf(iVar1 / 2 + 0x1e);
  __mulsf3(uVar3,uVar2);
  uVar2 = __fixsfsi();
  (**(code **)(iVar6 + 0x14))(piVar8,iVar9 / 2,uVar2);
  iVar1 = SmDev();
  __fixsfsi(*(undefined4 *)(iVar1 * 4 + *(int *)(iVar7 + DAT_00224c40)));
  uVar2 = __floatsisf();
  iVar1 = SmDev();
  __mulsf3(uVar2,*(undefined4 *)(iVar1 * 4 + *(int *)(iVar7 + DAT_00224c44)));
  iVar1 = __fixsfsi();
  iVar6 = SmDev();
  iVar6 = __fixsfsi(*(undefined4 *)(iVar6 * 4 + *(int *)(iVar7 + DAT_00224c48)));
  (**(code **)(**(int **)(this + 0x78) + 0x14))
            (*(int **)(this + 0x78),iVar1,*(int *)(this + 0x10) - iVar6);
  (**(code **)(**(int **)(this + 0x7c) + 0x14))
            (*(int **)(this + 0x7c),*(int *)(this + 0xc) - iVar1,*(int *)(this + 0x10) - iVar6);
  (**(code **)(**(int **)(this + 0x7c) + 0x20))(*(int **)(this + 0x7c),1);
  uVar2 = __floatsisf((*(int *)(this + 0x10) - iVar6) - *(int *)(*(int *)(this + 0x78) + 0x10));
  iVar6 = SmDev();
  __subsf3(uVar2,*(undefined4 *)(iVar6 * 4 + *(int *)(iVar7 + DAT_00224c4c)));
  uVar2 = __fixsfsi();
  (**(code **)(**(int **)(this + 0xa0) + 0x14))(*(int **)(this + 0xa0),iVar1,uVar2);
  (**(code **)(**(int **)(this + 0xa4) + 0x14))
            (*(int **)(this + 0xa4),*(int *)(this + 0xc) - iVar1,uVar2);
  (**(code **)(**(int **)(this + 0xb0) + 0x14))
            (*(int **)(this + 0xb0),*(int *)(*(int *)(this + 0x60) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0x60) + 0x14));
  ConfirmDialog::layout();
  return;
}


