/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00261190 FUN_00261190 */

void FUN_00261190(undefined4 param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == 0) {
    FUN_002610aa(param_1,param_3,param_3,param_4,param_4);
    FUN_002610aa(param_1,param_4);
  }
  else {
    if (param_4 != 0) {
      *(int *)(param_2 + 0xc) = param_4;
      if ((*(ushort *)(param_4 + 2) & 0x100) != 0) {
        *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | 0x100;
        *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_4 + 0x14);
      }
    }
    if (param_3 != 0) {
      *(int *)(param_2 + 8) = param_3;
      if ((*(ushort *)(param_3 + 2) & 0x100) != 0) {
        *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | 0x100;
        *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_3 + 0x14);
      }
    }
    FUN_0025c992();
  }
  return;
}


