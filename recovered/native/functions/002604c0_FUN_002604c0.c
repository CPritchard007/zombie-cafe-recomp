/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002604c0 FUN_002604c0 */

int * FUN_002604c0(undefined4 param_1,int *param_2,uint param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_20;
  
  piVar2 = param_2;
  if ((param_2 != (int *)0x0) && (piVar2 = (int *)FUN_0025ee10(param_1,0xc), piVar2 != (int *)0x0))
  {
    piVar2[1] = 0;
    iVar5 = *param_2;
    *piVar2 = iVar5;
    if ((param_3 & 1) == 0) {
      for (iVar5 = 1; iVar5 < *param_2; iVar5 = iVar5 << 1) {
      }
    }
    puVar3 = (undefined4 *)FUN_0025ee10(param_1,iVar5 * 0x14);
    piVar2[2] = (int)puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      FUN_0025fbda(param_1,piVar2);
      piVar2 = (int *)0x0;
    }
    else {
      puVar6 = (undefined4 *)param_2[2];
      local_20 = 0;
      while (local_20 < *param_2) {
        uVar4 = FUN_002606fc(param_1,*puVar6,param_3);
        *puVar3 = uVar4;
        uVar4 = FUN_0025f25a(param_1,puVar6[1]);
        puVar3[1] = uVar4;
        uVar4 = FUN_0025f25a(param_1,puVar6[2]);
        puVar3[2] = uVar4;
        *(undefined1 *)(puVar3 + 3) = *(undefined1 *)(puVar6 + 3);
        *(undefined1 *)((int)puVar3 + 0xd) = 0;
        local_20 = local_20 + 1;
        *(undefined2 *)((int)puVar3 + 0xe) = *(undefined2 *)((int)puVar6 + 0xe);
        puVar1 = puVar6 + 4;
        puVar6 = puVar6 + 5;
        *(undefined2 *)(puVar3 + 4) = *(undefined2 *)puVar1;
        puVar3 = puVar3 + 5;
      }
    }
  }
  return piVar2;
}


