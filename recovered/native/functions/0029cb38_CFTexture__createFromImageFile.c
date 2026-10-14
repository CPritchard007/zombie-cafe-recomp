/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029cb38 CFTexture::createFromImageFile */

/* CFTexture::createFromImageFile(String) */

CFTexture * __thiscall CFTexture::createFromImageFile(CFTexture *this,String *param_2)

{
  char *__ptr;
  ccTexture2D *pcVar1;
  
  __ptr = (char *)String::getBytes(param_2);
  pcVar1 = (ccTexture2D *)malloc(0x2c);
  CCTexture2D::Init(pcVar1);
  L_PrintLog((char *)(DAT_0029cb74 + 0x29cb58),__ptr);
  CCTexture2D::LoadFromImageFile(pcVar1,__ptr);
  free(__ptr);
  CFTexture(this,pcVar1);
  return this;
}


