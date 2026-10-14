/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026b790 FUN_0026b790 */

undefined8 FUN_0026b790(undefined1 *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  short local_20;
  undefined1 local_1c;
  
  iVar5 = *(int *)(param_1 + 0x34);
  iVar7 = *(int *)(param_1 + 0x38);
  bVar1 = param_1[5];
  uVar6 = (uint)bVar1;
  if ((int)((uint)*(ushort *)(iVar5 + 0x16) << 0x1d) < 0) {
    memset((void *)(iVar7 + uVar6),0,*(int *)(iVar5 + 0x24) - uVar6);
  }
  local_1c = (undefined1)param_2;
  *(undefined1 *)(iVar7 + uVar6) = local_1c;
  iVar2 = (uint)((param_2 & 8) == 0) * 4 + uVar6 + 8;
  local_20 = (short)iVar2;
  memset((void *)(iVar7 + uVar6 + 1),0,4);
  iVar3 = iVar7 + uVar6;
  *(undefined1 *)(iVar3 + 7) = 0;
  *(char *)(iVar3 + 5) = (char)((uint)*(undefined4 *)(iVar5 + 0x24) >> 8);
  *(char *)(iVar3 + 6) = (char)*(undefined4 *)(iVar5 + 0x24);
  *(short *)(param_1 + 0xe) = (short)*(undefined4 *)(iVar5 + 0x24) - local_20;
  FUN_0026b73c(param_1,param_2);
  param_1[5] = bVar1;
  *(short *)(param_1 + 0xc) = local_20;
  *(int *)(param_1 + 0x3c) = iVar7 + *(int *)(iVar5 + 0x24);
  *(int *)(param_1 + 0x40) = iVar7 + iVar2;
  param_1[1] = 0;
  uVar4 = *(undefined4 *)(iVar5 + 0x20);
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(short *)(param_1 + 0x12) = (short)uVar4 + -1;
  *param_1 = 1;
  return CONCAT44(param_2,iVar2);
}


