/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00261928 FUN_00261928 */

void FUN_00261928(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x18);
  uVar2 = uVar1 & 0xffdf;
  *(ushort *)(param_1 + 0x18) = uVar2;
  if ((uVar1 & 2) == 0) {
    *(ushort *)(param_1 + 0x18) = uVar2 | 2;
    FUN_0025bcca();
  }
  return;
}


