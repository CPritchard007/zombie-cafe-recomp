/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a04b0 ResourceManager::loadResources */

/* ResourceManager::loadResources(long) */

void __thiscall ResourceManager::loadResources(ResourceManager *this,long param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = Platform::getAppTime();
  do {
    if (*(int *)(this + 4) == -1) {
      return;
    }
    piVar2 = *(int **)(*(int *)(this + 4) * 4 + *(int *)(this + 8));
    Vector<ResourceManager::Resource*>::removeElementAt((int)this);
    if (*(char *)((int)piVar2 + 0x12) == '\0') {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    uVar4 = Platform::getAppTime();
    uVar4 = __subdf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),(int)uVar3,
                     (int)((ulonglong)uVar3 >> 0x20));
    uVar4 = __muldf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),DAT_002a0518,DAT_002a051c);
    uVar5 = __floatsidf(param_1);
    iVar1 = __aeabi_dcmpgt((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),(int)uVar5,
                           (int)((ulonglong)uVar5 >> 0x20));
  } while (iVar1 == 0);
  return;
}


