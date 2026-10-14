/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023d1f4 ZombieCafe::loadlottery */

/* ZombieCafe::loadlottery(void*, void*, int) */

void ZombieCafe::loadlottery(void *param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  pthread_mutex_t *__mutex;
  int *piVar3;
  int *piVar4;
  long *plVar5;
  
  iVar1 = DAT_0023d2d0;
  piVar3 = *(int **)(DAT_0023d2cc + 0x23d200);
  piVar4 = (int *)(&stack0xffffffec + DAT_0023d2d0);
  plVar5 = (long *)(&stack0xffffffec + DAT_0023d2d0);
  *(void **)(&stack0xfffffff0 + DAT_0023d2d0) = param_2;
  iVar2 = *piVar3;
  *(int *)(&stack0xffffffec + DAT_0023d2d0) = param_3;
  *(int *)(&stack0x000003f8 + DAT_0023d2d0) = iVar2;
  L_PrintLog((char *)(DAT_0023d2d4 + 0x23d216),(char *)(DAT_0023d2d8 + 0x23d214));
  iVar2 = DAT_0023d2e0;
  __mutex = (pthread_mutex_t *)(DAT_0023d2e0 + 0x23d22a);
  **(undefined1 **)(DAT_0023d2dc + 0x23d222) = 0;
  **(undefined1 **)(DAT_0023d2e4 + 0x23d230) = 0;
  pthread_mutex_lock(__mutex);
  *(undefined4 *)(iVar2 + 0x23d232) = 0;
  pthread_mutex_unlock(__mutex);
  iVar2 = javaIsConnected();
  if (iVar2 == 0) {
    LotteryFailed(*(void **)(&stack0xfffffff0 + iVar1));
    iVar2 = 0;
  }
  else {
    memset(&stack0xfffffff8 + iVar1,0,0x400);
    snprintf(&stack0xfffffff8 + iVar1,0x400,(char *)(DAT_0023d2e8 + 0x23d25e),
             DAT_0023d2ec + 0x23d260);
    iVar2 = CCUrlConnection::NewRequest
                      (&stack0xfffffff8 + iVar1,&stack0xfffffff8 + iVar1,0x34,
                       *(void **)(&stack0xfffffff0 + iVar1));
  }
  if ((iVar2 == 1) && (-1 < *piVar4)) {
    snprintf(&stack0xfffffff8 + iVar1,0x40,(char *)(DAT_0023d2f0 + 0x23d290));
    L_PrintLog((char *)(DAT_0023d2f4 + 0x23d29a),&stack0xfffffff8 + iVar1);
    CEvent::wait((CEvent *)(DAT_0023d2f8 + 0x23d2aa),*plVar5,1);
  }
  L_PrintLog((char *)(DAT_0023d2fc + 0x23d2b2),(char *)(DAT_0023d300 + 0x23d2b4));
  if (*(int *)(&stack0x000003f8 + iVar1) != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


