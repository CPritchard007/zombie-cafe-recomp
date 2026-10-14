/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e9394 _INIT_95 */

/* WARNING: Control flow encountered bad instruction data */

void _INIT_95(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 unaff_r6;
  
  iVar3 = pthread_key_create((pthread_key_t *)(iRam002e93e0 + 0x2e939e),
                             (__destr_function *)(iRam002e93e4 + 0x2e93a0));
  iVar1 = iRam002e93e8;
  if (iVar3 == 0) {
    *(undefined4 *)(iRam002e93e8 + 0x2e93ae) = 0xc;
    *(undefined4 *)(iVar1 + 0x2e93b6) = uRam002e93ec;
    *(undefined4 *)(iVar1 + 0x2e93b2) = uRam002e93f0;
    pthread_mutex_init((pthread_mutex_t *)(iVar1 + 0x2e93ba),(pthread_mutexattr_t *)0x0);
    iVar2 = DAT_002e93fc;
    iVar3 = iRam002e93f8;
    puVar4 = (undefined4 *)(iRam002e93f4 + 0x2e93ca);
    *(undefined4 *)(iVar1 + 0x2e93c2) = 0;
    *(undefined4 *)(iVar1 + 0x2e93be) = 0;
    __aeabi_atexit(iVar3 + 0x2e93d4,iVar2 + 0x2e93d0,*puVar4);
    return;
  }
  FUN_002e9730(DAT_002e9400 + 0x2e93de);
  *(undefined1 *)(param_3 * 0x21) = unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


