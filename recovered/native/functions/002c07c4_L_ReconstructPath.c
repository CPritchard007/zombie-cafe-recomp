/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c07c4 L_ReconstructPath */

/* L_ReconstructPath(SPathFinding*, unsigned int, unsigned int, ccPath*) */

void L_ReconstructPath(SPathFinding *param_1,uint param_2,uint param_3,ccPath *param_4)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 1;
  for (uVar4 = param_3; uVar4 != param_2;
      uVar4 = *(uint *)(*(int *)(param_1 + 4) + uVar4 * 0x24 + 0x18)) {
    uVar5 = uVar5 + 1;
  }
  if (*(uint *)(param_4 + 8) < uVar5) {
    *(uint *)(param_4 + 8) = uVar5;
    if (*(void **)param_4 != (void *)0x0) {
      free(*(void **)param_4);
    }
    pvVar1 = malloc(*(int *)(param_4 + 8) << 2);
    *(void **)param_4 = pvVar1;
    if (*(void **)(param_4 + 4) != (void *)0x0) {
      free(*(void **)(param_4 + 4));
    }
    iVar6 = *(int *)(param_4 + 8);
    pvVar1 = malloc(iVar6 << 2);
    *(void **)(param_4 + 4) = pvVar1;
    *(undefined4 *)((iVar6 + -1) * 4 + (int)pvVar1) = 0;
  }
  iVar6 = DAT_002c0884;
  *(uint *)(param_4 + 8) = uVar5;
  iVar6 = (uVar5 + iVar6) * 4;
  do {
    if (param_3 == param_2) {
      **(uint **)param_4 = param_3;
      return;
    }
    *(uint *)((int)*(uint **)param_4 + iVar6 + 4) = param_3;
    param_3 = *(uint *)(*(int *)(param_1 + 4) + param_3 * 0x24 + 0x18);
    piVar2 = (int *)(*(int *)(param_1 + 4) + param_3 * 0x24);
    for (iVar3 = 0; iVar3 != *piVar2; iVar3 = iVar3 + 1) {
      if (*(int *)(piVar2[1] + iVar3 * 4) == *(int *)(*(int *)param_4 + iVar6 + 4)) {
        *(undefined4 *)(*(int *)(param_4 + 4) + iVar6) = *(undefined4 *)(piVar2[2] + iVar3 * 4);
        break;
      }
    }
    iVar6 = iVar6 + -4;
  } while( true );
}


