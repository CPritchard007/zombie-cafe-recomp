/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ff680 PendingOrderDialog::buttonCleanUp */

/* PendingOrderDialog::buttonCleanUp(ZCImageButton*) */

void __thiscall PendingOrderDialog::buttonCleanUp(PendingOrderDialog *this,ZCImageButton *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CImage *this_00;
  undefined4 uVar5;
  undefined4 uVar6;
  PendingOrderDialog *pPVar7;
  int *piVar8;
  CImage *this_01;
  
  iVar1 = CapcomApp::getInstance();
  uVar5 = *(undefined4 *)(iVar1 + 0x40);
  iVar1 = CapcomApp::getInstance();
  uVar5 = __mulsf3(uVar5,*(undefined4 *)(iVar1 + 0x50));
  iVar1 = CapcomApp::getInstance();
  uVar6 = *(undefined4 *)(iVar1 + 0x44);
  iVar1 = CapcomApp::getInstance();
  uVar6 = __mulsf3(uVar6,*(undefined4 *)(iVar1 + 0x50));
  pPVar7 = this + 0xa4;
  *(undefined4 *)(*(int *)(this + 0x78) + 0x60) = *(undefined4 *)pPVar7;
  *(undefined4 *)(*(int *)(this + 0x74) + 0x60) = *(undefined4 *)pPVar7;
  *(undefined4 *)(*(int *)(this + 0x70) + 0x60) = *(undefined4 *)pPVar7;
  *(undefined4 *)(*(int *)(this + 0x7c) + 0x60) = *(undefined4 *)pPVar7;
  this_00 = *(CImage **)(this + 0xa0);
  iVar1 = CImage::getWidth(this_00);
  this_01 = *(CImage **)pPVar7;
  iVar2 = CImage::getWidth(this_01);
  iVar1 = __floatsisf(iVar1 - iVar2);
  iVar2 = __aeabi_fcmplt(iVar1,0);
  if (iVar2 != 0) {
    iVar1 = iVar1 + -0x80000000;
  }
  uVar3 = __mulsf3(iVar1,0x3f000000);
  iVar1 = CImage::getHeight(this_00);
  iVar2 = CImage::getHeight(this_01);
  iVar1 = __floatsisf(iVar1 - iVar2);
  iVar2 = __aeabi_fcmplt(iVar1,0);
  if (iVar2 != 0) {
    iVar1 = iVar1 + -0x80000000;
  }
  uVar4 = __mulsf3(iVar1,0x3f000000);
  uVar3 = __subsf3(uVar3,0x41000000);
  uVar5 = __mulsf3(uVar3,uVar5);
  uVar6 = __mulsf3(uVar4,uVar6);
  __divsi3(*(int *)(this + 0xc) * 6,10);
  uVar3 = __floatsisf();
  __subsf3(uVar3,uVar5);
  uVar3 = __fixsfsi();
  piVar8 = *(int **)(this + 0x78);
  iVar1 = *piVar8;
  uVar4 = __floatsisf(*(int *)(this + 0x10) - piVar8[4]);
  __addsf3(uVar4,uVar6);
  uVar4 = __fixsfsi();
  (**(code **)(iVar1 + 0x14))(piVar8,uVar3,uVar4);
  piVar8 = *(int **)(this + 0x74);
  __divsi3(*(int *)(this + 0xc) << 2,10);
  uVar3 = __floatsisf();
  __subsf3(uVar3,uVar5);
  uVar3 = __fixsfsi();
  iVar1 = *piVar8;
  uVar4 = __floatsisf(*(int *)(this + 0x10) - piVar8[4]);
  __addsf3(uVar4,uVar6);
  uVar4 = __fixsfsi();
  (**(code **)(iVar1 + 0x14))(piVar8,uVar3,uVar4);
  __divsi3(*(undefined4 *)(this + 0xc),5);
  uVar3 = __floatsisf();
  __subsf3(uVar3,uVar5);
  uVar3 = __fixsfsi();
  piVar8 = *(int **)(this + 0x70);
  iVar1 = *piVar8;
  uVar4 = __floatsisf(*(int *)(this + 0x10) - piVar8[4]);
  __addsf3(uVar4,uVar6);
  uVar4 = __fixsfsi();
  (**(code **)(iVar1 + 0x14))(piVar8,uVar3,uVar4);
  piVar8 = *(int **)(this + 0x7c);
  __divsi3(*(int *)(this + 0xc) << 3,10);
  uVar3 = __floatsisf();
  __subsf3(uVar3,uVar5);
  uVar3 = __fixsfsi();
  iVar1 = *piVar8;
  uVar4 = __floatsisf(*(int *)(this + 0x10) - piVar8[4]);
  __addsf3(uVar4,uVar6);
  uVar6 = __fixsfsi();
  (**(code **)(iVar1 + 0x14))(piVar8,uVar3,uVar6);
  iVar1 = *(int *)param_1;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(this + 0xa0);
  uVar6 = __floatsisf(*(undefined4 *)(param_1 + 4));
  __addsf3(uVar6,uVar5);
  uVar5 = __fixsfsi();
  (**(code **)(iVar1 + 0x14))(param_1,uVar5,*(int *)(this + 0x10) - *(int *)(param_1 + 0x10));
  return;
}


