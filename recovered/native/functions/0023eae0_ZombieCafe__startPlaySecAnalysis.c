/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023eae0 ZombieCafe::startPlaySecAnalysis */

/* ZombieCafe::startPlaySecAnalysis() */

void __thiscall ZombieCafe::startPlaySecAnalysis(ZombieCafe *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x4c) == 0) {
    uVar1 = CCSecondsSince1970();
    *(undefined4 *)(this + 0x4c) = uVar1;
  }
  return;
}


