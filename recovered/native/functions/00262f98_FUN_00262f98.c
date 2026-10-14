/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00262f98 FUN_00262f98 */

longlong FUN_00262f98(uint param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (*(char *)(param_1 + 0xeb) != '\0') {
    sqlite3_free(*(undefined4 *)(param_1 + 0x104));
  }
  param_3 = param_3 & 0xfffffff8;
  if ((int)param_3 < 5) {
    param_3 = 0;
  }
  param_4 = (int)~param_4 >> 0x1f & param_4;
  if ((param_3 == 0) || (param_4 == 0)) {
    puVar1 = (undefined4 *)0x0;
    param_3 = 0;
  }
  else {
    puVar1 = param_2;
    if (param_2 == (undefined4 *)0x0) {
      FUN_0025ad28();
      puVar1 = (undefined4 *)FUN_0025edc8(param_3 * param_4);
      FUN_0025ad3c();
      if (puVar1 != (undefined4 *)0x0) {
        uVar2 = FUN_0025aeb8(puVar1);
        param_4 = __divsi3(uVar2,param_3);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 **)(param_1 + 0x104) = puVar1;
  *(short *)(param_1 + 0xe8) = (short)param_3;
  uVar3 = param_4;
  puVar4 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined1 *)(param_1 + 0xea) = 0;
    *(undefined1 *)(param_1 + 0xeb) = 0;
  }
  else {
    while (-1 < (int)(uVar3 - 1)) {
      *puVar4 = *(undefined4 *)(param_1 + 0x100);
      *(undefined4 **)(param_1 + 0x100) = puVar4;
      uVar3 = uVar3 - 1;
      puVar4 = (undefined4 *)((int)puVar4 + param_3);
    }
    *(undefined4 **)(param_1 + 0x108) =
         (undefined4 *)((int)puVar1 + (param_4 & (int)~param_4 >> 0x1f) * param_3);
    *(undefined1 *)(param_1 + 0xea) = 1;
    *(bool *)(param_1 + 0xeb) = param_2 == (undefined4 *)0x0;
  }
  return (ulonglong)param_1 << 0x20;
}


