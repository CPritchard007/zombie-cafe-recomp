/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029ce58 CImage::draw */

/* CImage::draw(CapcomGraphics*, int, int, float, float, unsigned char, int) const */

void __thiscall
CImage::draw(CImage *this,CapcomGraphics *param_1,int param_2,int param_3,float param_4,
            float param_5,uchar param_6,int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  undefined3 in_stack_00000001;
  undefined1 in_stack_00000008;
  uint in_stack_0000000c;
  CFTexture aCStack_20 [12];
  
  if ((in_stack_0000000c & 0x18) != 0) {
    uVar1 = __floatsisf(param_2);
    uVar2 = __floatsisf((int)*(short *)(this + 0x2a));
    uVar2 = __mulsf3(uVar2,_param_6);
    __addsf3(uVar1,uVar2);
    param_2 = __fixsfsi();
    param_4 = extraout_s0;
    param_5 = extraout_s1;
  }
  if ((in_stack_0000000c & 0x30) != 0) {
    uVar1 = __floatsisf(param_4,param_5,param_2);
    uVar2 = __floatsisf((int)*(short *)(this + 0x26));
    uVar2 = __mulsf3(uVar2,_param_6);
    __subsf3(uVar1,uVar2);
    param_2 = __fixsfsi();
    param_4 = extraout_s0_00;
    param_5 = extraout_s1_00;
  }
  if ((in_stack_0000000c & 3) != 0) {
    uVar1 = __floatsisf(param_4,param_5,param_3);
    uVar2 = __floatsisf((int)*(short *)(this + 0x24));
    uVar2 = __mulsf3(uVar2,param_7);
    __addsf3(uVar1,uVar2);
    param_3 = __fixsfsi();
    param_4 = extraout_s0_01;
    param_5 = extraout_s1_01;
  }
  if ((in_stack_0000000c & 6) != 0) {
    uVar1 = __floatsisf(param_4,param_5,param_3);
    uVar2 = __floatsisf((int)*(short *)(this + 0x28));
    uVar2 = __mulsf3(uVar2,param_7);
    __subsf3(uVar1,uVar2);
    param_3 = __fixsfsi();
  }
  uVar1 = *(undefined4 *)(this + 0x2c);
  __mulsf3(_param_6,uVar1);
  __mulsf3(param_7,uVar1);
  CFTexture::CFTexture(aCStack_20,(CFTexture *)(this + 0x14));
  uVar1 = __floatsisf((int)*(short *)(this + 0x1c));
  uVar2 = __floatsisf((int)*(short *)(this + 0x1e));
  uVar3 = __floatsisf((int)*(short *)(this + 0x20));
  uVar4 = __floatsisf((int)*(short *)(this + 0x22));
  uVar5 = __floatsisf(param_2);
  uVar6 = __floatsisf(param_3);
  CapcomGraphics::drawScaledRegion
            (param_1,aCStack_20,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,in_stack_00000008,1);
  CFTexture::~CFTexture(aCStack_20);
  return;
}


