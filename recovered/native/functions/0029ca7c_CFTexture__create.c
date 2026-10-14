/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029ca7c CFTexture::create */

/* CFTexture::create(unsigned char const*, void*) */

CFTexture * __thiscall CFTexture::create(CFTexture *this,uchar *param_1,void *param_2)

{
  ccTexture2D *__ptr;
  int iVar1;
  
  __ptr = (ccTexture2D *)malloc(0x2c);
  CCTexture2D::Init(__ptr);
  iVar1 = CCTexture2D::Load(__ptr,param_1,param_2);
  if (iVar1 == 0) {
    L_PrintLog((char *)(DAT_0029cad8 + 0x29cabc),(char *)(DAT_0029cadc + 0x29cabe));
    free(__ptr);
    CFTexture(this);
  }
  else {
    L_PrintLog((char *)(DAT_0029cad0 + 0x29caa6),(char *)(DAT_0029cad4 + 0x29caa8));
    CFTexture(this,__ptr);
  }
  return this;
}


