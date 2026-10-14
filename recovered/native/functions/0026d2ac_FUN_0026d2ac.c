/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026d2ac FUN_0026d2ac */

int * FUN_0026d2ac(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_24;
  int *local_20;
  
  iVar7 = *param_2;
  iVar5 = *param_1;
  piVar3 = (int *)FUN_0025f04c(iVar5,iVar7 * 5 + 0x10);
  if (piVar3 != (int *)0x0) {
    piVar3[2] = (int)(piVar3 + iVar7 + 3);
    *(short *)((int)piVar3 + 6) = (short)iVar7;
    uVar2 = *(undefined1 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0xc) + 0x4d);
    *piVar3 = iVar5;
    *(undefined1 *)(piVar3 + 1) = uVar2;
    puVar6 = (undefined4 *)param_2[2];
    local_20 = piVar3;
    for (local_24 = 0; local_24 < iVar7; local_24 = local_24 + 1) {
      iVar4 = FUN_0026cf38(param_1,*puVar6);
      if (iVar4 == 0) {
        iVar4 = *(int *)(iVar5 + 8);
      }
      local_20[3] = iVar4;
      puVar1 = puVar6 + 3;
      puVar6 = puVar6 + 5;
      *(undefined1 *)(piVar3[2] + local_24) = *(undefined1 *)puVar1;
      local_20 = local_20 + 1;
    }
  }
  return piVar3;
}


