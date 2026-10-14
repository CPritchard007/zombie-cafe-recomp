/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e9e08 FUN_002e9e08 */

void FUN_002e9e08(int *param_1)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(DAT_002e9e30 + 0x2e9e12));
  iVar1 = *param_1;
  *param_1 = 1;
  if (iVar1 << 0x16 < 0) {
    pthread_cond_broadcast((pthread_cond_t *)(DAT_002e9e34 + 0x2e9e24));
  }
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_002e9e38 + 0x2e9e2c));
  return;
}


