/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002beb00 CCToon::PrepareRenderList */

/* CCToon::PrepareRenderList(ccToon*) */

void CCToon::PrepareRenderList(ccToon *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 8); uVar1 = uVar1 + 1) {
    iVar3 = *(int *)(param_1 + 0xc) +
            *(int *)(uVar1 * 4 +
                    *(int *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x14) * 8 + 4)) * 0x40;
    if (((*(uint *)(iVar3 + 0x38) & 1) == 0) && (-1 < *(int *)(iVar3 + 0x3c))) {
      puVar2 = (undefined4 *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x24) * 0x1c);
      *puVar2 = *(undefined4 *)(iVar3 + 0x18);
      puVar2[1] = *(undefined4 *)(iVar3 + 0x1c);
      puVar2[2] = *(undefined4 *)(iVar3 + 0x20);
      puVar2[3] = *(undefined4 *)(iVar3 + 0x24);
      puVar2[4] = *(undefined4 *)(iVar3 + 0x28);
      puVar2[5] = *(undefined4 *)(iVar3 + 0x2c);
      *(undefined4 *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x24) * 0x1c + 0x18) =
           *(undefined4 *)(iVar3 + 0x3c);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    }
  }
  return;
}


