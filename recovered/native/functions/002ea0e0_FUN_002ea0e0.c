/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ea0e0 FUN_002ea0e0 */

void FUN_002ea0e0(code *param_1)

{
  if (param_1 == (code *)0x0) goto LAB_002ea0ec;
  do {
    (*param_1)();
    FUN_002ea0d0();
LAB_002ea0ec:
    param_1 = (code *)(&UNK_002ea0f2 + DAT_002ea0fc);
  } while( true );
}


