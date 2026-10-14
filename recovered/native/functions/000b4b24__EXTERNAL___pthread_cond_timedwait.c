/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b4b24 <EXTERNAL>::pthread_cond_timedwait */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_timedwait(pthread_cond_t *__cond,pthread_mutex_t *__mutex,timespec *__abstime)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_timedwait_004e0d44)();
  return iVar1;
}


