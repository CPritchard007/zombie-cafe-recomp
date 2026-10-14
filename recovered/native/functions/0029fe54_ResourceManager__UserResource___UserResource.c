/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029fe54 ResourceManager::UserResource::~UserResource */

/* ResourceManager::UserResource::~UserResource() */

UserResource * __thiscall ResourceManager::UserResource::~UserResource(UserResource *this)

{
  *(int *)this = *(int *)(DAT_0029fe6c + 0x29fe5e) + 8;
  Resource::~Resource((Resource *)this);
  return this;
}


