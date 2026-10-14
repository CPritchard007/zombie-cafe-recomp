/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00262718 FUN_00262718 */

void FUN_00262718(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  if (-1 < *(int *)(*param_1 + 0x18) << 0x1e) {
    piVar5 = param_1 + 0x19;
    piVar2 = piVar5;
    do {
      if (piVar2[4] == 0) {
        iVar4 = param_1[0x17];
        *piVar2 = param_2;
        piVar2[1] = param_3;
        piVar2[3] = iVar4;
        *(undefined1 *)(piVar2 + 2) = 0;
        piVar2[4] = param_4;
        iVar1 = param_1[0x18];
        piVar2[5] = iVar1;
        goto LAB_00262790;
      }
      piVar2 = piVar2 + 6;
    } while (piVar2 != param_1 + 0x55);
    iVar4 = -1;
    iVar3 = 0;
    iVar1 = DAT_00262798;
    do {
      if (piVar5[5] < iVar1) {
        iVar4 = iVar3;
        iVar1 = piVar5[5];
      }
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 6;
    } while (iVar3 != 10);
    if (iVar4 != -1) {
      param_1[iVar4 * 6 + 0x1c] = param_1[0x17];
      param_1[iVar4 * 6 + 0x19] = param_2;
      param_1[iVar4 * 6 + 0x1a] = param_3;
      param_1[iVar4 * 6 + 0x1d] = param_4;
      *(undefined1 *)(param_1 + iVar4 * 6 + 0x1b) = 0;
      iVar1 = param_1[0x18];
      param_1[iVar4 * 6 + 0x1e] = iVar1;
LAB_00262790:
      param_1[0x18] = iVar1 + 1;
    }
  }
  return;
}


