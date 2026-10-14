/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002296fc StatusNote::draw */

/* StatusNote::draw(CapcomGraphics*) */

void __thiscall StatusNote::draw(StatusNote *this,CapcomGraphics *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *local_1c;
  
  CapcomGraphics::setColor(param_1,**(int **)(DAT_00229848 + 0x229708) << 0x18 | DAT_0022984c);
  CapcomGraphics::setColorModulation(param_1,true);
  iVar2 = *(int *)(this + 0x10) >> 0x10;
  sVar4 = (short)*(int *)(this + 0x10);
  if ((byte)this[8] < 4) {
    (**(code **)(**(int **)(this + 0x20) + 0x10))
              (*(int **)(this + 0x20),param_1,iVar2,(int)sVar4,0,0x22);
    iVar2 = CImage::getWidth(*(CImage **)(this + 0x20));
    (**(code **)(**(int **)(this + 0x1c) + 0x14))
              (*(int **)(this + 0x1c),(*(int *)(this + 0x10) >> 0x10) + iVar2,
               (int)(short)*(int *)(this + 0x10));
    ScreenElement::localToParentCoords(*(ScreenElement **)(this + 0x1c),0,0);
    CapcomGraphics::translate((long)param_1);
    (**(code **)(**(int **)(this + 0x1c) + 0x10))(*(int **)(this + 0x1c),param_1);
    CapcomGraphics::translate((long)param_1);
  }
  else {
    piVar1 = *(int **)(this + 0x24);
    piVar6 = *(int **)(DAT_00229850 + 0x229730);
    if ((byte)this[8] < 0xb) {
      (**(code **)(*piVar1 + 0x14))(piVar1,param_1,iVar2,(int)sVar4,0x40000000,0x40000000,0,0xc);
      local_1c = *(int **)(this + 0x20);
      iVar2 = CImage::getWidth(*(CImage **)(this + 0x24));
      iVar3 = *local_1c;
      iVar2 = (*(int *)(this + 0x10) >> 0x10) + (iVar2 >> 1) * 2;
      iVar5 = (int)(short)*(int *)(this + 0x10) - *piVar6;
      uVar7 = 0x40000000;
      uVar8 = 0x40000000;
    }
    else {
      (**(code **)(*piVar1 + 0x14))(piVar1,param_1,iVar2,(int)sVar4,0x40000000,0x40000000,0,0xc);
      local_1c = *(int **)(this + 0x20);
      iVar2 = CImage::getWidth(*(CImage **)(this + 0x24));
      iVar3 = *local_1c;
      iVar2 = (*(int *)(this + 0x10) >> 0x10) + (iVar2 >> 1) * 2;
      iVar5 = (int)(short)*(int *)(this + 0x10) - *piVar6;
      uVar7 = 0x3f800000;
      uVar8 = 0x3f800000;
    }
    (**(code **)(iVar3 + 0x14))(local_1c,param_1,iVar2,iVar5,uVar7,uVar8,0,0x12);
  }
  CapcomGraphics::setColorModulation(param_1,false);
  return;
}


