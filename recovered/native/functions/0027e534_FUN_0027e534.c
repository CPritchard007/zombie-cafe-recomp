/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027e534 FUN_0027e534 */

int FUN_0027e534(int param_1,undefined1 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_30;
  int local_24;
  undefined1 *local_20;
  int local_1c [2];
  
  local_24 = 0;
  iVar5 = *(int *)(param_1 + 0xc);
  if (param_2 == (undefined1 *)0x0) {
    local_20 = (undefined1 *)FUN_0025de4c(param_1,param_3);
  }
  else {
    *(short *)(*(int *)(param_2 + 0x44) + 0x1a) = *(short *)(*(int *)(param_2 + 0x44) + 0x1a) + 1;
    local_20 = param_2;
  }
  local_1c[0] = FUN_002733c4(*(undefined4 *)(iVar5 + 0x44));
  iVar4 = local_1c[0];
  if (local_1c[0] == 0) {
    iVar4 = *(int *)(iVar5 + 0x38) + 0x24;
    local_30 = FUN_0025ba30(iVar4);
    FUN_0025ba48(iVar4,local_30 + 1);
    if ((int)((uint)*(ushort *)(param_1 + 0x16) << 0x1d) < 0) {
      if (((local_20 == (undefined1 *)0x0) &&
          (local_1c[0] = FUN_00274984(param_1,param_3,&local_20), iVar4 = local_1c[0],
          local_1c[0] != 0)) ||
         (local_1c[0] = FUN_002733c4(*(undefined4 *)(local_20 + 0x44)), iVar4 = local_1c[0],
         local_1c[0] != 0)) goto LAB_0027e6e0;
      memset(*(void **)(local_20 + 0x38),0,*(size_t *)(*(int *)(local_20 + 0x34) + 0x20));
    }
    if ((*(char *)(param_1 + 0x11) == '\0') ||
       (FUN_0027df1c(param_1,param_3,2,0,local_1c), iVar4 = local_1c[0], local_1c[0] == 0)) {
      if (local_30 != 0) {
        local_30 = FUN_0025ba30(*(int *)(iVar5 + 0x38) + 0x20);
        local_1c[0] = FUN_00274984(param_1,local_30,&local_24,0);
        iVar1 = local_24;
        iVar4 = local_1c[0];
        if (local_1c[0] != 0) goto LAB_0027e6e0;
        uVar2 = FUN_0025ba30(*(int *)(local_24 + 0x38) + 4);
        uVar3 = *(uint *)(param_1 + 0x24) >> 2;
        if (uVar3 - 2 < uVar2) {
          iVar4 = FUN_0026b4e4(DAT_0027e6fc);
          goto LAB_0027e6e0;
        }
        if (uVar2 < uVar3 - 8) {
          local_1c[0] = FUN_002733c4(*(undefined4 *)(iVar1 + 0x44));
          iVar4 = local_1c[0];
          if (local_1c[0] == 0) {
            FUN_0025ba48(*(int *)(local_24 + 0x38) + 4,uVar2 + 1);
            FUN_0025ba48(*(int *)(local_24 + 0x38) + (uVar2 + 2) * 4,param_3);
            if ((local_20 != (undefined1 *)0x0) &&
               (-1 < (int)((uint)*(ushort *)(param_1 + 0x16) << 0x1d))) {
              iVar5 = *(int *)(local_20 + 0x44);
              if (((int)((uint)*(ushort *)(iVar5 + 0x18) << 0x1e) < 0) &&
                 (*(int *)(*(int *)(iVar5 + 0x10) + 0x60) == 0)) {
                *(ushort *)(iVar5 + 0x18) = *(ushort *)(iVar5 + 0x18) | 0x20;
              }
            }
            if (*(int *)(param_1 + 0x3c) == 0) {
              iVar5 = FUN_0025f3c2(*(undefined4 *)(param_1 + 0x2c));
              *(int *)(param_1 + 0x3c) = iVar5;
              iVar4 = 7;
              if (iVar5 == 0) goto LAB_0027e6e0;
            }
            iVar4 = 0;
            if (param_3 <= **(uint **)(param_1 + 0x3c)) {
              iVar4 = FUN_00260168(*(uint **)(param_1 + 0x3c),param_3);
            }
          }
          goto LAB_0027e6e0;
        }
      }
      if (((local_20 != (undefined1 *)0x0) ||
          (local_1c[0] = FUN_00274984(param_1,param_3,&local_20), iVar4 = local_1c[0],
          local_1c[0] == 0)) &&
         (local_1c[0] = FUN_002733c4(*(undefined4 *)(local_20 + 0x44)), iVar4 = local_1c[0],
         local_1c[0] == 0)) {
        FUN_0025ba48(*(undefined4 *)(local_20 + 0x38),local_30);
        FUN_0025ba48(*(int *)(local_20 + 0x38) + 4,0);
        FUN_0025ba48(*(int *)(iVar5 + 0x38) + 0x20,param_3);
        iVar4 = local_1c[0];
      }
    }
  }
LAB_0027e6e0:
  local_1c[0] = iVar4;
  if (local_20 != (undefined1 *)0x0) {
    *local_20 = 0;
  }
  FUN_00274a30(local_20);
  FUN_00274a30(local_24);
  return local_1c[0];
}


