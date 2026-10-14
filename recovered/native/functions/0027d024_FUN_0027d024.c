/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027d024 FUN_0027d024 */

undefined8 FUN_0027d024(int param_1,undefined4 *param_2,undefined4 param_3)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  short *psVar7;
  int iVar8;
  
  bVar1 = *(byte *)(param_1 + 0x5b);
  iVar8 = param_1;
  if (1 < bVar1) {
    if (bVar1 == 3) {
      uVar6 = *(uint *)(param_1 + 0x54);
      if (uVar6 != 0) goto LAB_0027d13e;
    }
    else {
      *(byte *)(param_1 + 0x5b) = 0;
      iVar8 = 0;
      uVar6 = FUN_0027cf9c(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x48),
                           *(undefined4 *)(param_1 + 0x4c),0,param_1 + 0x54,param_3);
      if (uVar6 != 0) goto LAB_0027d13e;
      sqlite3_free(*(undefined4 *)(param_1 + 0x50));
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
  }
  uVar6 = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  if (*(char *)(param_1 + 0x5b) == '\0') {
    *param_2 = 1;
    uVar6 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x54) = 0;
    if (iVar5 < 0) {
      *param_2 = 0;
    }
    else {
      psVar7 = (short *)(param_1 + 0x5e);
      iVar5 = *(int *)((*psVar7 + 0x22) * 4 + param_1);
      if (*(char *)(iVar5 + 3) == '\0') {
        iVar4 = (uint)*(ushort *)((*psVar7 + 0x30) * 2 + param_1) * 2;
        uVar3 = FUN_0025ba30(*(int *)(iVar5 + 0x38) +
                             (uint)(CONCAT11(*(undefined1 *)(*(int *)(iVar5 + 0x40) + iVar4),
                                             *(undefined1 *)(*(int *)(iVar5 + 0x40) + iVar4 + 1)) &
                                   *(ushort *)(iVar5 + 0x12)));
        uVar6 = FUN_00274c90(param_1,uVar3);
        if (uVar6 != 0) goto LAB_0027d13e;
        uVar6 = FUN_00274cf4(param_1);
      }
      else {
        while( true ) {
          iVar4 = (int)*psVar7;
          iVar5 = (iVar4 + 0x30) * 2;
          sVar2 = *(short *)(iVar5 + param_1);
          if (sVar2 != 0) break;
          if (*psVar7 == 0) {
            *(undefined1 *)(param_1 + 0x5b) = 0;
            *param_2 = 1;
            uVar6 = 0;
            goto LAB_0027d13e;
          }
          FUN_00274a30(*(undefined4 *)((iVar4 + 0x22) * 4 + param_1));
          *psVar7 = *psVar7 + -1;
          *(undefined2 *)(param_1 + 0x42) = 0;
          *(undefined1 *)(param_1 + 0x5a) = 0;
        }
        *(undefined2 *)(param_1 + 0x42) = 0;
        *(undefined1 *)(param_1 + 0x5a) = 0;
        *(short *)(iVar5 + param_1) = sVar2 + -1;
        iVar5 = *(int *)((iVar4 + 0x22) * 4 + param_1);
        uVar6 = (uint)*(byte *)(iVar5 + 2);
        if ((uVar6 != 0) && (uVar6 = 0, *(char *)(iVar5 + 3) == '\0')) {
          uVar6 = FUN_0027d024(param_1,param_2);
        }
      }
      *param_2 = 0;
    }
  }
LAB_0027d13e:
  return CONCAT44(iVar8,uVar6);
}


