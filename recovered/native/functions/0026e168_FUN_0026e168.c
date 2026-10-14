/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026e168 FUN_0026e168 */

void FUN_0026e168(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4,uint param_5
                 ,uint param_6,undefined4 param_7,undefined4 param_8,int param_9,
                 undefined4 *param_10)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  uint local_1e8;
  uint local_1e4;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined1 auStack_1a8 [8];
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_190;
  undefined4 local_18c;
  uint local_188;
  uint local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 *local_170;
  undefined1 local_16c;
  undefined2 local_16a;
  undefined4 local_168;
  uint local_160;
  
  iVar6 = *(int *)(param_3 + 0x20);
  uVar9 = FUN_0025d3f8(param_2[1],iVar6);
  uVar1 = (uint)((ulonglong)uVar9 >> 0x20);
  uVar7 = param_2[8];
  uVar3 = uVar7 + param_2[6] * 0x28;
  if (((*(char *)(param_3 + 0x1d) == '\0') && (*(int *)(param_3 + 0x3c) == 0)) &&
     (-1 < (int)((uint)*(ushort *)((int)param_2 + 0x16) << 0x18))) {
    for (; uVar7 < uVar3; uVar7 = uVar7 + 0x28) {
      if (((*(short *)(uVar7 + 0x10) == 0x100) &&
          ((*(uint *)(uVar7 + 0x24) & param_6 & ~uVar1) == 0 &&
           (*(uint *)(uVar7 + 0x20) & param_5 & ~(uint)uVar9) == 0)) &&
         (iVar4 = *(int *)(uVar7 + 0xc),
         (*(uint *)(iVar4 + 0x16c) & uVar1) != 0 || (*(uint *)(iVar4 + 0x168) & (uint)uVar9) != 0))
      {
        uVar8 = *(uint *)(iVar4 + 0x20);
        uVar5 = uVar8 + *(int *)(iVar4 + 0x18) * 0x28;
        local_1e8 = 0;
        local_1e4 = 0;
        uVar10 = CONCAT44(DAT_0026e37c,DAT_0026e378);
        uVar12 = CONCAT44(DAT_0026e37c,DAT_0026e378);
        while( true ) {
          local_1ec = (undefined4)((ulonglong)uVar10 >> 0x20);
          local_1f0 = (undefined4)uVar10;
          local_1f4 = (undefined4)((ulonglong)uVar12 >> 0x20);
          local_1f8 = (undefined4)uVar12;
          if (uVar5 <= uVar8) break;
          if (*(short *)(uVar8 + 0x10) == 0x200) {
            puVar2 = *(undefined4 **)(uVar8 + 0xc);
LAB_0026e26e:
            FUN_0026e0f8(param_1,puVar2,param_3,auStack_1a8,param_5,param_6,param_7,param_8,
                         auStack_1a8);
            uVar12 = __adddf3(local_1f8,local_1f4,local_190,local_18c);
            uVar10 = __adddf3(local_1f0,local_1ec,local_1a0,local_19c);
            local_1e8 = local_1e8 | local_188;
            local_1e4 = local_184 | local_1e4;
            iVar4 = __aeabi_dcmpge((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),param_10[6],
                                   param_10[7]);
            if (iVar4 != 0) break;
          }
          else if (*(int *)(uVar8 + 8) == iVar6) {
            local_180 = *param_2;
            local_17c = param_2[1];
            local_16c = 0x45;
            local_16a = 0;
            local_168 = 1;
            puVar2 = &local_180;
            local_170 = param_2;
            local_160 = uVar8;
            goto LAB_0026e26e;
          }
          uVar8 = uVar8 + 0x28;
        }
        local_1ec = (undefined4)((ulonglong)uVar10 >> 0x20);
        local_1f0 = (undefined4)uVar10;
        local_1f4 = (undefined4)((ulonglong)uVar12 >> 0x20);
        local_1f8 = (undefined4)uVar12;
        if (param_9 != 0) {
          uVar11 = CONCAT44(DAT_0026e384,DAT_0026e380);
          uVar12 = CONCAT44(DAT_0026e38c,DAT_0026e388);
          while( true ) {
            local_1cc = (undefined4)((ulonglong)uVar11 >> 0x20);
            local_1d0 = (undefined4)uVar11;
            local_1d4 = (undefined4)((ulonglong)uVar12 >> 0x20);
            local_1d8 = (undefined4)uVar12;
            iVar4 = __aeabi_dcmpgt(local_1f0,local_1ec,local_1d0,local_1cc);
            if (iVar4 == 0) break;
            uVar12 = __adddf3(local_1d8,local_1d4,DAT_0026e388,DAT_0026e38c);
            uVar11 = __muldf3(local_1d0,local_1cc,DAT_0026e380,DAT_0026e384);
          }
          uVar12 = __muldf3(local_1f0,local_1ec,local_1d8,local_1d4);
          uVar12 = __adddf3(local_1f8,local_1f4,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
        }
        local_1f4 = (undefined4)((ulonglong)uVar12 >> 0x20);
        local_1f8 = (undefined4)uVar12;
        iVar4 = __aeabi_dcmplt(local_1f8,local_1f4,param_10[6],param_10[7]);
        if (iVar4 != 0) {
          *(undefined8 *)(param_10 + 6) = uVar12;
          param_10[8] = local_1e8;
          param_10[9] = local_1e4;
          *(undefined8 *)(param_10 + 2) = uVar10;
          *param_10 = 0x10000000;
          param_10[4] = uVar7;
        }
      }
    }
  }
  return;
}


