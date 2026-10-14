/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002eada4 FUN_002eada4 */

void * FUN_002eada4(void)

{
  void *__s;
  
  __s = *(void **)(DAT_002eade4 + 0x2eadac);
  if (__s == (void *)0x0) {
    __s = operator_new(0x48);
    *(undefined4 *)((int)__s + 0x40) = 0;
    pthread_mutex_init((pthread_mutex_t *)((int)__s + 0x44),(pthread_mutexattr_t *)0x0);
    memset(__s,0,0x40);
  }
  else {
    *(undefined4 *)(DAT_002eade4 + 0x2eadac) = *(undefined4 *)((int)__s + 0x40);
  }
  return __s;
}


