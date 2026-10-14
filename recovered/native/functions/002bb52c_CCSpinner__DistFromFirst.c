/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bb52c CCSpinner::DistFromFirst */

/* CCSpinner::DistFromFirst(void*) */

void CCSpinner::DistFromFirst(void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = GetLoc(param_1);
  FirstIndex(param_1);
  uVar2 = __floatsisf();
  __subsf3(uVar1,uVar2);
  return;
}


