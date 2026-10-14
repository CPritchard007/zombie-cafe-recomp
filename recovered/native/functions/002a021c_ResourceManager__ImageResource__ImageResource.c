/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a021c ResourceManager::ImageResource::ImageResource */

/* ResourceManager::ImageResource::ImageResource(String, int) */

undefined8 __thiscall
ResourceManager::ImageResource::ImageResource
          (ImageResource *this,String *param_2,undefined4 param_3)

{
  CFTexture *this_00;
  ImageResource *pIStack_18;
  String *pSStack_14;
  undefined4 uStack_10;
  
  pIStack_18 = this;
  pSStack_14 = param_2;
  uStack_10 = param_3;
  String::String((String *)&pIStack_18,param_2);
  Resource::Resource((Resource *)this,(String *)&pIStack_18,param_3);
  String::~String((String *)&pIStack_18);
  this_00 = (CFTexture *)(this + 0x20);
  *(int *)this = *(int *)(DAT_002a027c + 0x2a0242) + 8;
  CFTexture::CFTexture(this_00);
  this[0x1c] = (ImageResource)0x2;
  CFTexture::releaseRef(this_00);
  CFTexture::init(this_00,(ccTexture2D *)0x0);
  return CONCAT44(pIStack_18,this);
}


