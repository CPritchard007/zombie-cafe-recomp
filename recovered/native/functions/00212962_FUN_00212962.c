/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00212962 FUN_00212962 */

uint FUN_00212962(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  param_2 = param_1 * 10 + param_2;
  iVar1 = param_2 >> 3;
  return (int)(uint)*(byte *)(param_3 + iVar1) >> (param_2 + iVar1 * -8 & 0xffU) & 1;
}


