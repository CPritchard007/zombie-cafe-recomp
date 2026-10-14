/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002683ea FUN_002683ea */

void FUN_002683ea(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1[0x6c];
  if ((int *)param_1[0x6c] == (int *)0x0) {
    piVar3 = param_1;
  }
  iVar1 = 0;
  while( true ) {
    if (piVar3[0x76] <= iVar1) {
      iVar1 = sqlite3_realloc(piVar3[0x88],(piVar3[0x76] + 1) * 4,0x220,iVar1,param_4);
      if (iVar1 == 0) {
        *(undefined1 *)(*piVar3 + 0x36) = 1;
      }
      else {
        piVar3[0x88] = iVar1;
        iVar2 = piVar3[0x76];
        *(int *)(iVar2 * 4 + iVar1) = param_2;
        piVar3[0x76] = iVar2 + 1;
      }
      return;
    }
    if (param_2 == *(int *)(iVar1 * 4 + piVar3[0x88])) break;
    iVar1 = iVar1 + 1;
  }
  return;
}


