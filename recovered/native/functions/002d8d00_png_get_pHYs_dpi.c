/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d8d00 png_get_pHYs_dpi */

undefined4 *
png_get_pHYs_dpi(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,uint *param_5)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  if ((param_2 == 0) || (param_1 == 0)) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)(*(uint *)(param_2 + 8) & 0x80);
    if (puVar3 != (undefined4 *)0x0) {
      puVar3 = param_3;
      if (param_3 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x80;
        *param_3 = *(undefined4 *)(param_2 + 0xc0);
      }
      if (param_4 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x80;
        *param_4 = *(undefined4 *)(param_2 + 0xc4);
      }
      if (param_5 != (uint *)0x0) {
        bVar1 = *(byte *)(param_2 + 200);
        puVar3 = (undefined4 *)0x80;
        *param_5 = (uint)bVar1;
        if (bVar1 == 1) {
          if (param_3 != (undefined4 *)0x0) {
            uVar4 = __floatunsidf(*param_3);
            uVar4 = __muldf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),DAT_002d8d90,DAT_002d8d94);
            __adddf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),DAT_002d8d98,DAT_002d8d9c);
            uVar2 = __fixunsdfsi();
            *param_3 = uVar2;
          }
          puVar3 = (undefined4 *)0x80;
          if (param_4 != (undefined4 *)0x0) {
            uVar4 = __floatunsidf(*param_4);
            uVar4 = __muldf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),DAT_002d8d90,DAT_002d8d94);
            __adddf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),DAT_002d8d98,DAT_002d8d9c);
            uVar2 = __fixunsdfsi();
            *param_4 = uVar2;
          }
        }
      }
    }
  }
  return puVar3;
}


