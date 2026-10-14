/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029fef4 ResourceManager::ImageResource::~ImageResource */

/* ResourceManager::ImageResource::~ImageResource() */

ImageResource * __thiscall ResourceManager::ImageResource::~ImageResource(ImageResource *this)

{
  ~ImageResource(this);
  operator_delete(this);
  return this;
}


