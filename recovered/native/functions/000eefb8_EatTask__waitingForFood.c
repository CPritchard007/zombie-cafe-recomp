/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000eefb8 EatTask::waitingForFood */

/* EatTask::waitingForFood() */

byte __thiscall EatTask::waitingForFood(EatTask *this)

{
  byte bVar1;
  
  bVar1 = 0;
  if (this[0x2c] == (EatTask)0x1) {
    bVar1 = *(byte *)(*(int *)(this + 0x34) + 0x2e) ^ 1;
  }
  return bVar1;
}


