/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a3676 ImageElement::paintComponent */

/* ImageElement::paintComponent(CapcomGraphics*) */

void __thiscall ImageElement::paintComponent(ImageElement *this,CapcomGraphics *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  CImage *this_00;
  undefined4 uVar12;
  undefined4 in_stack_ffffff90;
  undefined4 in_stack_ffffff94;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 auStack_18 [4];
  
  if (this[0x91] == (ImageElement)0x0) {
    if (this[0x92] == (ImageElement)0x0) goto LAB_002a36b6;
    CapcomGraphics::setColorModulation(param_1,true);
    iVar9 = *(int *)(this + 0x94);
  }
  else {
    CapcomGraphics::setColorModulation(param_1,true);
    iVar9 = -0x1000000;
  }
  CapcomGraphics::setColor(param_1,iVar9);
LAB_002a36b6:
  this_00 = *(CImage **)(this + 100);
  if (*(int *)(this + 0x88) == 0) {
    (**(code **)(*(int *)this_00 + 0x14))
              (this_00,param_1,0,0,*(undefined4 *)(this + 0x68),*(undefined4 *)(this + 0x6c),
               this[0x60],9);
  }
  else {
    uVar11 = *(undefined4 *)(this + 0x8c);
    iVar9 = __aeabi_fcmpeq(uVar11,0);
    if (iVar9 == 0) {
      uVar7 = CImage::getWidth(this_00);
      uVar1 = CImage::getHeight(this_00);
      __extendsfdf2(uVar11);
      cos((double)CONCAT44(in_stack_ffffff94,in_stack_ffffff90));
      uVar8 = __truncdfsf2();
      sin((double)CONCAT44(in_stack_ffffff94,in_stack_ffffff90));
      iVar9 = __truncdfsf2();
      uVar2 = *(undefined4 *)(this + 0x70);
      uVar10 = *(undefined4 *)(this + 0x74);
      uVar12 = *(undefined4 *)(this + 0x78);
      uVar3 = *(undefined4 *)(this + 0x7c);
      local_20 = *(undefined4 *)(this + 0x80);
      local_1c = *(undefined4 *)(this + 0x84);
      local_30 = uVar2;
      local_2c = uVar10;
      local_28 = uVar12;
      local_24 = uVar3;
      uVar11 = __mulsf3(uVar2,0);
      uVar4 = __mulsf3(uVar12,0);
      uVar11 = __addsf3(uVar11,uVar4);
      uVar4 = __addsf3(uVar11,local_20);
      uVar11 = __mulsf3(uVar10,0);
      uVar5 = __mulsf3(uVar3,0);
      uVar11 = __addsf3(uVar11,uVar5);
      uVar11 = __addsf3(uVar11,local_1c);
      uVar5 = __mulsf3(uVar2,uVar8);
      uVar6 = __mulsf3(uVar12,iVar9 + -0x80000000);
      local_30 = __addsf3(uVar5,uVar6);
      uVar5 = __mulsf3(uVar10,uVar8);
      uVar6 = __mulsf3(uVar3,iVar9 + -0x80000000);
      local_2c = __addsf3(uVar5,uVar6);
      uVar2 = __mulsf3(uVar2,iVar9);
      uVar5 = __mulsf3(uVar12,uVar8);
      local_28 = __addsf3(uVar2,uVar5);
      uVar2 = __mulsf3(uVar10,iVar9);
      uVar8 = __mulsf3(uVar3,uVar8);
      local_24 = __addsf3(uVar2,uVar8);
      uVar7 = __floatsisf(uVar7);
      uVar7 = __mulsf3(uVar7,0x3f000000);
      uVar8 = __addsf3(uVar4,uVar7);
      local_20 = uVar8;
      uVar7 = __floatsisf(uVar1);
      uVar7 = __mulsf3(uVar7,0x3f000000);
    }
    else {
      uVar11 = CImage::getWidth(this_00);
      uVar7 = CImage::getHeight(this_00);
      local_30 = *(undefined4 *)(this + 0x70);
      local_2c = *(undefined4 *)(this + 0x74);
      local_28 = *(undefined4 *)(this + 0x78);
      local_24 = *(undefined4 *)(this + 0x7c);
      local_20 = *(undefined4 *)(this + 0x80);
      local_1c = *(undefined4 *)(this + 0x84);
      uVar11 = __floatsisf(uVar11,local_20,auStack_18,this + 0x88);
      uVar11 = __mulsf3(uVar11,0x3f000000);
      uVar8 = __addsf3(uVar11,local_20);
      local_20 = uVar8;
      uVar11 = __floatsisf(uVar7);
      uVar7 = __mulsf3(uVar11,0x3f000000);
      uVar11 = local_1c;
    }
    local_1c = __addsf3(uVar11,uVar7);
    iVar9 = CapcomApp::getInstance();
    local_20 = __mulsf3(uVar8,*(undefined4 *)(iVar9 + 0x40));
    uVar11 = local_1c;
    iVar9 = CapcomApp::getInstance();
    local_1c = __mulsf3(uVar11,*(undefined4 *)(iVar9 + 0x44));
    (**(code **)(**(int **)(this + 100) + 0x18))(*(int **)(this + 100),param_1,&local_30);
  }
  if ((this[0x91] != (ImageElement)0x0) || (this[0x92] != (ImageElement)0x0)) {
    CapcomGraphics::setColorModulation(param_1,false);
  }
  return;
}


