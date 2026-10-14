/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a7358 FrameAnimation::destroy */

/* FrameAnimation::destroy() */

void __thiscall FrameAnimation::destroy(FrameAnimation *this)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  
  for (iVar3 = 0; pvVar2 = *(void **)(this + 0x20), iVar3 < (int)(uint)(byte)this[8];
      iVar3 = iVar3 + 1) {
    piVar1 = *(int **)((int)pvVar2 + iVar3 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  ImageAnimation::destroy((ImageAnimation *)this);
  return;
}


