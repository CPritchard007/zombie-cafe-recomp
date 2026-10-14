/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029d444 CImage::duplicate */

/* CImage::duplicate() const */

undefined8 CImage::duplicate(void)

{
  int in_r0;
  CImage *pCVar1;
  int aiStack_18 [3];
  
  aiStack_18[0] = in_r0;
  CFTexture::CFTexture((CFTexture *)aiStack_18,(CFTexture *)(in_r0 + 0x14));
  pCVar1 = (CImage *)operator_new(0x34);
  CImage(pCVar1,(CFTexture *)aiStack_18,(int)*(short *)(in_r0 + 0x20),(int)*(short *)(in_r0 + 0x22))
  ;
  CFTexture::~CFTexture((CFTexture *)aiStack_18);
  return CONCAT44(aiStack_18[0],pCVar1);
}


