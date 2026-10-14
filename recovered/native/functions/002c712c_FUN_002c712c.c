/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c712c FUN_002c712c */

undefined8 FUN_002c712c(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  
  puVar3 = (undefined4 *)param_1[6];
  iVar5 = puVar3[1];
  pbVar4 = (byte *)*puVar3;
  if (iVar5 == 0) {
    iVar5 = (*(code *)puVar3[3])();
    if (iVar5 == 0) goto LAB_002c71a6;
    pbVar4 = (byte *)*puVar3;
    iVar5 = puVar3[1];
  }
  bVar1 = *pbVar4;
  iVar5 = iVar5 + -1;
  pbVar4 = pbVar4 + 1;
  if (iVar5 == 0) {
    iVar5 = (*(code *)puVar3[3])(param_1);
    if (iVar5 == 0) goto LAB_002c71a6;
    pbVar4 = (byte *)*puVar3;
    iVar5 = puVar3[1];
  }
  iVar2 = (uint)bVar1 * 0x100 + (uint)*pbVar4 + -2;
  *(undefined4 *)(*param_1 + 0x14) = 0x5d;
  *(int *)(*param_1 + 0x18) = param_1[0x6e];
  *(int *)(*param_1 + 0x1c) = iVar2;
  (**(code **)(*param_1 + 4))(param_1,1);
  *puVar3 = pbVar4 + 1;
  puVar3[1] = iVar5 + -1;
  iVar5 = 1;
  if (0 < iVar2) {
    (**(code **)(param_1[6] + 0x10))(param_1,iVar2);
  }
LAB_002c71a6:
  return CONCAT44(param_1,iVar5);
}


