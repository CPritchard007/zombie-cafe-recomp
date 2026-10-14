/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029ccb8 CImage::drawTriangleStrip */

/* CImage::drawTriangleStrip(CapcomGraphics*, unsigned int, void const*, unsigned int, void const*,
   unsigned char const*, unsigned int, void const*, int) const */

void __thiscall
CImage::drawTriangleStrip
          (CImage *this,CapcomGraphics *param_1,uint param_2,void *param_3,uint param_4,
          void *param_5,uchar *param_6,uint param_7,void *param_8,int param_9)

{
  CFTexture aCStack_18 [8];
  
  CFTexture::CFTexture(aCStack_18,(CFTexture *)(this + 0x14));
  CapcomGraphics::drawTriangleStripTextured
            (param_1,aCStack_18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  CFTexture::~CFTexture(aCStack_18);
  return;
}


