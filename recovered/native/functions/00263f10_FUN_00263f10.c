/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00263f10 FUN_00263f10 */

void FUN_00263f10(void *param_1,void *param_2,ushort param_3)

{
  if ((*(ushort *)((int)param_1 + 0x1c) & DAT_00263f44) != 0) {
    FUN_002636e8();
  }
  memcpy(param_1,param_2,0x24);
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  if (-1 < (int)((uint)*(ushort *)((int)param_2 + 0x1c) << 0x14)) {
    *(ushort *)((int)param_1 + 0x1c) =
         param_3 | (ushort)DAT_00263f48 & *(ushort *)((int)param_1 + 0x1c);
  }
  return;
}


