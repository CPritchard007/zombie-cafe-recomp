/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00275070 FUN_00275070 */

void FUN_00275070(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_40;
  int local_1c [2];
  
  iVar5 = DAT_002751ac + 0x275082;
  iVar7 = param_4;
  iVar4 = param_3;
  while( true ) {
    if (iVar7 < 1) {
      return;
    }
    if (param_1[4] == 0) {
      return;
    }
    if (iVar4 < 1) {
      FUN_00268204(param_1,param_5,DAT_002751b0 + 0x27509c,iVar7,param_4,param_3);
      return;
    }
    iVar1 = FUN_0026826c(param_1,iVar4,param_5);
    if (iVar1 != 0) break;
    iVar1 = FUN_00274878(param_1[1],iVar4,local_1c);
    if (iVar1 != 0) {
      FUN_00268204(param_1,param_5,DAT_002751b4 + 0x2750ce,iVar4);
      return;
    }
    iVar6 = iVar7 + -1;
    iVar1 = *(int *)(local_1c[0] + 4);
    if (param_2 == 0) {
      if ((0 < iVar6) && (*(char *)(*param_1 + 0x11) != '\0')) {
        uVar3 = FUN_0025ba30(iVar1);
        FUN_00274ffc(param_1,uVar3,4,iVar4,param_5);
      }
    }
    else {
      iVar2 = FUN_0025ba30(iVar1 + 4);
      if (*(char *)(*param_1 + 0x11) != '\0') {
        FUN_00274ffc(param_1,iVar4,2,0,param_5);
      }
      if (iVar2 < ((int)(((uint)(*(int *)(*param_1 + 0x24) >> 0x1f) >> 0x1e) +
                        *(int *)(*param_1 + 0x24)) >> 2) + -1) {
        iVar7 = iVar1 + 8;
        for (local_40 = 0; local_40 < iVar2; local_40 = local_40 + 1) {
          uVar3 = FUN_0025ba30(iVar7);
          if (*(char *)(*param_1 + 0x11) != '\0') {
            FUN_00274ffc(param_1,uVar3,2,0,param_5);
          }
          FUN_0026826c(param_1,uVar3,param_5);
          iVar7 = iVar7 + 4;
        }
        iVar6 = iVar6 - iVar2;
      }
      else {
        FUN_00268204(param_1,param_5,iVar5,iVar4);
        iVar6 = iVar7 + -2;
      }
    }
    iVar4 = FUN_0025ba30(iVar1);
    FUN_002749b4(local_1c[0]);
    iVar7 = iVar6;
  }
  return;
}


