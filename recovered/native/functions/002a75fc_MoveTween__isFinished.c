/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a75fc MoveTween::isFinished */

/* MoveTween::isFinished() const */

uint __thiscall MoveTween::isFinished(MoveTween *this)

{
  return (((int)*(uint *)(this + 0x14) >> 0x1f) - ((int)*(uint *)(this + 0x10) >> 0x1f)) +
         (uint)(*(uint *)(this + 0x10) <= *(uint *)(this + 0x14)) & 0xff;
}


