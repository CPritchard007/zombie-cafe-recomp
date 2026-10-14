/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002685e0 FUN_002685e0 */

uint FUN_002685e0(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0xff;
  if (param_1 != 0) {
    if ((param_2 + DAT_0026861c == 0) || (*(char *)(param_1 + 0x36) != '\0')) {
      FUN_00268578(param_1,7,0);
      *(undefined1 *)(param_1 + 0x36) = 0;
      param_2 = 7;
    }
    uVar1 = *(uint *)(param_1 + 0x30);
  }
  return uVar1 & param_2;
}


