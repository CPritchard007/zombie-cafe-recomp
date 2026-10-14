/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001038ac Furniture::draw */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Furniture::draw(CapcomGraphics*) */

void __thiscall Furniture::draw(Furniture *this,CapcomGraphics *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  iVar1 = CafeObject::isVisible((CafeObject *)this);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(*(int *)(this + 0x38) + 0x48);
    if (0 < *(int *)(this + 0x28)) {
      lVar3 = **(long **)(_FUN_00103928 + 0x1038cc);
      iVar1 = __divsi3(*(int *)(this + 0x28) << 0x10,**(undefined4 **)(iRam0010392c + 0x1038d4));
      uVar2 = CFColor::interpolate(uVar2,lVar3,iVar1,0);
    }
    if (param_1[0x18] != (CapcomGraphics)0x0) {
      uVar2 = uVar2 & 0xffffff | (uint)(byte)param_1[3] << 0x18;
    }
    if (uVar2 == 0xffffffff) {
      _draw(this,param_1);
    }
    else {
      CapcomGraphics::setColorModulation(param_1,true);
      CapcomGraphics::setColor(param_1,uVar2);
      _draw(this,param_1);
      CapcomGraphics::setColorModulation(param_1,false);
    }
  }
  return;
}


