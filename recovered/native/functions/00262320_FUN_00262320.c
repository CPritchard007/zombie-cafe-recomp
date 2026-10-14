/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00262320 FUN_00262320 */

undefined4 FUN_00262320(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00262290();
  uVar1 = DAT_0026233c;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(ushort *)(param_1 + 0x1c) = (ushort)uVar1 & *(ushort *)(param_1 + 0x1c) | 4;
  return 0;
}


