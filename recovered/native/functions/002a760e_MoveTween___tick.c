/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a760e MoveTween::_tick */

/* MoveTween::_tick(long) */

void __thiscall MoveTween::_tick(MoveTween *this,long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x14);
  *(long *)(this + 0x14) = param_1 + iVar1;
  if (*(int *)(this + 0x10) < param_1 + iVar1) {
    *(int *)(this + 0x14) = *(int *)(this + 0x10);
  }
  return;
}


