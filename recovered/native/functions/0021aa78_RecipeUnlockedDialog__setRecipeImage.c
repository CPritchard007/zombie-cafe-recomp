/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0021aa78 RecipeUnlockedDialog::setRecipeImage */

/* RecipeUnlockedDialog::setRecipeImage(int) */

void __thiscall RecipeUnlockedDialog::setRecipeImage(RecipeUnlockedDialog *this,int param_1)

{
  ushort uVar1;
  CImage *pCVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  ImageElement *this_00;
  undefined4 uVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float extraout_s0;
  float extraout_s1;
  
  pCVar2 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(this + 0x98) + DAT_0021ac8c),
                      (int)*(short *)(*(int *)(*(int *)(this + 0x98) + 0x4e8) + param_1 * 0x1c +
                                     0x14),true);
  iVar12 = *(int *)(this + 0x70);
  uVar7 = *(undefined4 *)(pCVar2 + 0x2c);
  uVar3 = __floatsisf(*(int *)(iVar12 + 0xc) * 3 >> 2);
  uVar4 = __floatsisf((int)*(short *)(pCVar2 + 0x20));
  uVar4 = __mulsf3(uVar4,uVar7);
  uVar5 = __floatsisf((int)*(short *)(pCVar2 + 0x2a));
  uVar4 = __addsf3(uVar4,uVar5);
  uVar5 = __floatsisf((int)*(short *)(pCVar2 + 0x26));
  __addsf3(uVar4,uVar5);
  __fixsfsi();
  uVar4 = __floatsisf();
  uVar3 = __divsf3(uVar3,uVar4);
  uVar4 = __floatsisf(*(int *)(iVar12 + 0x10) * 3 >> 2);
  uVar5 = __floatsisf((int)*(short *)(pCVar2 + 0x22));
  uVar5 = __mulsf3(uVar5,uVar7);
  uVar7 = __floatsisf((int)*(short *)(pCVar2 + 0x24));
  uVar5 = __addsf3(uVar5,uVar7);
  uVar7 = __floatsisf((int)*(short *)(pCVar2 + 0x28));
  __addsf3(uVar5,uVar7);
  __fixsfsi();
  uVar5 = __floatsisf();
  uVar4 = __divsf3(uVar4,uVar5);
  iVar12 = __aeabi_fcmplt(uVar3,uVar4);
  if (iVar12 == 0) {
    uVar3 = uVar4;
  }
  iVar12 = __aeabi_fcmplt(uVar3,DAT_0021ac90);
  if (iVar12 == 0) {
    uVar3 = DAT_0021ac90;
  }
  iVar12 = CapcomApp::getInstance();
  uVar3 = __mulsf3(uVar3,*(undefined4 *)(iVar12 + 0x44));
  pcVar8 = *(code **)(*(int *)this + 0x2c);
  uVar1 = *(ushort *)(*(int *)(this + 0x6c) + 4);
  iVar13 = *(int *)(*(int *)(this + 0x70) + 8);
  iVar9 = *(int *)(*(int *)(this + 0x70) + 0x10);
  iVar12 = SmDev();
  iVar10 = *(int *)(iVar12 * 4 + *(int *)(DAT_0021ac94 + 0x21ab98));
  iVar12 = SmDev();
  iVar11 = *(int *)(iVar12 * 4 + *(int *)(DAT_0021ac98 + 0x21abac));
  uVar7 = *(undefined4 *)(pCVar2 + 0x2c);
  uVar4 = __floatsisf((int)*(short *)(pCVar2 + 0x20));
  uVar4 = __mulsf3(uVar4,uVar7);
  uVar5 = __floatsisf((int)*(short *)(pCVar2 + 0x2a));
  uVar4 = __addsf3(uVar4,uVar5);
  uVar5 = __floatsisf((int)*(short *)(pCVar2 + 0x26));
  __addsf3(uVar4,uVar5);
  __fixsfsi();
  uVar4 = __floatsisf();
  __mulsf3(uVar4,uVar3);
  iVar12 = __fixsfsi();
  uVar4 = __floatsisf((int)*(short *)(pCVar2 + 0x22));
  uVar4 = __mulsf3(uVar4,uVar7);
  uVar5 = __floatsisf((int)*(short *)(pCVar2 + 0x24));
  uVar4 = __addsf3(uVar4,uVar5);
  uVar5 = __floatsisf((int)*(short *)(pCVar2 + 0x28));
  __addsf3(uVar4,uVar5);
  __fixsfsi();
  uVar4 = __floatsisf();
  __mulsf3(uVar4,uVar3);
  iVar6 = __fixsfsi();
  this_00 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (this_00,pCVar2,
             ((iVar13 - iVar9 & 0xffffU) + iVar10 & 0xffff) + iVar11 / 2 & 0xffff |
             (uint)uVar1 << 0x10,iVar12,iVar6,extraout_s0,extraout_s1,(uchar)uVar3,
             (bool)(uchar)uVar3);
  *(ImageElement **)(this + 0x74) = this_00;
  (*pcVar8)(this,this_00);
  return;
}


