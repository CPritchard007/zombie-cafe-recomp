/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a00c0 ResourceManager::Resource::loadImage */

/* ResourceManager::Resource::loadImage(char const*, int) */

undefined8 __thiscall ResourceManager::Resource::loadImage(Resource *this,char *param_1,int param_2)

{
  Resource *pRVar1;
  uchar *__ptr;
  void *pvVar2;
  Resource *pRVar3;
  Resource *local_20;
  char *pcStack_1c;
  int iStack_18;
  
  local_20 = this;
  pcStack_1c = param_1;
  iStack_18 = param_2;
  L_PrintLog((char *)(DAT_002a0128 + 0x2a00d2),(char *)(DAT_002a0124 + 0x2a00d0));
  __ptr = (uchar *)load(param_1,param_2);
  pvVar2 = (void *)CCTextureLocator::InitWithFile(param_1);
  CFTexture::create((CFTexture *)this,__ptr,pvVar2);
  CFTexture::CFTexture((CFTexture *)&local_20,(ccTexture2D *)0x0);
  pRVar1 = local_20;
  pRVar3 = *(Resource **)this;
  CFTexture::~CFTexture((CFTexture *)&local_20);
  if (pRVar3 == pRVar1) {
    L_PrintLog((char *)(DAT_002a012c + 0x2a010c),(char *)(DAT_002a0130 + 0x2a010e));
  }
  free(__ptr);
  return CONCAT44(local_20,this);
}


