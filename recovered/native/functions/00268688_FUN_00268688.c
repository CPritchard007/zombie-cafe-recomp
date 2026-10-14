/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00268688 FUN_00268688 */

int FUN_00268688(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = DAT_002686e0 + 0x2686d4;
  }
  else {
    iVar1 = *param_1;
    if (((param_1[5] != 0) && (-1 < param_2)) && (param_2 < (int)(uint)*(ushort *)(param_1 + 0xb)))
    {
      sqlite3_mutex_enter(*(undefined4 *)(iVar1 + 0xc));
      return param_1[5] + param_2 * 0x28;
    }
    if (iVar1 == 0) {
      iVar1 = DAT_002686e4 + 0x2686da;
    }
    else {
      sqlite3_mutex_enter(*(undefined4 *)(iVar1 + 0xc));
      FUN_00268578(*param_1,0x19,0);
      iVar1 = DAT_002686dc + 0x2686ce;
    }
  }
  return iVar1 + 0x38;
}


