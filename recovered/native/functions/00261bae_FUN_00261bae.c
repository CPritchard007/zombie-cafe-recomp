/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00261bae FUN_00261bae */

undefined8 FUN_00261bae(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar1 = FUN_00261b80(param_1,param_2);
    if (iVar1 != 5) break;
    iVar2 = (**(code **)(param_1 + 0x98))(*(undefined4 *)(param_1 + 0x9c));
  } while (iVar2 != 0);
  return CONCAT44(param_1,iVar1);
}


