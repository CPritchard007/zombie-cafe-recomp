/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027c294 FUN_0027c294 */

uint FUN_0027c294(int param_1,uint param_2,size_t param_3,void *param_4,int param_5)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  void *__dest;
  undefined4 uVar4;
  uint extraout_r1;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  void *__src;
  uint local_38;
  size_t local_34;
  void *local_30;
  int local_2c;
  uint local_20;
  int local_1c [2];
  
  puVar8 = *(undefined4 **)(param_1 + 4);
  iVar7 = *(int *)((*(short *)(param_1 + 0x5e) + 0x22) * 4 + param_1);
  if (*(short *)(param_1 + 0x42) == 0) {
    FUN_00260b32(iVar7,*(undefined2 *)((*(short *)(param_1 + 0x5e) + 0x30) * 2 + param_1),
                 param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x5a) = 1;
  }
  iVar5 = 0;
  if (*(char *)(iVar7 + 2) == '\0') {
    iVar5 = *(int *)(param_1 + 0x28);
  }
  uVar4 = DAT_0027c4c4;
  if (param_3 + param_2 <= (uint)(iVar5 + *(int *)(param_1 + 0x34))) {
    uVar6 = (uint)*(ushort *)(param_1 + 0x3e);
    iVar5 = (uint)*(ushort *)(param_1 + 0x3c) + *(int *)(param_1 + 0x30);
    if (iVar5 + uVar6 <= (uint)(*(int *)(iVar7 + 0x38) + puVar8[9])) {
      if (param_2 < uVar6) {
        local_34 = uVar6 - param_2;
        if (param_3 + param_2 <= uVar6) {
          local_34 = param_3;
        }
        if (param_5 == 0) {
          memcpy(param_4,(void *)(iVar5 + param_2),local_34);
          uVar2 = 0;
        }
        else {
          uVar2 = FUN_002733c4(*(undefined4 *)(iVar7 + 0x44));
          if (uVar2 == 0) {
            memcpy((void *)(iVar5 + param_2),param_4,local_34);
          }
        }
        local_30 = (void *)((int)param_4 + local_34);
        local_34 = param_3 - local_34;
        param_2 = 0;
      }
      else {
        uVar2 = 0;
        param_2 = param_2 - uVar6;
        local_34 = param_3;
        local_30 = param_4;
      }
      if ((local_34 != 0) && (uVar2 == 0)) {
        uVar6 = puVar8[9] - 4;
        uVar1 = *(ushort *)(param_1 + 0x3e);
        local_20 = FUN_0025ba30(iVar5 + (uint)uVar1);
        uVar2 = (uint)*(byte *)(param_1 + 0x5c);
        if ((uVar2 != 0) && (uVar2 = 0, *(int *)(param_1 + 0x14) == 0)) {
          uVar2 = __udivsi3((*(int *)(param_1 + 0x38) + -1 + uVar6) - (uint)uVar1,uVar6);
          iVar7 = FUN_0025f3a8(uVar2 << 2);
          *(int *)(param_1 + 0x14) = iVar7;
          if (uVar2 != 0) {
            uVar2 = -(uint)(iVar7 == 0) & 7;
          }
        }
        local_38 = *(uint *)(param_1 + 0x14);
        if (local_38 != 0) {
          uVar3 = __udivsi3(param_2,uVar6);
          local_38 = *(uint *)(uVar3 * 4 + local_38);
          if (local_38 != 0) {
            local_20 = local_38;
            __aeabi_uidivmod(param_2,uVar6);
            param_2 = extraout_r1;
            local_38 = uVar3;
          }
        }
        local_2c = local_38 << 2;
        while (((local_34 != 0 && (uVar2 == 0)) && (uVar2 = local_20, local_20 != 0))) {
          if (*(int *)(param_1 + 0x14) != 0) {
            *(uint *)(*(int *)(param_1 + 0x14) + local_2c) = local_20;
          }
          if (param_2 < uVar6) {
            local_38 = uVar6 - param_2;
            if (local_34 + param_2 <= uVar6) {
              local_38 = local_34;
            }
            uVar2 = FUN_00274878(*puVar8,local_20,local_1c,0);
            iVar7 = local_1c[0];
            if (uVar2 == 0) {
              iVar5 = *(int *)(local_1c[0] + 4);
              local_20 = FUN_0025ba30(iVar5);
              __src = (void *)(iVar5 + param_2 + 4);
              __dest = local_30;
              if ((param_5 == 0) ||
                 (uVar2 = FUN_002733c4(iVar7), __dest = __src, __src = local_30, uVar2 == 0)) {
                memcpy(__dest,__src,local_38);
              }
              FUN_002749b4(local_1c[0]);
              param_2 = 0;
            }
            local_34 = local_34 - local_38;
            local_30 = (void *)((int)local_30 + local_38);
          }
          else {
            if ((*(int *)(param_1 + 0x14) == 0) ||
               (uVar3 = *(uint *)(*(int *)(param_1 + 0x14) + local_2c + 4), uVar3 == 0)) {
              uVar2 = FUN_00274f48(puVar8,local_20,0,&local_20);
            }
            else {
              uVar2 = 0;
              local_20 = uVar3;
            }
            param_2 = param_2 - uVar6;
          }
          local_2c = local_2c + 4;
        }
      }
      if (local_34 == 0) {
        return uVar2;
      }
      uVar4 = DAT_0027c4c8;
      if (uVar2 != 0) {
        return uVar2;
      }
    }
  }
  uVar6 = FUN_0026b4e4(uVar4);
  return uVar6;
}


