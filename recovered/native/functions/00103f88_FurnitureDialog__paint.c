/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00103f88 FurnitureDialog::paint */

/* FurnitureDialog::paint(CapcomGraphics*) */

void __thiscall FurnitureDialog::paint(FurnitureDialog *this,CapcomGraphics *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  if (this[0x14] != (FurnitureDialog)0x0) {
    ScreenElement::paint((ScreenElement *)this,param_1);
    iVar11 = *(int *)(this + 0x90);
    iVar12 = *(int *)(this + 0x94);
    iVar8 = *(int *)(iVar11 + 0x10);
    iVar13 = *(int *)(iVar12 + 100);
    uVar1 = __floatsisf(iVar8 * 3 >> 2);
    uVar2 = __floatsisf((int)*(short *)(iVar13 + 0x22));
    uVar2 = __mulsf3(uVar2,*(undefined4 *)(iVar13 + 0x2c));
    uVar3 = __floatsisf((int)*(short *)(iVar13 + 0x24));
    uVar2 = __addsf3(uVar2,uVar3);
    uVar3 = __floatsisf((int)*(short *)(iVar13 + 0x28));
    __addsf3(uVar2,uVar3);
    __fixsfsi();
    uVar2 = __floatsisf();
    uVar1 = __divsf3(uVar1,uVar2);
    iVar9 = *(int *)(*(int *)(this + 0x68) + 0x10);
    iVar5 = *(int *)(*(int *)(this + 0x74) + 0xc);
    iVar10 = *(int *)(*(int *)(this + 0x74) + 0x10);
    iVar13 = *(int *)(iVar11 + 4);
    iVar6 = *(int *)(iVar11 + 0xc);
    iVar7 = *(int *)(iVar12 + 0xc);
    iVar14 = *(int *)(iVar11 + 8);
    iVar11 = *(int *)(iVar12 + 0x10);
    *(CapcomGraphics **)(this + 0x6c) = param_1;
    CapcomGraphics::setColorModulation(param_1,true);
    CapcomGraphics::setColor
              (*(CapcomGraphics **)(this + 0x6c),*(int *)(*(int *)(this + 0xa0) + 0x48));
    piVar4 = *(int **)(*(int *)(this + 0x94) + 100);
    (**(code **)(*piVar4 + 0x14))
              (piVar4,*(undefined4 *)(this + 0x6c),
               (iVar6 / 2 - iVar7 / 2) + ((iVar9 >> 0x10) - iVar5) / 2 + iVar13 + -0x28,
               ((short)iVar9 - iVar10) / 2 + iVar14 + (iVar8 / 2 - iVar11 / 2) + -0x2d,uVar1,uVar1,0
               ,9);
    CapcomGraphics::setColorModulation(*(CapcomGraphics **)(this + 0x6c),false);
  }
  return;
}


