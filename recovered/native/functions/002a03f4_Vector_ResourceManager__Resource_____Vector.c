/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a03f4 Vector<ResourceManager::Resource*>::~Vector */

/* Vector<ResourceManager::Resource*>::~Vector() */

Vector<ResourceManager::Resource*> * __thiscall
Vector<ResourceManager::Resource*>::~Vector(Vector<ResourceManager::Resource*> *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  return this;
}


