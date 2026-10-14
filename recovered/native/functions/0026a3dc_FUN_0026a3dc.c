/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026a3dc FUN_0026a3dc */

short * FUN_0026a3dc(undefined4 *param_1,short *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  if (param_2 != (short *)0x0) {
    uVar2 = param_1[1];
    piVar3 = (int *)(param_2 + 4);
    for (iVar4 = 0; iVar4 < *param_2; iVar4 = iVar4 + 1) {
      if (*piVar3 == 0) {
        iVar1 = FUN_0025f25a(*(undefined4 *)*param_1,uVar2);
        *piVar3 = iVar1;
      }
      else {
        iVar1 = sqlite3_stricmp(*piVar3,uVar2);
        if (iVar1 != 0) {
          FUN_00268e48(*param_1,DAT_0026a454 + 0x26a41c,param_1[2],param_1[3],*piVar3);
          return (short *)0x1;
        }
      }
      iVar1 = FUN_0026a458(param_1,piVar3[4]);
      if ((iVar1 != 0) || (iVar1 = FUN_0026a49e(param_1,piVar3[9]), iVar1 != 0)) {
        return (short *)0x1;
      }
      piVar3 = piVar3 + 0x10;
    }
    param_2 = (short *)0x0;
  }
  return param_2;
}


