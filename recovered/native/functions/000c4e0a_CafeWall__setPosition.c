/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c4e0a CafeWall::setPosition */

/* CafeWall::setPosition(long) */

void __thiscall CafeWall::setPosition(CafeWall *this,long param_1)

{
  CafeObject::setPosition((CafeObject *)this,param_1);
  *(short *)(this + 0x24) = *(short *)(this + 0x24) + -10;
  return;
}


