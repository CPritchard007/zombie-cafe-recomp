/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a0584 ResourceManager::setResident */

/* ResourceManager::setResident(ResourceManager::Resource*, bool) */

void ResourceManager::setResident(Resource *param_1,bool param_2)

{
  if ((param_1 != (Resource *)0x0) && (param_1[4] != (Resource)param_2)) {
    param_1[4] = (Resource)param_2;
    if (param_2) {
      param_1[5] = (Resource)((char)param_1[5] + '\x01');
    }
    else {
      Resource::releaseHandle(param_1);
    }
  }
  return;
}


