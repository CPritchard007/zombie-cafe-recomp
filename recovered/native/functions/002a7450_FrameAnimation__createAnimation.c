/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a7450 FrameAnimation::createAnimation */

/* FrameAnimation::createAnimation(PackedImage*, int) */

undefined8 FrameAnimation::createAnimation(PackedImage *param_1,int param_2)

{
  CImage *pCVar1;
  FrameAnimation *this;
  CImage **ppCVar2;
  int iVar3;
  int iVar4;
  CImage **local_20;
  
  if (param_1 == (PackedImage *)0x0) {
    this = (FrameAnimation *)0x0;
    local_20 = (CImage **)0x0;
  }
  else {
    iVar4 = (int)*(short *)(param_1 + 0x38);
    local_20 = (CImage **)operator_new__(iVar4 << 2);
    ppCVar2 = local_20;
    for (iVar3 = 0; iVar3 < iVar4; iVar3 = iVar3 + 1) {
      pCVar1 = (CImage *)PackedImage::getImage(param_1,iVar3,false);
      *ppCVar2 = pCVar1;
      ppCVar2 = ppCVar2 + 1;
    }
    this = (FrameAnimation *)operator_new(0x24);
    FrameAnimation(this,local_20,iVar4,param_2);
  }
  return CONCAT44(local_20,this);
}


