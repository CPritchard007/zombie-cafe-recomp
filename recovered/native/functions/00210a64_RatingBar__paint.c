/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00210a64 RatingBar::paint */

/* RatingBar::paint(CapcomGraphics*) */

void __thiscall RatingBar::paint(RatingBar *this,CapcomGraphics *param_1)

{
  int iVar1;
  CImage *this_00;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_stack_ffffff68;
  undefined4 uVar7;
  undefined4 in_stack_ffffff6c;
  undefined4 uVar8;
  
  if (this[0x14] == (RatingBar)0x0) {
    return;
  }
  ScreenElement::localToParentCoords((ScreenElement *)this,0,0);
  CapcomGraphics::translate((long)param_1);
  CapcomGraphics::pushClip(CONCAT44(in_stack_ffffff6c,in_stack_ffffff68));
  iVar4 = 0;
  do {
    this_00 = *(CImage **)(this + 100);
    iVar1 = CImage::getWidth(this_00);
    iVar1 = iVar4 * iVar1;
    uVar7 = 0;
    uVar8 = 9;
    iVar4 = iVar4 + 1;
    (**(code **)(*(int *)this_00 + 0x10))(this_00,param_1,iVar1,0);
  } while (iVar4 != 5);
  CapcomGraphics::popClip();
  iVar4 = *(int *)(this + 0xc);
  iVar1 = *(int *)(this + 0x70);
  if ((*(int *)(this + 0x8c) < 1) || (this[0x98] == (RatingBar)0x0)) {
    iVar6 = 0;
    __divsi3(iVar4 * iVar1,10);
    CapcomGraphics::pushClip(CONCAT44(uVar8,uVar7));
    do {
      piVar2 = *(int **)(this + 0x60);
      iVar4 = CImage::getWidth(*(CImage **)(this + 100));
      iVar4 = iVar6 * iVar4;
      uVar7 = 0;
      uVar8 = 9;
      iVar6 = iVar6 + 1;
      (**(code **)(*piVar2 + 0x10))
                (piVar2,param_1,iVar4 + *(int *)(this + 0x80),*(undefined4 *)(this + 0x84));
    } while (iVar6 != 5);
    CapcomGraphics::popClip();
    if (*(int *)(this + 0x68) == 0) goto LAB_00210d9c;
    iVar4 = 0;
    __divsi3(*(int *)(this + 0xc) * *(int *)(this + 0x78),10);
    CapcomGraphics::pushClip(CONCAT44(uVar8,uVar7));
    do {
      piVar2 = *(int **)(this + 0x68);
      iVar1 = CImage::getWidth(*(CImage **)(this + 100));
      iVar1 = iVar4 * iVar1;
      iVar4 = iVar4 + 1;
      (**(code **)(*piVar2 + 0x10))
                (piVar2,param_1,iVar1 + *(int *)(this + 0x80),*(undefined4 *)(this + 0x84),0,9);
    } while (iVar4 != 5);
  }
  else {
    iVar5 = *(int *)(this + 0x74);
    iVar6 = iVar5;
    if (iVar1 < iVar5) {
      iVar6 = iVar1;
    }
    __divsi3(iVar4 * iVar6,10);
    __divsi3(iVar4 * iVar6,0xfffffff6);
    if (iVar5 < iVar1) {
      iVar5 = iVar1;
    }
    __divsi3(iVar4 * iVar5,10);
    CapcomGraphics::pushClip(CONCAT44(uVar8,uVar7));
    CapcomGraphics::setColorModulation(param_1,true);
    __aeabi_idivmod(*(undefined4 *)(this + 0x8c),500);
    iVar4 = __divsi3(extraout_r1 * 0xb4,500);
    if (iVar4 < 0) {
      __aeabi_idivmod(-iVar4,0x168);
      iVar4 = -*(int *)(extraout_r1_01 * 4 + DAT_00210dbc + 0x210b8e);
    }
    else {
      __aeabi_idivmod(iVar4,0x168);
      iVar4 = *(int *)(extraout_r1_00 * 4 + DAT_00210db8 + 0x210b7a);
    }
    uVar3 = (iVar4 * 0xff >> 0x10) << 0x18;
    iVar4 = 0;
    CapcomGraphics::setColor(param_1,*(uint *)(this + 0x88) | uVar3);
    do {
      piVar2 = *(int **)(this + 0x60);
      iVar1 = CImage::getWidth(*(CImage **)(this + 100));
      iVar1 = iVar4 * iVar1;
      uVar7 = 0;
      uVar8 = 9;
      iVar4 = iVar4 + 1;
      (**(code **)(*piVar2 + 0x10))
                (piVar2,param_1,iVar1 + *(int *)(this + 0x80),*(undefined4 *)(this + 0x84));
    } while (iVar4 != 5);
    CapcomGraphics::setColorModulation(param_1,false);
    CapcomGraphics::popClip();
    iVar4 = *(int *)(this + 0x74);
    if (*(int *)(this + 0x70) < *(int *)(this + 0x74)) {
      iVar4 = *(int *)(this + 0x70);
    }
    iVar1 = 0;
    __divsi3(iVar4 * *(int *)(this + 0xc),10);
    CapcomGraphics::pushClip(CONCAT44(uVar8,uVar7));
    CapcomGraphics::setColorModulation(param_1,true);
    uVar3 = uVar3 | DAT_00210dc0;
    CapcomGraphics::setColor(param_1,uVar3);
    do {
      piVar2 = *(int **)(this + 0x60);
      iVar4 = CImage::getWidth(*(CImage **)(this + 100));
      iVar4 = iVar1 * iVar4;
      iVar1 = iVar1 + 1;
      uVar7 = 0;
      uVar8 = 9;
      (**(code **)(*piVar2 + 0x10))
                (piVar2,param_1,iVar4 + *(int *)(this + 0x80),*(undefined4 *)(this + 0x84));
    } while (iVar1 != 5);
    CapcomGraphics::setColorModulation(param_1,false);
    CapcomGraphics::popClip();
    if (*(int *)(this + 0x68) == 0) goto LAB_00210d9c;
    iVar4 = 0;
    __divsi3(*(int *)(this + 0xc) * *(int *)(this + 0x78),10);
    CapcomGraphics::pushClip(CONCAT44(uVar8,uVar7));
    CapcomGraphics::setColorModulation(param_1,true);
    CapcomGraphics::setColor(param_1,uVar3);
    do {
      piVar2 = *(int **)(this + 0x68);
      iVar1 = CImage::getWidth(*(CImage **)(this + 100));
      iVar1 = iVar4 * iVar1;
      iVar4 = iVar4 + 1;
      (**(code **)(*piVar2 + 0x10))
                (piVar2,param_1,iVar1 + *(int *)(this + 0x80),*(undefined4 *)(this + 0x84),0,9);
    } while (iVar4 != 5);
    CapcomGraphics::setColorModulation(param_1,false);
  }
  CapcomGraphics::popClip();
LAB_00210d9c:
  CapcomGraphics::translate((long)param_1);
  return;
}


