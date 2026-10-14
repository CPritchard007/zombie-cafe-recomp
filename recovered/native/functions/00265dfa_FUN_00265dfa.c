/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00265dfa FUN_00265dfa */

void FUN_00265dfa(undefined4 param_1,int param_2,undefined4 *param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = (uint *)sqlite3_aggregate_context(param_1,8);
  if (((param_2 == 0) || (iVar2 = sqlite3_value_type(*param_3), iVar2 != 5)) &&
     (puVar1 != (uint *)0x0)) {
    uVar3 = *puVar1;
    *puVar1 = uVar3 + 1;
    puVar1[1] = puVar1[1] + (uint)(0xfffffffe < uVar3);
  }
  return;
}


