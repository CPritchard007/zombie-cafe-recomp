/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025ac7c sqlite3_compileoption_get */

undefined4 sqlite3_compileoption_get(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 < 3) {
    uVar1 = *(undefined4 *)(param_1 * 4 + DAT_0025ac90 + 0x25ac8a);
  }
  return uVar1;
}


