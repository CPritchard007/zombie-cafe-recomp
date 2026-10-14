/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026eb24 FUN_0026eb24 */

void FUN_0026eb24(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
                 int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  void *__s1;
  int iVar16;
  int local_78;
  undefined4 *local_70;
  undefined4 local_64;
  int local_40;
  undefined4 *local_30;
  undefined4 *local_2c;
  
  iVar6 = *param_1;
  iVar12 = param_5 + 2;
  iVar9 = param_5 + 4;
  iVar13 = param_5 + 5;
  iVar7 = param_5 + 6;
  iVar10 = param_5 + 7;
  iVar1 = FUN_002662b8();
  if (((iVar1 != 0) && (param_2 != (undefined4 *)0x0)) && (param_2[5] != 0)) {
    __s1 = (void *)*param_2;
    iVar2 = memcmp(__s1,(void *)(DAT_0026eee4 + 0x26eb88),7);
    if (iVar2 != 0) {
      iVar2 = FUN_0025d12c(iVar6,param_2[0x11]);
      iVar3 = FUN_00268e90(param_1,0x1c,__s1,0,
                           *(undefined4 *)(iVar2 * 0x10 + *(int *)(iVar6 + 0x10)));
      if (iVar3 == 0) {
        FUN_00265f96(param_1,iVar2,param_2[5],0,*param_2);
        iVar14 = param_1[0x12];
        param_1[0x12] = iVar14 + 1;
        FUN_002662da(iVar1,0x5e,0,param_5,0,*param_2,0);
        local_70 = (undefined4 *)param_2[4];
        iVar3 = DAT_0026eee8 + 0x26ebee;
        local_40 = -1;
        for (; local_70 != (undefined4 *)0x0; local_70 = (undefined4 *)local_70[5]) {
          if ((param_3 == local_70) || (param_3 == (undefined4 *)0x0)) {
            iVar16 = local_70[9];
            puVar4 = (undefined4 *)FUN_0025ee10(iVar6,iVar16 << 2);
            if (puVar4 != (undefined4 *)0x0) {
              uVar5 = FUN_0026e770(param_1,local_70);
              local_78 = param_5 + 8;
              iVar15 = local_78 + iVar16 * 2;
              if (param_1[0x13] < iVar15) {
                param_1[0x13] = iVar15;
              }
              FUN_002662da(iVar1,0x27,iVar14,local_70[10],iVar2,uVar5,0xfffffff0);
              FUN_002662da(iVar1,0x5e,0,param_5 + 1,0,*local_70,0);
              for (iVar15 = 0; iVar15 <= iVar16; iVar15 = iVar15 + 1) {
                FUN_0026641e(iVar1,7,0,param_5 + 7 + iVar15);
              }
              for (iVar15 = 0; iVar15 < iVar16; iVar15 = iVar15 + 1) {
                FUN_0026641e(iVar1,10,0,iVar16 + 8 + param_5 + iVar15);
              }
              uVar5 = FUN_00266020(iVar1);
              FUN_0026641e(iVar1,0x48,iVar14,uVar5);
              uVar11 = *(undefined4 *)(iVar1 + 0x1c);
              FUN_0026641e(iVar1,0x14,iVar10,1);
              local_64 = 0;
              local_30 = puVar4;
              for (iVar15 = 0; iVar15 < iVar16; iVar15 = iVar15 + 1) {
                FUN_00266266(iVar1,0x1d,iVar14,iVar15,param_5 + 3);
                if (iVar15 == 0) {
                  local_64 = FUN_002665da(iVar1,0x1c,local_78);
                }
                uVar8 = FUN_0026e718(param_1,*(undefined4 *)(iVar15 * 4 + local_70[8]));
                uVar8 = FUN_002662da(iVar1,0x4b,param_5 + 3,0,iVar16 + 8 + param_5 + iVar15,uVar8,
                                     0xfffffffc);
                *local_30 = uVar8;
                local_30 = local_30 + 1;
                FUN_0025c3b8(iVar1,0x80);
              }
              FUN_0026641e(iVar1,1,0,uVar5);
              local_2c = puVar4;
              for (iVar15 = 0; iVar15 < iVar16; iVar15 = iVar15 + 1) {
                uVar8 = *local_2c;
                local_2c = local_2c + 1;
                FUN_002624c2(iVar1,uVar8);
                if (iVar15 == 0) {
                  FUN_002624c2(iVar1,local_64);
                }
                FUN_0026641e(iVar1,0x14,local_78,1);
                FUN_00266266(iVar1,0x1d,iVar14,iVar15,local_78 + iVar16);
                local_78 = local_78 + 1;
              }
              FUN_0025fbda(iVar6,puVar4);
              FUN_0025c384(iVar1,uVar5);
              FUN_0026641e(iVar1,0x5f,iVar14,uVar11);
              FUN_002665da(iVar1,0x2d,iVar14);
              FUN_0026641e(iVar1,0xf,iVar10,iVar12);
              if (local_40 < 0) {
                local_40 = FUN_002665da(iVar1,0x1c,iVar10);
              }
              for (local_78 = 0; local_78 < iVar16; local_78 = local_78 + 1) {
                FUN_002662da(iVar1,0x5e,0,iVar13,0,DAT_0026eeec + 0x26edea,0);
                FUN_00266266(iVar1,0x5b,iVar13,iVar12,iVar12);
                iVar15 = param_5 + 8 + local_78;
                FUN_00266266(iVar1,0x56,iVar10,iVar15,iVar13);
                FUN_0026641e(iVar1,0x14,iVar13,0xffffffff);
                FUN_00266266(iVar1,0x59,iVar15,iVar13,iVar13);
                FUN_002665da(iVar1,0x90,iVar13);
                FUN_00266266(iVar1,0x5b,iVar13,iVar12,iVar12);
              }
              FUN_002662da(iVar1,0x1f,param_5,3,iVar9,iVar3,0);
              FUN_0026641e(iVar1,0x38,param_4,iVar7);
              FUN_00266266(iVar1,0x39,param_4,iVar9,iVar7);
              FUN_0025c3b8(iVar1,8);
            }
          }
        }
        if (param_2[4] == 0) {
          FUN_00266266(iVar1,0x27,iVar14,param_2[5],iVar2);
          FUN_0026641e(iVar1,0x20,iVar14,iVar12);
          FUN_002665da(iVar1,0x2d,iVar14);
          uVar5 = FUN_002665da(iVar1,0x1c,iVar12);
        }
        else {
          FUN_002624c2(iVar1,local_40);
          uVar5 = FUN_002662aa(iVar1,1);
        }
        FUN_0026641e(iVar1,10,0,param_5 + 1);
        FUN_002662da(iVar1,0x1f,param_5,3,iVar9,DAT_0026ef64 + 0x26ef18,0);
        FUN_0026641e(iVar1,0x38,param_4,iVar7);
        FUN_00266266(iVar1,0x39,param_4,iVar9,iVar7);
        FUN_0025c3b8(iVar1,8);
        if (param_1[0x13] < iVar9) {
          param_1[0x13] = iVar9;
        }
        FUN_002624c2(iVar1,uVar5);
      }
    }
  }
  return;
}


