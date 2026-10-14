/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027df1c FUN_0027df1c */

void FUN_0027df1c(undefined4 *param_1,int param_2,uint param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte local_28;
  int local_1c [2];
  
  if (*param_5 != 0) {
    return;
  }
  if (param_2 == 0) {
    iVar1 = FUN_0026b4e4(DAT_0027dfb4);
  }
  else {
    iVar2 = FUN_0025c29c();
    iVar1 = FUN_00274878(*param_1,iVar2,local_1c,0);
    iVar3 = local_1c[0];
    if (iVar1 == 0) {
      iVar2 = (param_2 - iVar2) * 5;
      if (iVar2 + -5 < 0) {
        iVar3 = FUN_0026b4e4(DAT_0027dfb8);
        *param_5 = iVar3;
      }
      else {
        iVar1 = *(int *)(local_1c[0] + 4);
        pbVar5 = (byte *)(iVar1 + iVar2 + -5);
        if ((*pbVar5 != param_3) || (iVar4 = FUN_0025ba30(iVar1 + iVar2 + -4), iVar4 != param_4)) {
          iVar3 = FUN_002733c4(iVar3);
          *param_5 = iVar3;
          if (iVar3 == 0) {
            local_28 = (byte)param_3;
            *pbVar5 = local_28;
            FUN_0025ba48(iVar1 + iVar2 + -4,param_4);
          }
        }
      }
      FUN_002749b4(local_1c[0]);
      return;
    }
  }
  *param_5 = iVar1;
  return;
}


