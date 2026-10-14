/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e9210 FUN_002e9210 */

void FUN_002e9210(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_r5;
  code *UNRECOVERED_JUMPTABLE;
  
  piVar1 = (int *)FUN_002e9020();
  iVar3 = *piVar1;
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 0x38) == iRam002e9248) goto LAB_002e922e;
    do {
      *piVar1 = 0;
      while( true ) {
        piVar1 = (int *)FUN_002e9118(iVar3);
LAB_002e922e:
        if (*(int *)(iVar3 + 0x3c) != iRam002e924c) break;
        *(int *)(iVar3 + 0x18) = -*(int *)(iVar3 + 0x18);
      }
    } while( true );
  }
  iVar2 = FUN_002e9730(DAT_002e9250 + 0x2e9244);
  *(byte *)(iVar2 + unaff_r5) = (byte)iVar3 | (byte)unaff_r5;
                    /* WARNING: Could not recover jumptable at 0x002e924e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


