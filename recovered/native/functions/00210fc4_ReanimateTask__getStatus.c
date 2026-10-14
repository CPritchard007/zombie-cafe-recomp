/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00210fc4 ReanimateTask::getStatus */

/* ReanimateTask::getStatus() */

StringUtil * ReanimateTask::getStatus(void)

{
  StringUtil *in_r0;
  ulong uVar1;
  int in_r1;
  
  uVar1 = __divsi3(*(undefined4 *)(*(int *)(*(int *)(in_r1 + 0x20) + 0x8c) + 0x50),1000);
  StringUtil::createTimeString(in_r0,uVar1,'\x02');
  return in_r0;
}


