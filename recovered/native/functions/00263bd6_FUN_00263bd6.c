/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00263bd6 FUN_00263bd6 */

void FUN_00263bd6(undefined4 param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  
  FUN_00263b20(*(undefined4 *)(param_2 + 0x44),(int)*(short *)(param_2 + 0x4c));
  FUN_00263b20(*(undefined4 *)(param_2 + 0x10),(uint)*(ushort *)(param_2 + 0x2c) << 1);
  puVar5 = *(uint **)(param_2 + 0xb8);
  while (puVar5 != (uint *)0x0) {
    puVar1 = (uint *)puVar5[6];
    uVar2 = *puVar5;
    uVar7 = puVar5[1];
    if (uVar2 != 0) {
      for (uVar4 = uVar2; uVar4 < uVar2 + uVar7 * 0x14; uVar4 = uVar4 + 0x14) {
        FUN_0026376e(param_1,(int)*(char *)(uVar4 + 1),*(undefined4 *)(uVar4 + 0x10));
      }
    }
    FUN_0025fbda(param_1,uVar2);
    FUN_0025fbda(param_1,puVar5);
    puVar5 = puVar1;
  }
  iVar3 = *(short *)(param_2 + 0x4e) + -1;
  iVar6 = iVar3 * 4;
  for (; -1 < iVar3; iVar3 = iVar3 + -1) {
    FUN_0025fbda(param_1,*(undefined4 *)(*(int *)(param_2 + 0x48) + iVar6));
    iVar6 = iVar6 + -4;
  }
  uVar2 = *(uint *)(param_2 + 4);
  iVar3 = *(int *)(param_2 + 0x1c);
  if (uVar2 != 0) {
    for (uVar7 = uVar2; uVar7 < uVar2 + iVar3 * 0x14; uVar7 = uVar7 + 0x14) {
      FUN_0026376e(param_1,(int)*(char *)(uVar7 + 1),*(undefined4 *)(uVar7 + 0x10));
    }
  }
  FUN_0025fbda(param_1,uVar2);
  FUN_0025fbda(param_1,*(undefined4 *)(param_2 + 0x28));
  FUN_0025fbda(param_1,*(undefined4 *)(param_2 + 0x10));
  FUN_0025fbda(param_1,*(undefined4 *)(param_2 + 0xa0));
  FUN_0025fbda(param_1,*(undefined4 *)(param_2 + 0xa4));
  FUN_0025fbda(param_1,param_2);
  return;
}


