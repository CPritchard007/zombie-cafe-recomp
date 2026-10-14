/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029d0ca CImage::draw */

/* CImage::draw(CapcomGraphics*, ccMat2x3&) const */

void __thiscall CImage::draw(CImage *this,CapcomGraphics *param_1,ccMat2x3 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CFTexture aCStack_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_44 = 0;
  local_40 = 0;
  local_48 = *(undefined4 *)(this + 0x2c);
  local_3c = local_48;
  uVar1 = __floatsisf((int)*(short *)(this + 0x2a) - (int)*(short *)(this + 0x26));
  local_38 = __mulsf3(uVar1,0x3f000000);
  uVar1 = __floatsisf((int)*(short *)(this + 0x24) - (int)*(short *)(this + 0x28));
  local_34 = __mulsf3(uVar1,0x3f000000);
  FUN_0029cfe2(&local_30,param_2,&local_48);
  local_48 = local_30;
  local_44 = local_2c;
  local_40 = local_28;
  local_3c = local_24;
  local_38 = local_20;
  local_34 = local_1c;
  CFTexture::CFTexture(aCStack_50,(CFTexture *)(this + 0x14));
  uVar1 = __floatsisf((int)*(short *)(this + 0x1c));
  uVar2 = __floatsisf((int)*(short *)(this + 0x1e));
  uVar3 = __floatsisf((int)*(short *)(this + 0x20));
  uVar4 = __floatsisf((int)*(short *)(this + 0x22));
  CapcomGraphics::drawRegion(param_1,aCStack_50,uVar1,uVar2,uVar3,uVar4,&local_48);
  CFTexture::~CFTexture(aCStack_50);
  return;
}


