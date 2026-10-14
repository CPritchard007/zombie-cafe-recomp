/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a7656 PathTween::isFinished */

/* PathTween::isFinished() const */

bool __thiscall PathTween::isFinished(PathTween *this)

{
  return *(int *)(*(int *)(this + 0xc) + 8) - 1U <= (uint)*(ushort *)(this + 0x10);
}


