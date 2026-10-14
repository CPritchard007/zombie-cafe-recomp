/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002774b0 FUN_002774b0 */

int FUN_002774b0(undefined4 *param_1,char *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  int local_64;
  int local_5c;
  undefined4 *local_58;
  char local_41;
  undefined4 local_40;
  undefined1 auStack_3c [6];
  undefined2 local_36;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  
  iVar1 = FUN_002662b8();
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  else {
    param_1[0x17] = param_1[0x17] + 1;
    if ((int)((uint)*(ushort *)(param_2 + 2) << 0x1a) < 0) {
      local_64 = -1;
    }
    else {
      local_64 = FUN_002665e6(param_1);
    }
    if (*(char *)(param_1 + 0x75) == '\x02') {
      if (local_64 < 0) {
        iVar7 = DAT_002777b0 + 0x277502;
      }
      else {
        iVar7 = DAT_002777ac + 0x2774fc;
      }
      if (*param_2 == 'H') {
        iVar9 = DAT_002777b4 + 0x27750c;
      }
      else {
        iVar9 = DAT_002777b8 + 0x277512;
      }
      uVar2 = FUN_0026877c(*param_1,DAT_002777bc + 0x27751c,iVar7,iVar9,param_1[0x7a]);
      FUN_002662da(iVar1,0x96,param_1[0x79],0,0,uVar2,0xffffffff);
    }
    if (*param_2 == 'H') {
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (param_3 != 0) {
        FUN_0026641e(iVar1,10,0);
      }
      local_41 = FUN_0025ccc4(uVar2);
      iVar7 = param_1[0x12];
      *(int *)(param_2 + 0x18) = iVar7;
      param_1[0x12] = iVar7 + 1;
      uVar2 = FUN_0026641e(iVar1,0x2a,*(undefined4 *)(param_2 + 0x18),param_4 == 0);
      if (param_3 == 0) {
        FUN_0025c3b8(iVar1,8);
      }
      memset(auStack_3c,0,0x10);
      local_36 = 1;
      if ((int)((uint)*(ushort *)(param_2 + 2) << 0x14) < 0) {
        local_28 = *(int *)(param_2 + 0x18);
        local_2c._0_2_ = CONCAT11(local_41,7);
        local_24 = 0;
        local_20 = 0;
        *(undefined4 *)(*(int *)(param_2 + 0x10) + 8) = 0;
        iVar7 = FUN_00276118(param_1,*(undefined4 *)(param_2 + 0x10));
        if (iVar7 != 0) {
          return 0;
        }
        piVar10 = (int *)**(undefined4 **)(param_2 + 0x10);
        if ((piVar10 != (int *)0x0) && (0 < *piVar10)) {
          local_30 = FUN_0026d3c4(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)piVar10[2]);
        }
      }
      else {
        piVar10 = *(int **)(param_2 + 0x10);
        if (piVar10 != (int *)0x0) {
          if (local_41 == '\0') {
            local_41 = 'b';
          }
          local_30 = FUN_0026cf38(param_1,*(undefined4 *)(param_2 + 8));
          uVar3 = FUN_002627dc(param_1);
          uVar4 = FUN_002627dc(param_1);
          FUN_0026641e(iVar1,10,0,uVar4);
          local_58 = (undefined4 *)piVar10[2];
          iVar7 = DAT_002777c0 + 0x277638;
          for (local_5c = *piVar10; 0 < local_5c; local_5c = local_5c + -1) {
            uVar5 = *local_58;
            if (-1 < local_64) {
              local_1c = 1;
              local_28 = DAT_002777c4 + 0x27765c;
              local_2c = iVar7;
              FUN_0025c882(&local_2c,uVar5);
              if (local_1c == 0) {
                FUN_00263806(iVar1,local_64);
                local_64 = -1;
              }
            }
            if ((param_4 == 0) || (iVar9 = FUN_00262644(uVar5,&local_40), iVar9 == 0)) {
              uVar5 = FUN_00277a30(param_1,uVar5,uVar3);
              if (param_4 != 0) {
                FUN_0026641e(iVar1,0x15,uVar5,*(int *)(iVar1 + 0x1c) + 2);
                uVar8 = *(undefined4 *)(param_2 + 0x18);
                uVar6 = 0x39;
                goto LAB_002776bc;
              }
              FUN_002662da(iVar1,0x1f,uVar5,1,uVar4,&local_41,1);
              FUN_0025cb14(param_1,uVar5,1);
              FUN_0026641e(iVar1,0x61,*(undefined4 *)(param_2 + 0x18),uVar4);
            }
            else {
              uVar8 = *(undefined4 *)(param_2 + 0x18);
              uVar6 = 0x3a;
              uVar5 = local_40;
LAB_002776bc:
              FUN_00266266(iVar1,uVar6,uVar8,uVar4,uVar5);
            }
            local_58 = local_58 + 5;
          }
          FUN_002627fe(param_1,uVar3);
          FUN_002627fe(param_1,uVar4);
        }
      }
      iVar7 = 0;
      if (param_4 == 0) {
        FUN_00263832(iVar1,uVar2,auStack_3c,0xfffffffa);
      }
    }
    else {
      local_28 = param_1[0x13] + 1;
      iVar7 = *(int *)(param_2 + 0x10);
      param_1[0x13] = local_28;
      local_2c._1_3_ = (uint3)((uint)local_2c >> 8) & 0xffff00;
      local_24 = 0;
      local_20 = 0;
      if (*param_2 == 't') {
        local_2c = CONCAT31(local_2c._1_3_,6);
        uVar2 = 10;
      }
      else {
        local_2c = CONCAT31(local_2c._1_3_,3);
        uVar2 = 7;
      }
      FUN_0026641e(iVar1,uVar2);
      FUN_002610aa(*param_1,*(undefined4 *)(iVar7 + 0x48));
      uVar2 = FUN_00269118(param_1,0x81,0,0,DAT_002777c8 + 0x277792);
      *(undefined4 *)(iVar7 + 0x48) = uVar2;
      *(undefined4 *)(iVar7 + 8) = 0;
      iVar9 = FUN_00276118(param_1,iVar7,&local_2c);
      iVar7 = local_28;
      if (iVar9 != 0) {
        return 0;
      }
    }
    if (-1 < local_64) {
      FUN_002624c2(iVar1,local_64);
    }
    FUN_002644ac(param_1);
  }
  return iVar7;
}


