/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ec0fc PicGiftDialog::layout */

/* PicGiftDialog::layout() */

void __thiscall PicGiftDialog::layout(PicGiftDialog *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  PicGiftDialog *pPVar5;
  PicGiftDialog *pPVar6;
  code *pcVar7;
  PicGiftDialog *pPVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  PicGiftDialog *pPVar12;
  
  pcVar7 = *(code **)(*(int *)this + 0x18);
  iVar10 = DAT_001ec410 + 0x1ec110;
  uVar1 = __floatsisf(*(undefined4 *)(*(int *)(this + 0x74) + 0xc));
  iVar2 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(iVar10 + iVar2 * 4 + 0x14));
  pPVar5 = this + 0xa0;
  uVar3 = __mulsf3(uVar3,*(undefined4 *)pPVar5);
  __addsf3(uVar1,uVar3);
  uVar1 = __fixsfsi();
  uVar3 = __floatsisf(*(undefined4 *)(*(int *)(this + 0x74) + 0x10));
  iVar2 = SmDev();
  uVar4 = __floatsisf(*(undefined4 *)(iVar10 + iVar2 * 4 + 0x2c));
  pPVar6 = this + 0xa4;
  uVar4 = __mulsf3(uVar4,*(undefined4 *)pPVar6);
  __addsf3(uVar3,uVar4);
  uVar3 = __fixsfsi();
  (*pcVar7)(this,uVar1,uVar3);
  piVar9 = *(int **)(this + 0x74);
  pcVar7 = *(code **)(*piVar9 + 0x14);
  iVar2 = SmDev();
  uVar1 = __floatsisf(*(undefined4 *)(iVar10 + iVar2 * 4 + 0x2c));
  __mulsf3(uVar1,*(undefined4 *)pPVar6);
  uVar1 = __fixsfsi();
  (*pcVar7)(piVar9,0,uVar1);
  (**(code **)(**(int **)(this + 0x84) + 0x14))
            (*(int **)(this + 0x84),*(undefined4 *)(this + 0xc),0);
  pPVar8 = this + 0x88;
  piVar9 = *(int **)pPVar8;
  iVar11 = *piVar9;
  iVar2 = *(int *)(*(int *)(this + 0x74) + 0xc);
  uVar1 = __floatsisf(*(undefined4 *)(*(int *)(this + 0x74) + 8));
  uVar3 = __mulsf3(*(undefined4 *)pPVar6,DAT_001ec414);
  __addsf3(uVar1,uVar3);
  uVar1 = __fixsfsi();
  (**(code **)(iVar11 + 0x14))(piVar9,iVar2 / 2,uVar1);
  piVar9 = *(int **)pPVar8;
  pcVar7 = *(code **)(*piVar9 + 0x18);
  iVar2 = SmDev();
  uVar1 = __floatsisf(*(undefined4 *)(iVar10 + iVar2 * 4 + 0x44));
  __mulsf3(uVar1,*(undefined4 *)pPVar5);
  uVar1 = __fixsfsi();
  __mulsf3(*(undefined4 *)pPVar6,DAT_001ec418);
  uVar3 = __fixsfsi();
  (*pcVar7)(piVar9,uVar1,uVar3);
  piVar9 = *(int **)(this + 0x78);
  pcVar7 = *(code **)(*piVar9 + 0x14);
  iVar2 = SmDev();
  uVar1 = __floatsisf(*(undefined4 *)(iVar10 + iVar2 * 4 + 0x5c));
  __mulsf3(uVar1,*(undefined4 *)pPVar5);
  uVar1 = __fixsfsi();
  __mulsf3(*(undefined4 *)pPVar6,DAT_001ec41c);
  uVar3 = __fixsfsi();
  (*pcVar7)(piVar9,uVar1,uVar3);
  iVar11 = *(int *)(this + 0x78);
  piVar9 = *(int **)(this + 0x7c);
  iVar2 = *piVar9;
  uVar1 = __floatsisf(*(int *)(iVar11 + 0xc) / 2 + *(int *)(iVar11 + 4));
  uVar3 = __mulsf3(*(undefined4 *)pPVar5,DAT_001ec414);
  __subsf3(uVar1,uVar3);
  uVar1 = __fixsfsi();
  (**(code **)(iVar2 + 0x14))(piVar9,uVar1,*(undefined4 *)(iVar11 + 8));
  iVar2 = *(int *)(this + 0x78);
  pPVar12 = this + 0xc4;
  (**(code **)(**(int **)(this + 0x90) + 0x14))
            (*(int **)(this + 0x90),*(undefined4 *)(iVar2 + 4),
             *(int *)(iVar2 + 8) + *(int *)(iVar2 + 0x10));
  iVar11 = *(int *)(this + 0x78);
  piVar9 = *(int **)pPVar12;
  iVar2 = *piVar9;
  uVar1 = __floatsisf(*(int *)(iVar11 + 4) + *(int *)(iVar11 + 0xc));
  uVar3 = __mulsf3(*(undefined4 *)pPVar5,DAT_001ec420);
  __addsf3(uVar1,uVar3);
  uVar1 = __fixsfsi();
  (**(code **)(iVar2 + 0x14))(piVar9,uVar1,*(undefined4 *)(iVar11 + 8));
  piVar9 = *(int **)pPVar12;
  pcVar7 = *(code **)(*piVar9 + 0x18);
  iVar11 = *(int *)(*(int *)(this + 0x74) + 0xc);
  iVar2 = SmDev();
  uVar1 = __floatsisf(*(undefined4 *)(iVar10 + iVar2 * 4 + 0x74));
  iVar2 = DAT_001ec424;
  __mulsf3(uVar1,*(undefined4 *)pPVar6);
  uVar1 = __fixsfsi();
  (*pcVar7)(piVar9,iVar11 / 2,uVar1);
  piVar9 = *(int **)(this + 200);
  pcVar7 = *(code **)(*piVar9 + 0x18);
  uVar3 = *(undefined4 *)(*(int *)pPVar12 + 0xc);
  iVar11 = SmDev();
  uVar1 = __floatsisf(*(undefined4 *)(iVar2 + 0x1ec33c + iVar11 * 4 + 0xc));
  __mulsf3(uVar1,*(undefined4 *)pPVar6);
  uVar1 = __fixsfsi();
  (*pcVar7)(piVar9,uVar3,uVar1);
  piVar9 = *(int **)(this + 200);
  (**(code **)(*piVar9 + 0x14))(piVar9,0,0);
  piVar9 = *(int **)(this + 0x8c);
  (**(code **)(*piVar9 + 0x14))(piVar9,0,0);
  piVar9 = *(int **)(this + 0x8c);
  pcVar7 = *(code **)(*piVar9 + 0x18);
  iVar11 = SmDev();
  uVar1 = __floatsisf(*(undefined4 *)(iVar2 + 0x1ec33c + iVar11 * 4 + 0x24));
  __mulsf3(uVar1,*(undefined4 *)pPVar5);
  uVar1 = __fixsfsi();
  __mulsf3(*(undefined4 *)pPVar6,DAT_001ec418);
  uVar3 = __fixsfsi();
  pPVar5 = this + 0xb0;
  (*pcVar7)(piVar9,uVar1,uVar3);
  (**(code **)(**(int **)pPVar5 + 0x18))(*(int **)pPVar5,*(undefined4 *)(*(int *)pPVar8 + 0xc),3);
  (**(code **)(**(int **)pPVar5 + 0x1c))(*(int **)pPVar5,0x11);
  *(undefined4 *)(*(int *)pPVar5 + 0x18) = 0xffffffff;
  (**(code **)(**(int **)pPVar5 + 0x14))
            (*(int **)pPVar5,*(int *)(*(int *)(this + 0x74) + 0xc) / 2,
             *(int *)(*(int *)pPVar8 + 8) + *(int *)(*(int *)pPVar8 + 0x10));
  L_PrintLog((char *)(DAT_001ec428 + 0x1ec408),(char *)(DAT_001ec42c + 0x1ec40a));
  return;
}


