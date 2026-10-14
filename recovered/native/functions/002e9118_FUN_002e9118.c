/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e9118 FUN_002e9118 */

void FUN_002e9118(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_002e9020();
  uVar2 = FUN_002ea150();
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  uVar2 = FUN_002ea100();
  iVar3 = *(int *)(iVar1 + 4);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(int *)(iVar1 + 4) = iVar3 + 1;
  ___Unwind_RaiseException(param_1 + 0x38);
  FUN_002e978c(param_1 + 0x38);
  pthread_getspecific(*(pthread_key_t *)(DAT_002e9160 + 0x2e914c));
  return;
}


