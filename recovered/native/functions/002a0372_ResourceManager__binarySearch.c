/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a0372 ResourceManager::binarySearch */

/* ResourceManager::binarySearch(String const&, int) const */

undefined8 __thiscall
ResourceManager::binarySearch(ResourceManager *this,String *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(this + 0x10);
  uVar2 = 0;
  while ((int)uVar2 <= iVar4) {
    uVar3 = uVar2 + ((int)(iVar4 - uVar2) >> 1);
    iVar1 = compare(this,param_1,param_2,*(Resource **)(uVar3 * 4 + *(int *)(this + 0x14)));
    if (iVar1 < 0) {
      iVar4 = uVar3 - 1;
    }
    else {
      if (iVar1 == 0) goto LAB_002a03aa;
      uVar2 = uVar3 + 1;
    }
  }
  uVar3 = ~uVar2;
LAB_002a03aa:
  return CONCAT44(param_1,uVar3);
}


