/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a01f8 ResourceManager::Resource::createInputStream */

/* ResourceManager::Resource::createInputStream() */

ByteArrayInputStream * __thiscall ResourceManager::Resource::createInputStream(Resource *this)

{
  ByteArrayInputStream *this_00;
  
  this_00 = (ByteArrayInputStream *)operator_new(0x18);
  ByteArrayInputStream::ByteArrayInputStream
            (this_00,*(uchar **)(this + 0x14),*(int *)(this + 0x18),false);
  return this_00;
}


