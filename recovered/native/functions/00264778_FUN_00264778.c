/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00264778 FUN_00264778 */

undefined4 FUN_00264778(int param_1,int param_2,undefined4 param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    if (param_2 <= iVar4) {
      return 0;
    }
    iVar2 = *(int *)(param_1 + 0x14);
    for (iVar3 = 0; iVar3 < *(int *)(iVar2 + 8); iVar3 = iVar3 + 1) {
      iVar1 = sqlite3_stricmp(*(undefined4 *)(iVar3 * 0x18 + *(int *)(iVar2 + 0xc)),param_3);
      if (iVar1 == 0) {
        if (-1 < iVar3) {
          if (param_4 == (int *)0x0) {
            return 1;
          }
          *param_4 = iVar4;
          *param_5 = iVar3;
          return 1;
        }
        break;
      }
    }
    iVar4 = iVar4 + 1;
    param_1 = param_1 + 0x40;
  } while( true );
}


