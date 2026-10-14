/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d0ea8 ActiveQuest::ActiveQuest */

/* ActiveQuest::ActiveQuest() */

void __thiscall ActiveQuest::ActiveQuest(ActiveQuest *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_001d0ecc;
  uVar1 = DAT_001d0ec8;
  *(undefined4 *)this = 0xffffffff;
  this[0x10] = (ActiveQuest)0x0;
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  this[0x18] = (ActiveQuest)0x0;
  return;
}


