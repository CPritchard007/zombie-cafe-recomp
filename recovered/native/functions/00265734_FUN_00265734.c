/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00265734 FUN_00265734 */

uint FUN_00265734(void *param_1,void *param_2)

{
  ushort uVar1;
  uint uVar2;
  
  if ((*(ushort *)((int)param_1 + 0x1c) & DAT_00265778) != 0) {
    FUN_002636e8();
  }
  memcpy(param_1,param_2,0x24);
  uVar2 = DAT_0026577c & *(ushort *)((int)param_1 + 0x1c);
  uVar1 = (ushort)uVar2;
  *(ushort *)((int)param_1 + 0x1c) = uVar1;
  uVar2 = uVar2 & 0x12;
  if (uVar2 != 0) {
    uVar2 = 0;
    if (-1 < (int)((uint)*(ushort *)((int)param_2 + 0x1c) << 0x14)) {
      *(ushort *)((int)param_1 + 0x1c) = uVar1 | 0x1000;
      uVar2 = FUN_00265354(param_1);
    }
  }
  return uVar2;
}


