/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00265d50 FUN_00265d50 */

undefined4 FUN_00265d50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int local_40;
  undefined4 local_3c;
  
  memset(&local_40,0,0x28);
  local_40 = param_1;
  FUN_0026578c(&local_40,param_2,param_3,param_4,0);
  FUN_002653a4(&local_40,1);
  if (*(char *)(param_1 + 0x36) != '\0') {
    FUN_00263730(&local_40);
    local_3c = 0;
  }
  return local_3c;
}


