/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002eb198 _INIT_96 */

void _INIT_96(void)

{
  pthread_mutex_t *__mutex;
  
  __mutex = (pthread_mutex_t *)(DAT_002eb1b8 + 0x2eb1a2);
  pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
  __aeabi_atexit(__mutex,DAT_002eb1c0 + 0x2eb1b0,*(undefined4 *)(DAT_002eb1bc + 0x2eb1ae));
  return;
}


