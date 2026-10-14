/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026147a FUN_0026147a */

void FUN_0026147a(int param_1,byte *param_2,uint param_3)

{
  while( true ) {
    *(char *)(param_1 + 0x14) = (char)param_3;
    if (param_2 == (byte *)0x0) {
      return;
    }
    if (*param_2 != param_3) break;
    FUN_0026147a(param_1,*(undefined4 *)(param_2 + 8),param_3);
    param_2 = *(byte **)(param_2 + 0xc);
  }
  FUN_002613f4(param_1,param_2,0);
  return;
}


