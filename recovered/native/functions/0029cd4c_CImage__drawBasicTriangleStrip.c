/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029cd4c CImage::drawBasicTriangleStrip */

/* CImage::drawBasicTriangleStrip(CapcomGraphics*, float const*, float const*, int) const */

undefined8 __thiscall
CImage::drawBasicTriangleStrip
          (CImage *this,CapcomGraphics *param_1,float *param_2,float *param_3,int param_4)

{
  float *pfStack_18;
  float *pfStack_14;
  
  pfStack_18 = param_2;
  pfStack_14 = param_3;
  CFTexture::CFTexture((CFTexture *)&pfStack_18,(CFTexture *)(this + 0x14));
  CapcomGraphics::drawBasicTriangleStripTextured(param_1,&pfStack_18,param_2,param_3);
  CFTexture::~CFTexture((CFTexture *)&pfStack_18);
  return CONCAT44(param_1,param_4);
}


