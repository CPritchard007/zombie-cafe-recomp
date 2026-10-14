/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a044a ResourceManager::~ResourceManager */

/* ResourceManager::~ResourceManager() */

ResourceManager * __thiscall ResourceManager::~ResourceManager(ResourceManager *this)

{
  flushResources();
  Vector<ResourceManager::Resource*>::~Vector((Vector<ResourceManager::Resource*> *)(this + 0xc));
  Vector<ResourceManager::Resource*>::~Vector((Vector<ResourceManager::Resource*> *)this);
  return this;
}


