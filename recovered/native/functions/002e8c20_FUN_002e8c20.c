/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e8c20 FUN_002e8c20 */

void FUN_002e8c20(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  undefined8 uVar3;
  
  uVar1 = FUN_002e9164(4);
  FUN_002ea27c();
  uVar2 = *(undefined4 *)(iRam002e8c44 + 0x2e8c38);
  uVar3 = FUN_002e91e0(uVar1,*(undefined4 *)(iRam002e8c40 + 0x2e8c36));
  uVar1 = FUN_002e8d04(*(undefined1 *)((int)uVar3 + 0x1f));
                    /* WARNING: Subroutine does not return */
  ___Unwind_Resume(uVar1,(int)((ulonglong)uVar3 >> 0x20),uVar2,in_r3);
}


