/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002eaa78 FUN_002eaa78 */

void FUN_002eaa78(int param_1)

{
  int *piVar1;
  pthread_mutex_t *__mutex;
  
  __mutex = (pthread_mutex_t *)(DAT_002eaa98 + 0x2eaa82);
  pthread_mutex_lock(__mutex);
  piVar1 = (int *)(DAT_002eaa9c + 0x2eaa8e);
  *(int *)(param_1 + 0x40) = *piVar1;
  *piVar1 = param_1;
  pthread_mutex_unlock(__mutex);
  return;
}


