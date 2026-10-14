/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a74e6 ImageAnimation::start */

/* ImageAnimation::start() */

void __thiscall ImageAnimation::start(ImageAnimation *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0x1c))();
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 0x10))(this);
  }
  this[6] = (ImageAnimation)((byte)this[6] | 2);
  return;
}


