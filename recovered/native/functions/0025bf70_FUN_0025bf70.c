/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025bf70 FUN_0025bf70 */

void FUN_0025bf70(int param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x3c);
  if ((iVar1 != 0) &&
     ((**(code **)(iVar1 + 0x20))(*(int **)(param_1 + 0x3c)), *(char *)(param_1 + 0x10) != '\x05'))
  {
    *(undefined1 *)(param_1 + 0x10) = param_2;
  }
  return;
}


