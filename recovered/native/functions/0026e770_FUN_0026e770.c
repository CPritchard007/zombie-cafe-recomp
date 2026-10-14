/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026e770 FUN_0026e770 */

undefined4 * FUN_0026e770(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 local_24;
  undefined4 *local_20;
  
  iVar3 = *(int *)(param_2 + 0x24);
  uVar4 = *param_1;
  puVar1 = (undefined4 *)FUN_0025f04c(uVar4,iVar3 * 5 + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[2] = puVar1 + iVar3 + 3;
    local_20 = puVar1;
    for (iVar5 = 0; iVar5 < iVar3; iVar5 = iVar5 + 1) {
      uVar2 = FUN_0026e718(param_1,*(undefined4 *)(iVar5 * 4 + *(int *)(param_2 + 0x20)));
      local_20[3] = uVar2;
      *(undefined1 *)(puVar1[2] + iVar5) = *(undefined1 *)(*(int *)(param_2 + 0x1c) + iVar5);
      local_20 = local_20 + 1;
    }
    local_24 = (undefined2)iVar3;
    *(undefined2 *)((int)puVar1 + 6) = local_24;
  }
  if (param_1[0x11] != 0) {
    FUN_0025fbda(uVar4,puVar1);
    puVar1 = (undefined4 *)0x0;
  }
  return puVar1;
}


