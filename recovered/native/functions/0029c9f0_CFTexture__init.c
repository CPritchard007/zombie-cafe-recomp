/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029c9f0 CFTexture::init */

/* CFTexture::init(ccTexture2D*) */

void __thiscall CFTexture::init(CFTexture *this,ccTexture2D *param_1)

{
  CFTextureRef *this_00;
  
  if (param_1 == (ccTexture2D *)0x0) {
    this_00 = (CFTextureRef *)0x0;
  }
  else {
    this_00 = (CFTextureRef *)operator_new(0x10);
    CFTextureRef::CFTextureRef(this_00,param_1);
  }
  *(CFTextureRef **)this = this_00;
  return;
}


