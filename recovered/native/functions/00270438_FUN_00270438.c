/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00270438 FUN_00270438 */

void FUN_00270438(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0x61) {
    if ((-1 < (int)((uint)*(ushort *)(param_1 + 0x1c) << 0x1e)) &&
       ((*(ushort *)(param_1 + 0x1c) & 0xc) != 0)) {
      FUN_0026c6f0(param_1,param_3);
    }
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xfff3;
  }
  else if (param_2 != 0x62) {
    FUN_002625d8();
    if ((int)((uint)*(ushort *)(param_1 + 0x1c) << 0x1c) < 0) {
      FUN_002623b0(param_1);
    }
  }
  return;
}


