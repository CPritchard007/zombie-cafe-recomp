/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029feb8 ResourceManager::ImageResource::~ImageResource */

/* ResourceManager::ImageResource::~ImageResource() */

ImageResource * __thiscall ResourceManager::ImageResource::~ImageResource(ImageResource *this)

{
  *(int *)this = *(int *)(DAT_0029fef0 + 0x29fec4) + 8;
  unload(this);
  CFTexture::~CFTexture((CFTexture *)(this + 0x20));
  Resource::~Resource((Resource *)this);
  return this;
}


