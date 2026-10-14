/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e9bdc FUN_002e9bdc */

void FUN_002e9bdc(int param_1,undefined4 param_2,uint *param_3)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  char *local_14;
  
  FUN_002e9bd4();
  puVar2 = (undefined1 *)_Unwind_GetLanguageSpecificData(param_2);
  local_14 = puVar2 + 1;
  FUN_002eb21c(&local_14,*puVar2);
  _Unwind_GetRegionStart(param_2);
  cVar1 = *local_14;
  local_14 = local_14 + 1;
  pcVar7 = (char *)0x0;
  if (cVar1 != -1) {
    iVar3 = FUN_002eb1c4(&local_14);
    pcVar7 = local_14 + iVar3;
  }
  piVar4 = (int *)(pcVar7 + ~*param_3 * 4);
  iVar3 = 0;
  iVar5 = *piVar4;
  piVar6 = piVar4;
  while (iVar5 != 0) {
    piVar6 = piVar6 + 1;
    iVar3 = iVar3 + 1;
    iVar5 = *piVar6;
  }
  *(int *)(param_1 + 0x28) = iVar3;
  *(undefined4 *)(param_1 + 0x30) = 4;
  *(int **)(param_1 + 0x34) = piVar4;
  return;
}


