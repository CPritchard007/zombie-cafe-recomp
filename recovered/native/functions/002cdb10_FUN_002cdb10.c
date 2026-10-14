/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002cdb10 FUN_002cdb10 */

undefined4 FUN_002cdb10(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 local_5c;
  int local_58;
  int local_54;
  undefined4 *local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  uint local_34;
  int local_30;
  undefined4 local_2c;
  int aiStack_28 [5];
  
  iVar10 = *(int *)(param_1 + 0x1d4);
  uVar5 = *(uint *)(param_1 + 0x1a8);
  if (((*(int *)(param_1 + 0x118) == 0) || (*(int *)(iVar10 + 0x2c) != 0)) ||
     (iVar1 = FUN_002cdac2(), iVar1 != 0)) {
    if (*(int *)(iVar10 + 0x28) == 0) {
      local_40 = **(undefined4 **)(param_1 + 0x18);
      local_3c = (*(undefined4 **)(param_1 + 0x18))[1];
      uVar4 = *(uint *)(iVar10 + 0x10);
      iVar1 = *(int *)(iVar10 + 0xc);
      local_2c = *(undefined4 *)(iVar10 + 0x14);
      aiStack_28[0] = *(int *)(iVar10 + 0x18);
      aiStack_28[1] = *(undefined4 *)(iVar10 + 0x1c);
      aiStack_28[2] = *(undefined4 *)(iVar10 + 0x20);
      aiStack_28[3] = *(undefined4 *)(iVar10 + 0x24);
      iVar12 = DAT_002cdc8c + 0x2cdb7a;
      local_54 = param_1;
      local_4c = param_2;
      local_30 = param_1;
      for (local_58 = 0; local_58 < *(int *)(param_1 + 0x170); local_58 = local_58 + 1) {
        puVar6 = (undefined2 *)*local_4c;
        local_4c = local_4c + 1;
        iVar7 = *(int *)(local_54 + 0x174);
        iVar11 = *(int *)((*(int *)(*(int *)((iVar7 + 0x56) * 4 + param_1) + 0x14) + 0xc) * 4 +
                         iVar10);
        if ((int)uVar4 < 8) {
          iVar1 = FUN_002cd930(&local_40,iVar1,uVar4,0);
          if (iVar1 == 0) {
            return 0;
          }
          local_5c = 1;
          iVar1 = local_38;
          uVar4 = local_34;
          if (7 < (int)local_34) goto LAB_002cdbb8;
LAB_002cdbe6:
          uVar8 = FUN_002cda08(&local_40,iVar1,uVar4,iVar11,local_5c);
          iVar1 = local_38;
          uVar4 = local_34;
          if ((int)uVar8 < 0) {
            return 0;
          }
        }
        else {
LAB_002cdbb8:
          uVar8 = iVar1 >> (uVar4 - 8 & 0xff) & 0xff;
          iVar2 = *(int *)((uVar8 + 0x24) * 4 + iVar11);
          local_5c = 9;
          if (iVar2 == 0) goto LAB_002cdbe6;
          uVar8 = (uint)*(byte *)(iVar11 + uVar8 + 0x490);
          uVar4 = uVar4 - iVar2;
        }
        if (uVar8 != 0) {
          if (((int)uVar4 < (int)uVar8) &&
             (iVar11 = FUN_002cd930(&local_40,iVar1,uVar4,uVar8), iVar1 = local_38, uVar4 = local_34
             , iVar11 == 0)) {
            return 0;
          }
          uVar4 = uVar4 - uVar8;
          iVar11 = uVar8 - 1;
          uVar9 = *(uint *)(uVar8 * 4 + iVar12);
          uVar8 = iVar1 >> (uVar4 & 0xff) & uVar9;
          if ((int)uVar8 <= *(int *)(iVar11 * 4 + iVar12)) {
            uVar8 = uVar8 - uVar9;
          }
        }
        iVar11 = aiStack_28[iVar7];
        aiStack_28[iVar7] = uVar8 + iVar11;
        *puVar6 = (short)(uVar8 + iVar11 << (uVar5 & 0xff));
        local_54 = local_54 + 4;
      }
      **(undefined4 **)(param_1 + 0x18) = local_40;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = local_3c;
      *(uint *)(iVar10 + 0x10) = uVar4;
      *(int *)(iVar10 + 0xc) = iVar1;
      *(undefined4 *)(iVar10 + 0x14) = local_2c;
      *(int *)(iVar10 + 0x18) = aiStack_28[0];
      *(int *)(iVar10 + 0x1c) = aiStack_28[1];
      *(int *)(iVar10 + 0x20) = aiStack_28[2];
      *(int *)(iVar10 + 0x24) = aiStack_28[3];
    }
    uVar3 = 1;
    *(int *)(iVar10 + 0x2c) = *(int *)(iVar10 + 0x2c) + -1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


