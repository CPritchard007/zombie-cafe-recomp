/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00238610 FUN_00238610 */

void FUN_00238610(int param_1,char *param_2,__gnuc_va_list param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  pthread_mutex_t *__mutex;
  timespec local_20;
  
  iVar6 = DAT_002386b0;
  pthread_mutex_lock((pthread_mutex_t *)(DAT_002386b0 + 0x23861c));
  vsnprintf((char *)(iVar6 + 0x238620),0x100,param_2,param_3);
  if (param_1 == 1) {
    iVar6 = DAT_002386b4 + 0x23863c;
  }
  else {
    iVar6 = DAT_002386b8 + 0x238642;
  }
  clock_gettime(0,&local_20);
  iVar1 = DAT_002386bc;
  if ((*(int *)(DAT_002386bc + 0x238652) == 0) && (*(int *)(DAT_002386bc + 0x238656) == 0)) {
    *(__time_t *)(DAT_002386bc + 0x238652) = local_20.tv_sec;
    *(long *)(iVar1 + 0x238656) = local_20.tv_nsec;
  }
  iVar2 = DAT_002386cc;
  iVar1 = DAT_002386c4;
  iVar4 = DAT_002386c0 + 0x23866a;
  iVar5 = local_20.tv_sec - *(int *)(DAT_002386c4 + 0x238670);
  iVar3 = __divsi3(local_20.tv_nsec - *(int *)(DAT_002386c4 + 0x238674),DAT_002386c8);
  __mutex = (pthread_mutex_t *)(DAT_002386d0 + 0x238692);
  __android_log_print(6,iVar2 + 0x23868e,iVar4,iVar6,iVar5 * 1000 + iVar3,DAT_002386d0 + 0x238696);
  *(__time_t *)(iVar1 + 0x238670) = local_20.tv_sec;
  *(long *)(iVar1 + 0x238674) = local_20.tv_nsec;
  pthread_mutex_unlock(__mutex);
  return;
}


