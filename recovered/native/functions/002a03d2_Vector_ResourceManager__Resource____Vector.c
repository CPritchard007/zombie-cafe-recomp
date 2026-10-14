/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a03d2 Vector<ResourceManager::Resource*>::Vector */

/* Vector<ResourceManager::Resource*>::Vector(int) */

Vector<ResourceManager::Resource*> * __thiscall
Vector<ResourceManager::Resource*>::Vector(Vector<ResourceManager::Resource*> *this,int param_1)

{
  void *__s;
  
  *(int *)this = param_1;
  __s = operator_new__(param_1 << 2);
  *(void **)(this + 8) = __s;
  memset(__s,0,*(int *)this << 2);
  *(undefined4 *)(this + 4) = 0xffffffff;
  return this;
}


