/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023872c _INIT_88 */

void _INIT_88(void)

{
  pthread_mutex_t *__mutex;
  
  __mutex = (pthread_mutex_t *)(DAT_00238750 + 0x238736);
  pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
  __aeabi_atexit(__mutex,*(undefined4 *)(DAT_00238754 + 0x238744),
                 *(undefined4 *)(DAT_00238758 + 0x238746));
  return;
}


