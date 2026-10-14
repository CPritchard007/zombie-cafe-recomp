/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d9100 png_get_gAMA */

undefined4 png_get_gAMA(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((((param_2 == 0) || (param_1 == 0)) || (param_3 == (undefined8 *)0x0)) ||
     ((*(ushort *)(param_2 + 0x72) & 1) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar2 = __floatsidf(*(undefined4 *)(param_2 + 0x28));
    uVar2 = __muldf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),DAT_002d9138,DAT_002d913c,param_4);
    *param_3 = uVar2;
    uVar1 = 1;
  }
  return uVar1;
}


