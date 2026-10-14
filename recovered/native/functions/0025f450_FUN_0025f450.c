/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025f450 FUN_0025f450 */

uint FUN_0025f450(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((((param_1 == 0) || (param_2 == 0)) || (param_2 < *(uint *)(param_1 + 0x104))) ||
     (*(uint *)(param_1 + 0x108) <= param_2)) {
    uVar1 = (**(code **)(DAT_0025f47c + 0x25f4a0))(param_2);
  }
  else {
    uVar1 = (uint)*(ushort *)(param_1 + 0xe8);
  }
  return uVar1;
}


