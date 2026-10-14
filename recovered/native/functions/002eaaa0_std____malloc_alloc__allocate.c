/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002eaaa0 std::__malloc_alloc::allocate */

/* std::__malloc_alloc::allocate(unsigned int) */

void * std::__malloc_alloc::allocate(uint param_1)

{
  short sVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  pthread_mutex_t *ppVar6;
  undefined4 *puVar7;
  
  pvVar2 = malloc(param_1);
  if (pvVar2 == (void *)0x0) {
    ppVar6 = (pthread_mutex_t *)(iRam002eaaf4 + 0x2eaab6);
    puVar7 = (undefined4 *)(iRam002eaaf8 + 0x2eaab8);
    do {
      pthread_mutex_lock(ppVar6);
      pcVar5 = (code *)*puVar7;
      pthread_mutex_unlock(ppVar6);
      if (pcVar5 == (code *)0x0) {
        iVar3 = FUN_002e9164(4);
        FUN_002e9cb4();
        iVar4 = *(int *)(iRam002eab00 + 0x2eaaec);
        FUN_002e91e0(iVar3,*(undefined4 *)(iRam002eaafc + 0x2eaaea));
        *(short *)(iVar4 + 10) = (short)puVar7;
        *(short *)(iVar3 + 0xc) = (short)iVar3;
        sVar1 = *(short *)(iVar3 + iVar4);
        ppVar6 = (pthread_mutex_t *)(DAT_002eab24 + 0x2eab0e);
        pthread_mutex_lock(ppVar6);
        pvVar2 = *(void **)(DAT_002eab28 + 0x2eab1a);
        *(int *)(DAT_002eab28 + 0x2eab1a) = (int)sVar1;
        pthread_mutex_unlock(ppVar6);
        return pvVar2;
      }
      (*pcVar5)();
      pvVar2 = malloc(param_1);
    } while (pvVar2 == (void *)0x0);
  }
  return pvVar2;
}


