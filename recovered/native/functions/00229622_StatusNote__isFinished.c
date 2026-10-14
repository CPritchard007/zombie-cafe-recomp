/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00229622 StatusNote::isFinished */

/* StatusNote::isFinished() */

uint __thiscall StatusNote::isFinished(StatusNote *this)

{
  return (((int)*(uint *)(this + 0xc) >> 0x1f) - ((int)*(uint *)(this + 0x28) >> 0x1f)) +
         (uint)(*(uint *)(this + 0x28) <= *(uint *)(this + 0xc)) & 0xff;
}


