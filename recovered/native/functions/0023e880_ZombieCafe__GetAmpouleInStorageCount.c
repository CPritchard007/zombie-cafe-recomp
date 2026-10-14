/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023e880 ZombieCafe::GetAmpouleInStorageCount */

/* ZombieCafe::GetAmpouleInStorageCount(int) */

int __thiscall ZombieCafe::GetAmpouleInStorageCount(ZombieCafe *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(this + 0x7e8);
  iVar2 = iVar1;
  if (iVar1 != 0) {
    iVar2 = 0;
    for (iVar3 = 0; iVar3 < *(int *)(iVar1 + 0x100) + 1; iVar3 = iVar3 + 1) {
      iVar4 = *(int *)(*(int *)(iVar3 * 4 + *(int *)(iVar1 + 0x104)) * 4 + *(int *)(iVar1 + 0x94));
      if (*(char *)(iVar4 + 0x44) == '\x10') {
        iVar2 = iVar2 + (uint)(*(int *)(iVar4 + 0x24) == param_1);
      }
    }
  }
  return iVar2;
}


