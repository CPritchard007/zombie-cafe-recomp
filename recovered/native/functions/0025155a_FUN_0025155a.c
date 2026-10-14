/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025155a FUN_0025155a */

uint FUN_0025155a(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = std::string::_M_compare
                    (*(char **)(param_1 + 0x14),*(char **)(param_1 + 0x10),
                     *(char **)(param_2 + 0x14),*(char **)(param_2 + 0x10));
  return uVar1 >> 0x1f;
}


