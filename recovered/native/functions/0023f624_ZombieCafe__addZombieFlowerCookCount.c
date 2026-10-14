/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023f624 ZombieCafe::addZombieFlowerCookCount */

/* ZombieCafe::addZombieFlowerCookCount() */

void __thiscall ZombieCafe::addZombieFlowerCookCount(ZombieCafe *this)

{
  short sVar1;
  
  sVar1 = *(short *)(this + 0x35c);
  *(short *)(this + 0x35c) = sVar1 + 1;
  if (3 < (short)(sVar1 + 1)) {
    *(undefined2 *)(this + 0x35c) = 3;
  }
  return;
}


