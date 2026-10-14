/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015641c Vector<GatyaLotteryData>::addElement */

/* Vector<GatyaLotteryData>::addElement(GatyaLotteryData) */

undefined8
Vector<GatyaLotteryData>::addElement
          (Vector<GatyaLotteryData> *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4) + 2;
  if (*(int *)param_1 < iVar2) {
    iVar1 = *(int *)param_1 * 2;
    if (iVar1 < iVar2) {
      iVar1 = iVar2;
    }
    resize(param_1,iVar1,-1);
  }
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 4) = iVar1 + 1;
  iVar1 = (iVar1 + 1) * 8;
  *(undefined4 *)(iVar1 + iVar2) = param_2;
  *(undefined4 *)(iVar2 + iVar1 + 4) = param_3;
  return CONCAT44(param_3,param_2);
}


