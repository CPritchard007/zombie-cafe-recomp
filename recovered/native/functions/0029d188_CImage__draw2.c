/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029d188 CImage::draw2 */

/* CImage::draw2(CapcomGraphics*, ccMat2x3&, float, float) const */

void CImage::draw2(CapcomGraphics *param_1,ccMat2x3 *param_2,float param_3,float param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_r2;
  undefined4 in_r3;
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
  
  local_48 = *(undefined4 *)(param_1 + 0x2c);
  local_44 = 0;
  local_40 = 0;
  local_3c = __mulsf3(local_48,in_r3);
  uVar1 = __floatsisf((int)*(short *)(param_1 + 0x2a) - (int)*(short *)(param_1 + 0x26));
  local_38 = __mulsf3(uVar1,0x3f000000);
  uVar1 = __floatsisf((int)*(short *)(param_1 + 0x24) - (int)*(short *)(param_1 + 0x28));
  local_34 = __mulsf3(uVar1,0x3f000000);
  FUN_0029cfe2(&local_30,in_r2,&local_48);
  local_48 = local_30;
  local_44 = local_2c;
  local_40 = local_28;
  local_3c = local_24;
  local_38 = local_20;
  local_34 = local_1c;
  CFTexture::CFTexture(aCStack_50,(CFTexture *)(param_1 + 0x14));
  uVar1 = __floatsisf((int)*(short *)(param_1 + 0x1c));
  uVar2 = __floatsisf((int)*(short *)(param_1 + 0x1e));
  uVar3 = __floatsisf((int)*(short *)(param_1 + 0x20));
  uVar4 = __floatsisf((int)*(short *)(param_1 + 0x22));
  CapcomGraphics::drawRegion((CapcomGraphics *)param_2,aCStack_50,uVar1,uVar2,uVar3,uVar4,&local_48)
  ;
  CFTexture::~CFTexture(aCStack_50);
  return;
}


