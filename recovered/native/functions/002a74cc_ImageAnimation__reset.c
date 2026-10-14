/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a74cc ImageAnimation::reset */

/* ImageAnimation::reset() */

void __thiscall ImageAnimation::reset(ImageAnimation *this)

{
  (**(code **)(*(int *)this + 0x2c))(this,0);
  this[5] = this[4];
  this[6] = (ImageAnimation)((byte)this[6] & 0xfb);
  return;
}


