/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002caa9e FUN_002caa9e */

void FUN_002caa9e(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_2[2];
  iVar6 = iVar1 * param_2[6];
  iVar5 = 0;
  while( true ) {
    if (param_2[4] <= iVar5) {
      return;
    }
    iVar3 = param_2[4] - iVar5;
    if (param_2[5] < iVar3) {
      iVar3 = param_2[5];
    }
    iVar2 = param_2[7] - (iVar5 + param_2[6]);
    if (iVar2 < iVar3) {
      iVar3 = iVar2;
    }
    iVar2 = param_2[1] - (iVar5 + param_2[6]);
    if (iVar2 < iVar3) {
      iVar3 = iVar2;
    }
    if (iVar3 < 1) break;
    iVar3 = iVar3 * iVar1;
    if (param_3 == 0) {
      pcVar4 = (code *)param_2[0xc];
    }
    else {
      pcVar4 = (code *)param_2[0xd];
    }
    (*pcVar4)(param_1,param_2 + 0xc,*(undefined4 *)(*param_2 + iVar5 * 4),iVar6,iVar3);
    iVar6 = iVar6 + iVar3;
    iVar5 = iVar5 + param_2[5];
  }
  return;
}


