/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025baf8 FUN_0025baf8 */

undefined4 * FUN_0025baf8(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    puVar3 = *(undefined4 **)(param_1 + 8);
    iVar4 = *(int *)(param_1 + 4);
  }
  else {
    piVar2 = (int *)(*(int *)(param_1 + 0xc) + param_4 * 8);
    puVar3 = (undefined4 *)piVar2[1];
    iVar4 = *piVar2;
  }
  while( true ) {
    if (iVar4 == 0) {
      return (undefined4 *)0x0;
    }
    if (puVar3 == (undefined4 *)0x0) break;
    if ((puVar3[4] == param_3) &&
       (iVar1 = sqlite3_strnicmp(puVar3[3],param_2,param_3,puVar3[4],param_4), iVar1 == 0)) {
      return puVar3;
    }
    puVar3 = (undefined4 *)*puVar3;
    iVar4 = iVar4 + -1;
  }
  return (undefined4 *)0x0;
}


