/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029dac4 CImage::getGraphics */

/* CImage::getGraphics() */

undefined8 CImage::getGraphics(void)

{
  int in_r0;
  CapcomGraphics *pCVar1;
  int aiStack_10 [2];
  
  aiStack_10[0] = in_r0;
  CFTexture::CFTexture((CFTexture *)aiStack_10,(CFTexture *)(in_r0 + 0x14));
  pCVar1 = (CapcomGraphics *)operator_new(0x48);
  CapcomGraphics::CapcomGraphics(pCVar1,(CFTexture *)aiStack_10);
  CFTexture::~CFTexture((CFTexture *)aiStack_10);
  return CONCAT44(aiStack_10[0],pCVar1);
}


