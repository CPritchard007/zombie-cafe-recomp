/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ab6e2 CCGetTimeMS */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CCGetTimeMS() */

undefined8 CCGetTimeMS(void)

{
  int iVar1;
  int iVar2;
  timeval local_10;
  
  iVar2 = 0;
  local_10.tv_sec = 0;
  local_10.tv_usec = 0;
  iVar1 = gettimeofday(&local_10,(__timezone_ptr_t)0x0);
  if (iVar1 != -1) {
    iVar2 = local_10.tv_sec * 1000;
    iVar1 = __divsi3(local_10.tv_usec);
    iVar2 = iVar2 + iVar1;
  }
  return CONCAT44(local_10.tv_sec,iVar2);
}


