/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ab70a CCGetTimeOfDay */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CCGetTimeOfDay() */

undefined8 CCGetTimeOfDay(void)

{
  int iVar1;
  __time_t _Var2;
  timeval local_10;
  
  local_10.tv_sec = 0;
  local_10.tv_usec = 0;
  iVar1 = gettimeofday(&local_10,(__timezone_ptr_t)0x0);
  _Var2 = 0;
  if (iVar1 != -1) {
    _Var2 = local_10.tv_sec;
  }
  return CONCAT44(local_10.tv_sec,_Var2);
}


