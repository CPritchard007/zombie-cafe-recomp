/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a741c FrameAnimation::FrameAnimation */

/* FrameAnimation::FrameAnimation(CImage**, int, int) */

FrameAnimation * __thiscall
FrameAnimation::FrameAnimation(FrameAnimation *this,CImage **param_1,int param_2,int param_3)

{
  int iVar1;
  
  ImageAnimation::ImageAnimation((ImageAnimation *)this);
  iVar1 = DAT_002a744c;
  *(CImage ***)(this + 0x20) = param_1;
  this[8] = SUB41(param_2,0);
  iVar1 = *(int *)(iVar1 + 0x2a7434);
  *(int *)(this + 0xc) = param_3;
  *(int *)this = iVar1 + 8;
  *(undefined4 *)(this + 0x10) = 0;
  this[9] = (FrameAnimation)0x0;
  this[5] = (FrameAnimation)0xff;
  this[6] = (FrameAnimation)0x1;
  return this;
}


