/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a7162 ComponentAnimation::destroy */

/* ComponentAnimation::destroy() */

void __thiscall ComponentAnimation::destroy(ComponentAnimation *this)

{
  short sVar1;
  ComponentAnimationData *this_00;
  
  this_00 = *(ComponentAnimationData **)(this + 0x20);
  sVar1 = *(short *)(this_00 + 6);
  *(short *)(this_00 + 6) = sVar1 + -1;
  if ((short)(sVar1 + -1) < 1) {
    ComponentAnimationData::~ComponentAnimationData(this_00);
    operator_delete(this_00);
  }
  *(undefined4 *)(this + 0x20) = 0;
  ImageAnimation::destroy((ImageAnimation *)this);
  return;
}


