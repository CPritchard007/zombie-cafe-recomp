/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a0406 ResourceManager::ResourceManager */

/* ResourceManager::ResourceManager(int, int) */

ResourceManager * __thiscall
ResourceManager::ResourceManager(ResourceManager *this,int param_1,int param_2)

{
  Vector<ResourceManager::Resource*>::Vector((Vector<ResourceManager::Resource*> *)this,param_1);
  Vector<ResourceManager::Resource*>::Vector
            ((Vector<ResourceManager::Resource*> *)(this + 0xc),param_2);
  return this;
}


