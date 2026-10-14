/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023700c WaitTask::start */

/* WaitTask::start() */

void __thiscall WaitTask::start(WaitTask *this)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  char extraout_r1;
  uchar uVar4;
  CharacterInstance *this_00;
  
  Task::start((Task *)this);
  this_00 = *(CharacterInstance **)(this + 0x20);
  if (this[0x28] == (WaitTask)0x0) {
    uVar4 = '\x01';
  }
  else if (*(char *)(*(int *)(this_00 + 0x8c) + 5) == '\x02') {
    iVar2 = arc4random();
    __aeabi_idivmod(iVar2 + (iVar2 >> 0x1f) ^ iVar2 >> 0x1f,3);
    uVar4 = extraout_r1 + '\x0f';
  }
  else {
    uVar3 = arc4random();
    bVar1 = (byte)((int)uVar3 >> 0x1f);
    uVar4 = (((char)uVar3 + bVar1 ^ bVar1) & 1) + 0x10;
  }
  CharacterInstance::setCurrentAnimation(this_00,uVar4,0xff,false);
  return;
}


