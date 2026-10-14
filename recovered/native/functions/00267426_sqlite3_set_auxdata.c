/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00267426 sqlite3_set_auxdata */

void sqlite3_set_auxdata(undefined4 *param_1,int param_2,int param_3,code *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_2 < 0) {
LAB_00267492:
    if (param_4 != (code *)0x0) {
      (*param_4)(param_3);
    }
  }
  else {
    puVar2 = (undefined4 *)param_1[1];
    if (puVar2 == (undefined4 *)0x0) {
      iVar3 = 0;
LAB_00267446:
      puVar2 = (undefined4 *)FUN_002651e0(param_1[2],puVar2,(param_2 + 2) * 8);
      if (puVar2 == (undefined4 *)0x0) goto LAB_00267492;
      param_1[1] = puVar2;
      memset(puVar2 + (iVar3 + 1) * 2,0,((param_2 + 1) - iVar3) * 8);
      puVar2[1] = param_2 + 1;
      *puVar2 = *param_1;
    }
    else {
      iVar3 = puVar2[1];
      if (iVar3 <= param_2) goto LAB_00267446;
    }
    piVar1 = puVar2 + (param_2 + 1) * 2;
    if ((*piVar1 != 0) && ((code *)piVar1[1] != (code *)0x0)) {
      (*(code *)piVar1[1])();
    }
    *piVar1 = param_3;
    piVar1[1] = (int)param_4;
  }
  return;
}


