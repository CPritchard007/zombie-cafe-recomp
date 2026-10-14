/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029fe24 ResourceManager::Resource::~Resource */

/* ResourceManager::Resource::~Resource() */

Resource * __thiscall ResourceManager::Resource::~Resource(Resource *this)

{
  *(int *)this = *(int *)(DAT_0029fe50 + 0x29fe30) + 8;
  unload(this);
  String::~String((String *)(this + 8));
  return this;
}


