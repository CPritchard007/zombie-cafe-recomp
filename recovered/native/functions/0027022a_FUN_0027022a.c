/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027022a FUN_0027022a */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0027023e) */
/* WARNING: Removing unreachable block (ram,0x0027023e) */

void FUN_0027022a(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  iVar2 = sqlite3_value_type(*param_3);
  if (iVar2 - 1U < 4) {
    switch(iVar2) {
    default:
      iVar2 = sqlite3_value_bytes(*param_3);
      break;
    case 3:
      pbVar3 = (byte *)sqlite3_value_text(*param_3);
      if (pbVar3 == (byte *)0x0) {
        return;
      }
      iVar2 = 0;
      while (bVar1 = *pbVar3, bVar1 != 0) {
        iVar2 = iVar2 + 1;
        pbVar3 = pbVar3 + 1;
        if (0xbf < bVar1) {
          for (; (*pbVar3 & 0xc0) == 0x80; pbVar3 = pbVar3 + 1) {
          }
        }
      }
    }
    sqlite3_result_int(param_1,iVar2);
  }
  else {
    sqlite3_result_null(param_1);
  }
  return;
}


