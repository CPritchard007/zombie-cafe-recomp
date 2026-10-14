/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00161848 CEvent::wait */

/* CEvent::wait(long, int) */

bool __thiscall CEvent::wait(CEvent *this,long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  timespec local_20;
  
  pthread_mutex_lock((pthread_mutex_t *)this);
  iVar1 = __divsi3(param_1,1000);
  __aeabi_idivmod(param_1,1000);
  do {
    while( true ) {
      if (param_2 == *(int *)(this + 8)) goto LAB_001618a8;
      if (0 < param_1) break;
      pthread_cond_wait((pthread_cond_t *)(this + 4),(pthread_mutex_t *)this);
    }
    clock_gettime(0,&local_20);
    local_20.tv_sec = local_20.tv_sec + iVar1;
    local_20.tv_nsec = local_20.tv_nsec + extraout_r1;
    iVar2 = pthread_cond_timedwait((pthread_cond_t *)(this + 4),(pthread_mutex_t *)this,&local_20);
  } while (iVar2 != 0x6e);
LAB_001618a8:
  iVar1 = *(int *)(this + 8);
  pthread_mutex_unlock((pthread_mutex_t *)this);
  return param_2 == iVar1;
}


