/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025f15e FUN_0025f15e */

int FUN_0025f15e(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0025f0ac(param_1,0x98,0,0,param_4);
  if (iVar1 != 0) {
    param_2 = param_2 + param_3 * 0x40 + 8;
    iVar2 = *(int *)(param_2 + 0xc);
    *(int *)(iVar1 + 0x28) = iVar2;
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(param_2 + 0x20);
    if (*(int *)(iVar2 + 4) == param_4) {
      *(undefined2 *)(iVar1 + 0x1c) = 0xffff;
    }
    else {
      *(short *)(iVar1 + 0x1c) = (short)param_4;
      if (0x3f < param_4) {
        param_4 = 0x3f;
      }
      uVar3 = __ashldi3(1,0,param_4);
      *(uint *)(param_2 + 0x30) = (uint)uVar3 | *(uint *)(param_2 + 0x30);
      *(uint *)(param_2 + 0x34) = (uint)((ulonglong)uVar3 >> 0x20) | *(uint *)(param_2 + 0x34);
    }
    *(ushort *)(iVar1 + 2) = *(ushort *)(iVar1 + 2) | 4;
  }
  return iVar1;
}


