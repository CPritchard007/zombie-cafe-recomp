/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fec04 ObjectiveSystem::clear */

/* ObjectiveSystem::clear() */

void __thiscall ObjectiveSystem::clear(ObjectiveSystem *this)

{
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  loadNewSet(this);
  return;
}


