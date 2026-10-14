/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029fe70 ResourceManager::UserResource::~UserResource */

/* ResourceManager::UserResource::~UserResource() */

UserResource * __thiscall ResourceManager::UserResource::~UserResource(UserResource *this)

{
  ~UserResource(this);
  operator_delete(this);
  return this;
}


