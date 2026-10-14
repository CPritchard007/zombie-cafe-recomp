/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00265aac FUN_00265aac */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00265abc) */
/* WARNING: Removing unreachable block (ram,0x00265abc) */

void FUN_00265aac(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = sqlite3_value_type(*param_3);
  switch(uVar1) {
  case 1:
    iVar2 = DAT_00265af0 + 0x265aca;
    break;
  case 2:
    iVar2 = DAT_00265af4 + 0x265ad0;
    break;
  case 3:
    iVar2 = DAT_00265b00 + 0x265ae2;
    break;
  case 4:
    iVar2 = DAT_00265af8 + 0x265ad6;
    break;
  default:
    iVar2 = DAT_00265afc + 0x265adc;
  }
  sqlite3_result_text(param_1,iVar2,0xffffffff,0);
  return;
}


