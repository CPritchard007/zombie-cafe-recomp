/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002be48c CCTileRenderer::Render */

/* CCTileRenderer::Render(void*, unsigned char const*, float, unsigned int, unsigned int) */

void CCTileRenderer::Render(void *param_1,uchar *param_2,float param_3,uint param_4,uint param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  int in_stack_00000000;
  uint local_40;
  int local_3c;
  uchar *local_34;
  
  uVar5 = *(undefined4 *)((int)param_1 + 8);
  uVar1 = __fixunssfsi(param_4);
  uVar2 = __fixunssfsi(uVar5);
  __aeabi_uidivmod(uVar1,uVar2);
  iVar3 = __floatunsisf(extraout_r1);
  iVar6 = *(int *)((int)param_1 + 0x30);
  puVar9 = *(undefined4 **)((int)param_1 + 0x3c);
  puVar10 = *(undefined4 **)((int)param_1 + 0x40);
  glTranslatef(iVar3 + -0x80000000,0,0);
  __divsf3(param_4,uVar5);
  iVar4 = __fixsfsi();
  local_40 = 0;
  local_34 = param_2 + iVar4;
  local_3c = 0;
  while( true ) {
    if (*(uint *)((int)param_1 + 0x1c) <= local_40) break;
    uVar2 = *(undefined4 *)((int)param_1 + 0xc);
    uVar1 = __floatunsisf(local_40);
    uVar1 = __mulsf3(uVar1,uVar2);
    uVar2 = __addsf3(uVar1,uVar2);
    for (uVar11 = 0; uVar11 < *(uint *)((int)param_1 + 0x18); uVar11 = uVar11 + 1) {
      if (local_34[uVar11] != 0) {
        puVar7 = (undefined4 *)(iVar6 + in_stack_00000000 * 0x28 + (uint)local_34[uVar11] * 0x28);
        *puVar10 = *puVar7;
        puVar10[1] = puVar7[1];
        puVar10[2] = puVar7[2];
        puVar10[3] = puVar7[3];
        puVar10[4] = puVar7[4];
        puVar10[5] = puVar7[5];
        puVar10[6] = puVar7[6];
        puVar10[7] = puVar7[7];
        uVar8 = *(undefined4 *)((int)param_1 + 8);
        puVar10 = puVar10 + 8;
        uVar5 = __floatunsisf(uVar11);
        uVar5 = __mulsf3(uVar5,uVar8);
        uVar8 = __addsf3(uVar5,uVar8);
        puVar9[3] = uVar8;
        *puVar9 = uVar5;
        puVar9[2] = 0;
        puVar9[5] = 0;
        puVar9[1] = uVar1;
        puVar9[4] = uVar1;
        puVar9[7] = uVar2;
        puVar9[10] = uVar2;
        puVar9[6] = uVar5;
        local_3c = local_3c + 1;
        puVar9[8] = 0;
        puVar9[9] = uVar8;
        puVar9[0xb] = 0;
        puVar9 = puVar9 + 0xc;
      }
    }
    local_40 = local_40 + 1;
    local_34 = local_34 + param_5;
  }
  glEnableClientState(DAT_002be5f0);
  glEnableClientState(DAT_002be5f4);
  glDisableClientState(DAT_002be5f8);
  glVertexPointer(3,DAT_002be5fc,0,*(undefined4 *)((int)param_1 + 0x3c));
  glTexCoordPointer(2,DAT_002be5fc,0,*(undefined4 *)((int)param_1 + 0x40));
  glDrawElements(5,local_3c * 6 + -2,DAT_002be600,*(undefined4 *)((int)param_1 + 0x38));
  glTranslatef(iVar3,0,0);
  return;
}


