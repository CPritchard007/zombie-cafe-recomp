/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e9da0 FUN_002e9da0 */

undefined4 FUN_002e9da0(uint *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  pthread_cond_t *__cond;
  pthread_mutex_t *__mutex;
  
  __mutex = (pthread_mutex_t *)(DAT_002e9df8 + 0x2e9daa);
  pthread_mutex_lock(__mutex);
  uVar3 = *param_1;
  if ((int)(uVar3 << 0x1f) < 0) {
LAB_002e9dd8:
    pthread_mutex_unlock((pthread_mutex_t *)(DAT_002e9e00 + 0x2e9dde));
    uVar2 = 0;
  }
  else {
    if ((int)(uVar3 << 0x17) < 0) {
      __cond = (pthread_cond_t *)(DAT_002e9dfc + 0x2e9dc2);
      do {
        *param_1 = uVar3 | 0x200;
        pthread_cond_wait(__cond,__mutex);
        uVar3 = *param_1;
        if ((int)(uVar3 << 0x1f) < 0) goto LAB_002e9dd8;
      } while ((int)(uVar3 << 0x17) < 0);
    }
    iVar1 = DAT_002e9e04;
    *param_1 = 0x100;
    pthread_mutex_unlock((pthread_mutex_t *)(iVar1 + 0x2e9df0));
    uVar2 = 1;
  }
  return uVar2;
}


