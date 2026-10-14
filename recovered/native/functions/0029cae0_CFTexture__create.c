/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029cae0 CFTexture::create */

/* CFTexture::create(int, int, int, int, int, void const*, void*) */

CFTexture * __thiscall
CFTexture::create(CFTexture *this,int param_1,int param_2,int param_3,int param_4,int param_5,
                 void *param_6,void *param_7)

{
  ccTexture2D *__ptr;
  int iVar1;
  
  __ptr = (ccTexture2D *)malloc(0x2c);
  CCTexture2D::Init(__ptr);
  iVar1 = CCTexture2D::LoadFromData(__ptr,1,param_1,param_2,param_5,param_6,param_7);
  if (iVar1 == 0) {
    free(__ptr);
    CFTexture(this);
  }
  else {
    *(int *)(__ptr + 0x14) = param_3;
    *(int *)(__ptr + 0x18) = param_4;
    CFTexture(this,__ptr);
  }
  return this;
}


