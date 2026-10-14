/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002be362 CCTileRenderer::SetTileSet */

/* CCTileRenderer::SetTileSet(void*, float, float, ccAtlasUV*, unsigned int, unsigned int) */

void * CCTileRenderer::SetTileSet
                 (void *param_1,float param_2,float param_3,ccAtlasUV *param_4,uint param_5,
                 uint param_6)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 extraout_r1;
  undefined4 *puVar9;
  int iVar10;
  int in_stack_00000000;
  int in_stack_00000004;
  int local_38;
  
  pvVar1 = malloc(in_stack_00000004 * in_stack_00000000 * 0x28);
  if (pvVar1 != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x30));
    *(int *)((int)param_1 + 0x28) = in_stack_00000000;
    *(void **)((int)param_1 + 0x30) = pvVar1;
    *(int *)((int)param_1 + 0x2c) = in_stack_00000004;
    uVar2 = __divsf3(0x3e800000,param_4);
    uVar3 = __divsf3(0x3e800000,param_5);
    uVar4 = __subsf3(*(undefined4 *)(param_6 + 8),*(undefined4 *)param_6);
    uVar5 = __floatunsisf(in_stack_00000000);
    uVar4 = __divsf3(uVar4,uVar5);
    uVar5 = __subsf3(*(undefined4 *)(param_6 + 0x14),*(undefined4 *)(param_6 + 4));
    uVar6 = __floatunsisf(in_stack_00000004);
    uVar5 = __divsf3(uVar5,uVar6);
    iVar10 = 0;
    local_38 = 0;
    while( true ) {
      if (local_38 == in_stack_00000004 * in_stack_00000000) break;
      __aeabi_uidivmod(local_38,in_stack_00000000);
      uVar6 = __floatunsisf(extraout_r1);
      uVar6 = __mulsf3(uVar6,uVar4);
      uVar6 = __addsf3(uVar6,*(undefined4 *)param_6);
      __udivsi3(local_38,in_stack_00000000);
      uVar7 = __floatunsisf();
      uVar7 = __mulsf3(uVar7,uVar5);
      uVar7 = __addsf3(uVar7,*(undefined4 *)(param_6 + 4));
      uVar8 = __addsf3(uVar6,uVar2);
      puVar9 = (undefined4 *)(*(int *)((int)param_1 + 0x30) + iVar10);
      puVar9[4] = uVar8;
      *puVar9 = uVar8;
      uVar8 = __addsf3(uVar7,uVar3);
      puVar9[3] = uVar8;
      puVar9[1] = uVar8;
      uVar6 = __addsf3(uVar6,uVar4);
      uVar6 = __subsf3(uVar6,uVar2);
      puVar9[6] = uVar6;
      puVar9[2] = uVar6;
      uVar6 = __addsf3(uVar7,uVar5);
      uVar6 = __subsf3(uVar6,uVar3);
      puVar9[7] = uVar6;
      puVar9[5] = uVar6;
      uVar6 = __fixsfsi(*(undefined4 *)((int)param_1 + 8));
      *(undefined4 *)(*(int *)((int)param_1 + 0x30) + iVar10 + 0x20) = uVar6;
      uVar6 = __fixsfsi(*(undefined4 *)((int)param_1 + 0xc));
      local_38 = local_38 + 1;
      *(undefined4 *)(*(int *)((int)param_1 + 0x30) + iVar10 + 0x24) = uVar6;
      iVar10 = iVar10 + 0x28;
    }
    pvVar1 = (void *)0x1;
  }
  return pvVar1;
}


