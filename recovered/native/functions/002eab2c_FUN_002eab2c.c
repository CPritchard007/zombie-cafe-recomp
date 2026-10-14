/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002eab2c FUN_002eab2c */

void FUN_002eab2c(undefined4 *param_1,int param_2)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  int iVar2;
  
  __mutex = (pthread_mutex_t *)(DAT_002eab54 + 0x2eab36);
  pthread_mutex_lock(__mutex);
  iVar1 = DAT_002eab58 + 0x2eab44;
  iVar2 = (param_2 - 1U >> 3) * 4;
  *param_1 = *(undefined4 *)(iVar2 + iVar1);
  *(undefined4 **)(iVar2 + iVar1) = param_1;
  pthread_mutex_unlock(__mutex);
  return;
}


