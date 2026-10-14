/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ea18c FUN_002ea18c */

void FUN_002ea18c(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int *piVar1;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_002ea150();
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    (*UNRECOVERED_JUMPTABLE)();
  }
  UNRECOVERED_JUMPTABLE = FUN_002ea19c;
  piVar1 = (int *)FUN_002ea13c();
  *piVar1 = DAT_002ea1a8 + 0x2ea1aa;
                    /* WARNING: Could not recover jumptable at 0x002ea1a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


