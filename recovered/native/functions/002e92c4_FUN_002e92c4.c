/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e92c4 FUN_002e92c4 */

void FUN_002e92c4(void)

{
  int *piVar1;
  int extraout_r1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)FUN_002e9144();
  iVar4 = *piVar1;
  if (iVar4 != 0) {
    if ((*(int *)(iVar4 + 0x38) == DAT_002e9334) && (*(int *)(iVar4 + 0x3c) == DAT_002e9338)) {
      iVar2 = *(int *)(iVar4 + 0x18);
      if (iVar2 < 0) {
        iVar3 = iVar2 + 1;
        if (iVar3 == 0) {
          *piVar1 = *(int *)(iVar4 + 0x14);
          *(undefined4 *)(iVar4 + 0x18) = 0;
          return;
        }
      }
      else {
        iVar3 = iVar2 + -1;
        if (iVar3 == 0) {
          *piVar1 = *(int *)(iVar4 + 0x14);
          FUN_002e9198(iVar4 + 0x90);
          return;
        }
        if (iVar2 == 0) {
          FUN_002e9730(DAT_002e933c + 0x2e9324);
          if (extraout_r1 != -1) {
            __cxa_end_cleanup();
          }
                    /* WARNING: Subroutine does not return */
          __cxa_call_unexpected();
        }
      }
      *(int *)(iVar4 + 0x18) = iVar3;
    }
    else {
      *piVar1 = 0;
      _Unwind_DeleteException(iVar4 + 0x38);
    }
  }
  return;
}


