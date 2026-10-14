/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025c172 FUN_0025c172 */

void FUN_0025c172(int param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = *(uint *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0xc);
  if ((param_6 < iVar1) || ((iVar1 == param_6 && (param_5 < uVar2)))) {
    param_4 = ((int)param_3 >> 0x1f) + param_6 + (uint)CARRY4(param_3,param_5);
    if ((iVar1 <= param_4) && ((iVar1 != param_4 || (uVar2 <= param_3 + param_5)))) {
      uVar2 = uVar2 - param_5;
      iVar1 = FUN_0025ace6(*(undefined4 *)(param_1 + 4),param_2,uVar2,param_4,param_5,param_6,
                           param_3 + param_5);
      if (iVar1 != 0) {
        return;
      }
      param_3 = param_3 - uVar2;
      iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x14))
                        (*(int **)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
      if (iVar1 != 0) {
        return;
      }
      if (param_3 == 0) {
        return;
      }
      param_4 = (int)uVar2 >> 0x1f;
      bVar3 = CARRY4(param_5,uVar2);
      param_5 = param_5 + uVar2;
      param_6 = param_6 + param_4 + (uint)bVar3;
      param_2 = param_2 + uVar2;
    }
  }
  FUN_0025ace6(*(undefined4 *)(param_1 + 4),param_2,param_3,param_4,param_5,param_6);
  return;
}


