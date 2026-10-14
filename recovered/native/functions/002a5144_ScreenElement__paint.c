/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a5144 ScreenElement::paint */

/* ScreenElement::paint(CapcomGraphics*) */

void __thiscall ScreenElement::paint(ScreenElement *this,CapcomGraphics *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  float extraout_s0;
  float extraout_s1;
  float extraout_s2;
  float extraout_s3;
  undefined4 in_stack_ffffffb8;
  undefined4 in_stack_ffffffbc;
  
  if (this[0x14] != (ScreenElement)0x0) {
    localToParentCoordsBig(this,0,0);
    CapcomGraphics::translateBig(CONCAT44(in_stack_ffffffbc,in_stack_ffffffb8));
    uVar2 = *(undefined4 *)(this + 0x10);
    CapcomGraphics::pushClip(param_1,0);
    if (*(uint *)(this + 0x18) >> 0x18 != 0) {
      iVar3 = *(int *)param_1;
      CapcomGraphics::setColor(param_1,*(uint *)(this + 0x18));
      __floatsisf(*(undefined4 *)(this + 0xc));
      uVar2 = __floatsisf(*(undefined4 *)(this + 0x10));
      CapcomGraphics::fillRect(param_1,extraout_s0,extraout_s1,extraout_s2,extraout_s3);
      CapcomGraphics::setColor(param_1,iVar3);
    }
    (**(code **)(*(int *)this + 0x10))(this,param_1);
    *(undefined4 *)(this + 0x34) = *(undefined4 *)(this + 0x2c);
    while (piVar4 = *(int **)(this + 0x34), piVar4 != (int *)0x0) {
      piVar1 = (int *)*piVar4;
      *(int *)(this + 0x34) = piVar4[2];
      if (piVar1 == (int *)0x0) break;
      (**(code **)(*piVar1 + 0xc))(piVar1,param_1);
    }
    CapcomGraphics::popClip();
    CapcomGraphics::translateBig(CONCAT44(in_stack_ffffffbc,uVar2));
  }
  return;
}


