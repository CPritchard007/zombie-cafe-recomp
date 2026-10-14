/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a7110 ComponentAnimation::ComponentAnimationData::~ComponentAnimationData */

/* ComponentAnimation::ComponentAnimationData::~ComponentAnimationData() */

ComponentAnimationData * __thiscall
ComponentAnimation::ComponentAnimationData::~ComponentAnimationData(ComponentAnimationData *this)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  for (iVar4 = 0; pvVar2 = *(void **)this, iVar4 < *(short *)(this + 4); iVar4 = iVar4 + 1) {
    puVar5 = (undefined4 *)((int)pvVar2 + iVar4 * 0x14);
    for (iVar3 = 0; pvVar2 = (void *)*puVar5, iVar3 < (int)(uint)*(byte *)((int)puVar5 + 0x12);
        iVar3 = iVar3 + 1) {
      piVar1 = *(int **)((int)pvVar2 + iVar3 * 0xc + 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
  }
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  return this;
}


