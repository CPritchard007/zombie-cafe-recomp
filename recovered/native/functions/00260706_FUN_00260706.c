/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00260706 FUN_00260706 */

short * FUN_00260706(undefined4 param_1,short *param_2,undefined4 param_3)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  short *local_24;
  int local_20;
  
  local_24 = param_2;
  if (param_2 != (short *)0x0) {
    iVar3 = 0x48;
    if (0 < *param_2) {
      iVar3 = *param_2 * 0x40 + 8;
    }
    local_24 = (short *)FUN_0025ee10(param_1,iVar3);
    if (local_24 != (short *)0x0) {
      sVar1 = *param_2;
      local_24[1] = sVar1;
      *local_24 = sVar1;
      for (local_20 = 0; local_20 < *param_2; local_20 = local_20 + 1) {
        psVar5 = local_24 + local_20 * 0x20 + 4;
        psVar4 = param_2 + local_20 * 0x20 + 4;
        uVar2 = FUN_0025f25a(param_1,*(undefined4 *)psVar4);
        *(undefined4 *)psVar5 = uVar2;
        uVar2 = FUN_0025f25a(param_1,*(undefined4 *)(psVar4 + 2));
        *(undefined4 *)(psVar5 + 2) = uVar2;
        uVar2 = FUN_0025f25a(param_1,*(undefined4 *)(psVar4 + 4));
        *(undefined4 *)(psVar5 + 4) = uVar2;
        *(char *)(psVar5 + 0xe) = (char)psVar4[0xe];
        *(undefined4 *)(psVar5 + 0x10) = *(undefined4 *)(psVar4 + 0x10);
        *(undefined4 *)(psVar5 + 10) = *(undefined4 *)(psVar4 + 10);
        *(undefined4 *)(psVar5 + 0xc) = *(undefined4 *)(psVar4 + 0xc);
        *(char *)(psVar5 + 0xf) = (char)psVar4[0xf];
        uVar2 = FUN_0025f25a(param_1,*(undefined4 *)(psVar4 + 0x1c));
        *(undefined4 *)(psVar5 + 0x1c) = uVar2;
        *(undefined1 *)((int)psVar5 + 0x1d) = *(undefined1 *)((int)psVar4 + 0x1d);
        *(undefined4 *)(psVar5 + 0x1e) = *(undefined4 *)(psVar4 + 0x1e);
        iVar3 = *(int *)(psVar4 + 6);
        *(int *)(psVar5 + 6) = iVar3;
        if (iVar3 != 0) {
          *(short *)(iVar3 + 0x20) = *(short *)(iVar3 + 0x20) + 1;
        }
        uVar2 = FUN_002607da(param_1,*(undefined4 *)(psVar4 + 8),param_3);
        *(undefined4 *)(psVar5 + 8) = uVar2;
        uVar2 = FUN_002606fc(param_1,*(undefined4 *)(psVar4 + 0x12),param_3);
        *(undefined4 *)(psVar5 + 0x12) = uVar2;
        uVar2 = FUN_002603c0(param_1,*(undefined4 *)(psVar4 + 0x14));
        *(undefined4 *)(psVar5 + 0x14) = uVar2;
        uVar2 = *(undefined4 *)(psVar4 + 0x1a);
        *(undefined4 *)(psVar5 + 0x18) = *(undefined4 *)(psVar4 + 0x18);
        *(undefined4 *)(psVar5 + 0x1a) = uVar2;
      }
    }
  }
  return local_24;
}


