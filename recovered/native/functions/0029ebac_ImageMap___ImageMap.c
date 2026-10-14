/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029ebac ImageMap::~ImageMap */

/* ImageMap::~ImageMap() */

ImageMap * __thiscall ImageMap::~ImageMap(ImageMap *this)

{
  ResourceManager::Resource::releaseHandle(*(Resource **)this);
  return this;
}


