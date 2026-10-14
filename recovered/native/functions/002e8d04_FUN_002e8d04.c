/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e8d04 FUN_002e8d04 */

int FUN_002e8d04(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_r5;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_002e9020();
  iVar3 = *(int *)(iVar1 + 8);
  if (iVar3 != 0) {
    if ((*(int *)(iVar3 + 0x38) == iRam002e8d40) && (*(int *)(iVar3 + 0x3c) == iRam002e8d44)) {
      iVar2 = *(int *)(iVar3 + 0x20) + -1;
      *(int *)(iVar3 + 0x20) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar3 + 0x1c);
        *(undefined4 *)(iVar3 + 0x1c) = 0;
      }
    }
    else {
      *(undefined4 *)(iVar1 + 8) = 0;
    }
    return iVar3 + 0x38;
  }
  iVar1 = FUN_002ea13c();
  *(byte *)(iVar1 + unaff_r5) = (byte)iVar3 | (byte)unaff_r5;
                    /* WARNING: Could not recover jumptable at 0x002e8d46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*UNRECOVERED_JUMPTABLE)();
  return iVar1;
}


