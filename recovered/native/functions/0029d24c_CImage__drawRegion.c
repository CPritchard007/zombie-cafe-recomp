/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029d24c CImage::drawRegion */

/* CImage::drawRegion(CapcomGraphics*, int, int, int, int, ccMat2x3&) const */

void __thiscall
CImage::drawRegion(CImage *this,CapcomGraphics *param_1,int param_2,int param_3,int param_4,
                  int param_5,ccMat2x3 *param_6)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
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
  
  sVar1 = *(short *)(this + 0x2a);
  sVar2 = *(short *)(this + 0x24);
  local_44 = 0;
  local_40 = 0;
  local_34 = 0;
  local_48 = *(undefined4 *)(this + 0x2c);
  local_3c = local_48;
  uVar3 = __floatsisf((int)sVar2 - (int)*(short *)(this + 0x28));
  local_38 = __mulsf3(uVar3,0x3f000000);
  FUN_0029cfe2(&local_30,param_6,&local_48);
  local_48 = local_30;
  local_44 = local_2c;
  local_40 = local_28;
  local_3c = local_24;
  local_38 = local_20;
  local_34 = local_1c;
  CFTexture::CFTexture(aCStack_50,(CFTexture *)(this + 0x14));
  uVar3 = __floatsisf((int)*(short *)(this + 0x1c) + (param_2 - sVar1));
  uVar4 = __floatsisf((int)*(short *)(this + 0x1e) + (param_3 - sVar2));
  uVar5 = __floatsisf(param_4);
  uVar6 = __floatsisf(param_5);
  CapcomGraphics::drawRegion(param_1,aCStack_50,uVar3,uVar4,uVar5,uVar6,param_6);
  CFTexture::~CFTexture(aCStack_50);
  return;
}


