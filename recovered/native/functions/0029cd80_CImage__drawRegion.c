/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029cd80 CImage::drawRegion */

/* CImage::drawRegion(CapcomGraphics*, int, int, int, int, int, int, unsigned char, int) const */

void __thiscall
CImage::drawRegion(CImage *this,CapcomGraphics *param_1,int param_2,int param_3,int param_4,
                  int param_5,int param_6,int param_7,uchar param_8,int param_9)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  CFTexture aCStack_20 [12];
  
  sVar1 = *(short *)(this + 0x2a);
  if ((param_9 & 0x18U) != 0) {
    param_6 = param_6 + sVar1 * param_2;
  }
  if ((param_9 & 0x30U) != 0) {
    param_6 = param_6 - param_2 * *(short *)(this + 0x26);
  }
  sVar2 = *(short *)(this + 0x24);
  if ((param_9 & 3U) != 0) {
    param_7 = param_7 + sVar2 * param_3;
  }
  if ((param_9 & 6U) != 0) {
    param_7 = param_7 - param_3 * *(short *)(this + 0x28);
  }
  CFTexture::CFTexture(aCStack_20,(CFTexture *)(this + 0x14));
  uVar3 = __floatsisf((int)*(short *)(this + 0x1c) + (param_2 - sVar1));
  uVar4 = __floatsisf((int)*(short *)(this + 0x1e) + (param_3 - sVar2));
  uVar5 = __floatsisf(param_4);
  uVar6 = __floatsisf(param_5);
  uVar7 = __floatsisf(param_6);
  uVar8 = __floatsisf(param_7);
  CapcomGraphics::drawRegion
            (param_1,aCStack_20,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,param_8,1,param_9);
  CFTexture::~CFTexture(aCStack_20);
  return;
}


