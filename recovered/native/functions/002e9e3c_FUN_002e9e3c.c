/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e9e3c FUN_002e9e3c */

void FUN_002e9e3c(int *param_1)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(DAT_002e9e64 + 0x2e9e46));
  iVar1 = *param_1;
  *param_1 = 0;
  if (iVar1 << 0x16 < 0) {
    pthread_cond_broadcast((pthread_cond_t *)(DAT_002e9e68 + 0x2e9e58));
  }
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_002e9e6c + 0x2e9e60));
  return;
}


