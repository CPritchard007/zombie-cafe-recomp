/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029f954 PackedImage::PackedImage */

/* PackedImage::PackedImage(CImage*, String, int, String, int) */

PackedImage * __thiscall
PackedImage::PackedImage
          (PackedImage *this,CImage *param_1,String *param_3,undefined4 param_4,String *param_5,
          undefined4 param_6)

{
  Resource *this_00;
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  CImage::CImage((CImage *)this,param_1);
  *(int *)this = *(int *)(DAT_0029f9e4 + 0x29f96c) + 8;
  String::String(aSStack_30,param_5);
  String::String(aSStack_20,aSStack_30);
  this_00 = (Resource *)ResourceManager::load(aSStack_20,param_6,1);
  String::~String(aSStack_20);
  String::~String(aSStack_30);
  String::String(aSStack_28,param_3);
  String::operator=((String *)(this + 4),aSStack_28);
  String::~String(aSStack_28);
  *(undefined4 *)(this + 0xc) = param_4;
  readBin(this,this_00);
  ResourceManager::Resource::releaseHandle(this_00);
  return this;
}


