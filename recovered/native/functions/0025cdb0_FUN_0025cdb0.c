/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025cdb0 FUN_0025cdb0 */

void FUN_0025cdb0(int param_1,short *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  
  if (param_2 != (short *)0x0) {
    iVar3 = 0;
    for (psVar2 = param_2 + 4; (iVar3 < *param_2 && (*(int *)(psVar2 + 0x10) < 0));
        psVar2 = psVar2 + 0x20) {
      iVar1 = *(int *)(param_1 + 0x48);
      *(int *)(psVar2 + 0x10) = iVar1;
      *(int *)(param_1 + 0x48) = iVar1 + 1;
      iVar1 = *(int *)(psVar2 + 8);
      if (iVar1 != 0) {
        FUN_0025cdb0(param_1,*(undefined4 *)(iVar1 + 0x28),0,iVar1,param_4);
      }
      iVar3 = iVar3 + 1;
    }
  }
  return;
}


