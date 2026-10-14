/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029f138 PackagedData::~PackagedData */

/* PackagedData::~PackagedData() */

PackagedData * __thiscall PackagedData::~PackagedData(PackagedData *this)

{
  ResourceManager::Resource::releaseHandle(*(Resource **)this);
  return this;
}


