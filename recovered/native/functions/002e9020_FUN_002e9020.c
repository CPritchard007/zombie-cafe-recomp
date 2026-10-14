/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e9020 FUN_002e9020 */

undefined4 * FUN_002e9020(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  size_t *psVar4;
  undefined4 *puVar5;
  size_t __n;
  int iVar6;
  int iVar7;
  
  puVar2 = (undefined4 *)pthread_getspecific(*(pthread_key_t *)(DAT_002e90f0 + 0x2e902a));
  if (puVar2 != (undefined4 *)0x0) {
    return puVar2;
  }
  pthread_mutex_lock((pthread_mutex_t *)(DAT_002e90f4 + 0x2e904a));
  puVar2 = *(undefined4 **)(DAT_002e90f8 + 0x2e905c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)mmap((void *)0x0,0x1000,3,0x22,-1,0);
    iVar1 = DAT_002e9108;
    if (puVar3 == (undefined4 *)0xffffffff) goto LAB_002e905e;
    psVar4 = (size_t *)(DAT_002e9108 + 0x2e909a);
    iVar7 = *(int *)(DAT_002e9108 + 0x2e909e);
    *(undefined4 *)((int)puVar3 + *(int *)(DAT_002e9108 + 0x2e90a2)) =
         *(undefined4 *)(DAT_002e9108 + 0x2e90aa);
    *(undefined4 **)(iVar1 + 0x2e90aa) = puVar3;
    __n = *psVar4;
    if (iVar7 == 0) {
      puVar2 = (undefined4 *)(iVar1 + 0x2e90ae);
    }
    else {
      iVar6 = 0;
      puVar5 = (undefined4 *)(iVar1 + 0x2e90ae);
      do {
        puVar2 = puVar3;
        iVar6 = iVar6 + 1;
        *puVar5 = puVar2;
        puVar3 = (undefined4 *)((int)puVar2 + __n);
        puVar5 = puVar2;
      } while (iVar6 != iVar7);
    }
    *puVar2 = 0;
    puVar2 = *(undefined4 **)(&UNK_002e90d6 + DAT_002e910c);
  }
  else {
    __n = *(size_t *)(DAT_002e90f8 + 0x2e9048);
  }
  *(undefined4 *)(DAT_002e90fc + 0x2e906a) = *puVar2;
  memset(puVar2,0,__n);
LAB_002e905e:
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_002e9100 + 0x2e9070));
  if (puVar2 != (undefined4 *)0x0) {
    pthread_setspecific(*(pthread_key_t *)(DAT_002e9104 + 0x2e9074),puVar2);
    return puVar2;
  }
  FUN_002e9730(DAT_002e9114 + 0x2e90ea);
                    /* WARNING: Subroutine does not return */
  __cxa_call_unexpected();
}


