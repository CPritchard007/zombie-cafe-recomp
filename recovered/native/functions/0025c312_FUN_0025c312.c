/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025c312 FUN_0025c312 */

undefined4 FUN_0025c312(int param_1,uint param_2,int param_3,int param_4,int *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  if ((param_3 == 0) || (uVar1 = 8, -1 < (int)((uint)*(ushort *)(iVar3 + 0x16) << 0x1f))) {
    if (param_2 == 1) {
      param_2 = (uint)(*(int *)(iVar3 + 0x2c) != 0);
    }
    param_5[6] = param_2;
    *(undefined2 *)((int)param_5 + 0x5e) = 0xffff;
    param_5[4] = param_4;
    *param_5 = param_1;
    param_5[1] = iVar3;
    *(char *)(param_5 + 0x16) = (char)param_3;
    iVar2 = *(int *)(iVar3 + 8);
    param_5[2] = iVar2;
    if (iVar2 != 0) {
      *(int **)(iVar2 + 0xc) = param_5;
    }
    uVar1 = 0;
    *(int **)(iVar3 + 8) = param_5;
    *(undefined1 *)((int)param_5 + 0x5b) = 0;
    param_5[8] = 0;
    param_5[9] = 0;
  }
  return uVar1;
}


