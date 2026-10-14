/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d8ed8 png_get_cHRM_XYZ */

ushort png_get_cHRM_XYZ(int param_1,int param_2,undefined8 *param_3,undefined8 *param_4,
                       undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,
                       undefined8 *param_8,undefined8 *param_9,undefined8 *param_10,
                       undefined8 *param_11)

{
  ushort uVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) || (param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(ushort *)(param_2 + 0x72) & 2;
    if ((*(ushort *)(param_2 + 0x72) & 2) != 0) {
      if (param_3 != (undefined8 *)0x0) {
        uVar2 = __floatsidf(*(undefined4 *)(param_2 + 0x4c));
        uVar2 = __muldf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),DAT_002d8fe8,DAT_002d8fec);
        *param_3 = uVar2;
      }
      if (param_4 != (undefined8 *)0x0) {
        uVar2 = __floatsidf(*(undefined4 *)(param_2 + 0x50));
        uVar2 = __muldf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),DAT_002d8fe8,DAT_002d8fec);
        *param_4 = uVar2;
      }
      if (param_5 != (undefined8 *)0x0) {
        uVar2 = __floatsidf(*(undefined4 *)(param_2 + 0x54));
        uVar2 = __muldf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),DAT_002d8fe8,DAT_002d8fec);
        *param_5 = uVar2;
      }
      if (param_6 != (undefined8 *)0x0) {
        uVar2 = __floatsidf(*(undefined4 *)(param_2 + 0x58));
        uVar2 = __muldf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),DAT_002d8fe8,DAT_002d8fec);
        *param_6 = uVar2;
      }
      if (param_7 != (undefined8 *)0x0) {
        uVar2 = __floatsidf(*(undefined4 *)(param_2 + 0x5c));
        uVar2 = __muldf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),DAT_002d8fe8,DAT_002d8fec);
        *param_7 = uVar2;
      }
      if (param_8 != (undefined8 *)0x0) {
        uVar2 = __floatsidf(*(undefined4 *)(param_2 + 0x60));
        uVar2 = __muldf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),DAT_002d8fe8,DAT_002d8fec);
        *param_8 = uVar2;
      }
      if (param_9 != (undefined8 *)0x0) {
        uVar2 = __floatsidf(*(undefined4 *)(param_2 + 100));
        uVar2 = __muldf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),DAT_002d8fe8,DAT_002d8fec);
        *param_9 = uVar2;
      }
      if (param_10 != (undefined8 *)0x0) {
        uVar2 = __floatsidf(*(undefined4 *)(param_2 + 0x68));
        uVar2 = __muldf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),DAT_002d8fe8,DAT_002d8fec);
        *param_10 = uVar2;
      }
      uVar1 = 4;
      if (param_11 != (undefined8 *)0x0) {
        uVar2 = __floatsidf(*(undefined4 *)(param_2 + 0x6c));
        uVar2 = __muldf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),DAT_002d8fe8,DAT_002d8fec);
        *param_11 = uVar2;
      }
    }
  }
  return uVar1;
}


