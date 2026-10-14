/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029fe0a ResourceManager::Resource::unload */

/* ResourceManager::Resource::unload() */

void __thiscall ResourceManager::Resource::unload(Resource *this)

{
  if (this[0x12] != (Resource)0x0) {
    if (*(void **)(this + 0x14) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x14));
    }
    this[0x12] = (Resource)0x0;
  }
  return;
}


