/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00262088 FUN_00262088 */

uint FUN_00262088(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1;
  if (param_1 != 0) {
    FUN_00261f68();
    if (-1 < param_2) {
      *(ushort *)(*(int *)(param_1 + 4) + 0x16) = *(ushort *)(*(int *)(param_1 + 4) + 0x16) & 0xfffb
      ;
      if (param_2 != 0) {
        *(ushort *)(*(int *)(param_1 + 4) + 0x16) = *(ushort *)(*(int *)(param_1 + 4) + 0x16) | 4;
      }
    }
    uVar1 = ((uint)*(ushort *)(*(int *)(param_1 + 4) + 0x16) << 0x1d) >> 0x1f;
    FUN_00262002(param_1);
  }
  return uVar1;
}


