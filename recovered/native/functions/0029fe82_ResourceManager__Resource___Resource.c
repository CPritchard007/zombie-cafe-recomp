/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029fe82 ResourceManager::Resource::~Resource */

/* ResourceManager::Resource::~Resource() */

Resource * __thiscall ResourceManager::Resource::~Resource(Resource *this)

{
  ~Resource(this);
  operator_delete(this);
  return this;
}


