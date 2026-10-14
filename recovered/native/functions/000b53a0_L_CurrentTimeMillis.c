/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b53a0 L_CurrentTimeMillis */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* L_CurrentTimeMillis() */

void L_CurrentTimeMillis(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  timespec local_18;
  
  local_18.tv_sec = 0;
  local_18.tv_nsec = 0;
  clock_gettime(0,&local_18);
  uVar1 = __floatsidf(local_18.tv_sec);
  uVar1 = __muldf3((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),DAT_000b53e0,DAT_000b53e4);
  uVar2 = __floatsidf(local_18.tv_nsec);
  uVar2 = __divdf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),DAT_000b53e8,DAT_000b53ec);
  __adddf3((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),(int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  return;
}


