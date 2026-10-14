/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025c41a FUN_0025c41a */

int FUN_0025c41a(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  piVar1[0x30] = param_1[4];
  piVar1[0x2f] = param_1[0xe];
  iVar3 = *piVar1;
  piVar1[1] = param_1[2];
  piVar1[7] = param_1[0xc];
  piVar1[2] = param_1[3];
  piVar1[6] = param_1[0xd];
  piVar1[0x10] = param_1[5];
  *(short *)((int)piVar1 + 0x2e) = (short)param_1[10];
  iVar2 = param_1[9];
  *(int *)(iVar3 + 0x20) = param_1[8];
  *(int *)(iVar3 + 0x24) = iVar2;
  piVar1[0x1a] = param_1[0x11];
  return param_1[0xb];
}


