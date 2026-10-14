/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00260b50 FUN_00260b50 */

int FUN_00260b50(int param_1,uint *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)((*(short *)(param_1 + 0x5e) + 0x22) * 4 + param_1);
  if (*(short *)(param_1 + 0x42) == 0) {
    iVar2 = (*(short *)(param_1 + 0x5e) + 0x30) * 2;
    FUN_00260b32(iVar4,*(undefined2 *)(iVar2 + param_1),param_1 + 0x28,iVar2,param_4);
  }
  iVar1 = 0;
  iVar2 = *(int *)(param_1 + 0x30) + (uint)*(ushort *)(param_1 + 0x3c);
  if (*(char *)(iVar4 + 2) == '\0') {
    iVar1 = *(int *)(param_1 + 0x28);
  }
  uVar3 = (uint)*(ushort *)(param_1 + 0x3e);
  if (param_3 != 0) {
    iVar2 = iVar2 + iVar1;
    uVar3 = uVar3 - iVar1;
  }
  *param_2 = uVar3;
  return iVar2;
}


