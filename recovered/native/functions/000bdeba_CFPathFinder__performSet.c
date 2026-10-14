/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bdeba CFPathFinder::performSet */

/* CFPathFinder::performSet(int) */

void __thiscall CFPathFinder::performSet(CFPathFinder *this,int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  
  iVar6 = *(int *)(this + 8);
  iVar3 = *(int *)(this + 0xc);
  iVar4 = param_1 * *(int *)(this + 4) * 4;
  pvVar5 = *(void **)this;
  bVar1 = *(byte *)(*(int *)(this + 0x14) + param_1);
  uVar2 = isNodeEnabled(this,param_1);
  CCPathFinding::SetNode
            (pvVar5,param_1,(uint *)(iVar6 + iVar4),(float *)(iVar3 + iVar4),(uint)bVar1,uVar2);
  return;
}


