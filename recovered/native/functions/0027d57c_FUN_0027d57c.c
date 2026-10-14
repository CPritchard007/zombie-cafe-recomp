/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027d57c FUN_0027d57c */

int FUN_0027d57c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_24;
  
  iVar2 = *param_1;
  if (*(int *)(iVar2 + 0x1e4) == 0) {
    return 0;
  }
  if (param_1[0x1d] == 0) {
    return 0;
  }
  iVar3 = param_1[0x1d] + -1;
  iVar4 = 0;
  for (local_24 = 0; local_24 < *(int *)(iVar2 + 0x14); local_24 = local_24 + 1) {
    iVar5 = *(int *)(*(int *)(iVar2 + 0x10) + local_24 * 0x10 + 4);
    if (iVar5 != 0) {
      if ((((param_2 != 2) || (*(char *)(iVar5 + 8) != '\x02')) ||
          (iVar1 = FUN_0027d530(iVar5,2,iVar3), iVar1 == 0)) &&
         (iVar1 = 0, *(char *)(iVar5 + 8) == '\x02')) {
        iVar1 = FUN_0027d530(iVar5,1,iVar3);
      }
      if (iVar4 == 0) {
        iVar4 = iVar1;
      }
    }
  }
  *(int *)(iVar2 + 0x1e4) = *(int *)(iVar2 + 0x1e4) + -1;
  param_1[0x1d] = 0;
  if (iVar4 == 0) {
    if ((param_2 == 2) && (iVar4 = FUN_0025d378(iVar2,2,iVar3), iVar4 != 0)) goto LAB_0027d628;
    iVar4 = FUN_0025d378(iVar2,1,iVar3);
  }
  if (param_2 != 2) {
    return iVar4;
  }
LAB_0027d628:
  iVar3 = param_1[0x27];
  *(int *)(iVar2 + 0x1e8) = param_1[0x26];
  *(int *)(iVar2 + 0x1ec) = iVar3;
  return iVar4;
}


