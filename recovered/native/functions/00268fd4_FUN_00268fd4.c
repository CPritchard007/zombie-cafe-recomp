/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00268fd4 FUN_00268fd4 */

undefined4 FUN_00268fd4(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((((*(char *)(*param_1 + 0x7d) == '\0') && (*(char *)((int)param_1 + 0x12) == '\0')) &&
      (-1 < *(int *)(*param_1 + 0x18) << 0xf)) &&
     (iVar1 = sqlite3_strnicmp(param_2,DAT_00269018 + 0x268ffe,7), iVar1 == 0)) {
    FUN_00268e48(param_1,DAT_0026901c + 0x26900e,param_2);
    uVar2 = 1;
  }
  return uVar2;
}


