/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a0568 ResourceManager::Resource::releaseHandle */

/* ResourceManager::Resource::releaseHandle() */

void __thiscall ResourceManager::Resource::releaseHandle(Resource *this)

{
  Resource RVar1;
  ResourceManager *this_00;
  
  RVar1 = this[5];
  this[5] = (Resource)((char)RVar1 + -1);
  if ((Resource)((char)RVar1 + -1) == (Resource)0x0) {
    this_00 = (ResourceManager *)CapcomApp::getResourceManager();
    removeResource(this_00,this);
  }
  return;
}


