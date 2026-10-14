/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d6a98 png_ascii_from_fp */

void png_ascii_from_fp(undefined4 param_1,byte *param_2,uint param_3,undefined4 param_4,int *param_5
                      ,int param_6,uint param_7)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  double *__iptr;
  int iVar4;
  char extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  int *piVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined4 in_stack_ffffffa0;
  undefined4 in_stack_ffffffa4;
  undefined8 uVar11;
  undefined4 uVar12;
  int local_58;
  uint local_54;
  int local_50;
  byte *local_48;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  char local_28 [12];
  int local_1c;
  
  piVar5 = *(int **)(DAT_002d6dd0 + 0x2d6aa4);
  local_1c = *piVar5;
  if (param_7 == 0) {
    param_7 = 0xf;
  }
  else if (0x10 < param_7) {
    param_7 = 0x10;
  }
  if (param_7 + 5 <= param_3) {
    iVar3 = __aeabi_dcmplt(param_5,param_6,DAT_002d6d98,DAT_002d6d9c);
    local_48 = param_2;
    local_54 = param_3;
    if (iVar3 != 0) {
      local_54 = param_3 - 1;
      *param_2 = 0x2d;
      param_6 = param_6 + -0x80000000;
      local_48 = param_2 + 1;
    }
    iVar3 = __aeabi_dcmpge(param_5,param_6,DAT_002d6da0,DAT_002d6da4);
    if (iVar3 == 0) {
      *local_48 = 0x30;
      local_48[1] = 0;
      goto LAB_002d6e5a;
    }
    iVar3 = __aeabi_dcmple(param_5,param_6,DAT_002d6da8,DAT_002d6dac);
    if (iVar3 == 0) {
      *local_48 = 0x69;
      local_48[1] = 0x6e;
      local_48[2] = 0x66;
      local_48[3] = 0;
      goto LAB_002d6e5a;
    }
    frexp((double)CONCAT44(in_stack_ffffffa4,in_stack_ffffffa0),param_5);
    uVar7 = (int)(local_34 * 0x4d) >> 8;
    uVar10 = FUN_002d5630(uVar7);
    do {
      local_34 = uVar7;
      iVar3 = __aeabi_dcmplt((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_002d6da0,DAT_002d6da4)
      ;
      if ((iVar3 == 0) &&
         (iVar3 = __aeabi_dcmplt((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),param_5,param_6),
         uVar11 = uVar10, iVar3 == 0)) break;
      uVar7 = local_34 + 1;
      uVar11 = uVar10;
      uVar10 = FUN_002d5630(uVar7);
      iVar3 = __aeabi_dcmple((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_002d6da8,DAT_002d6dac)
      ;
    } while (iVar3 != 0);
    uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
    uVar10 = __divdf3(param_5,param_6,(int)uVar11,uVar12);
    while( true ) {
      uVar8 = (undefined4)((ulonglong)uVar10 >> 0x20);
      uVar7 = local_34 + 1;
      iVar3 = __aeabi_dcmpge((int)uVar10,uVar8,DAT_002d6db8,DAT_002d6dbc);
      if (iVar3 == 0) break;
      uVar10 = __divdf3((int)uVar10,uVar8,DAT_002d6db0,DAT_002d6db4);
      local_34 = uVar7;
    }
    local_58 = 0;
    if (local_34 + 2 < 2) {
      local_58 = -local_34;
      local_34 = 0;
    }
    iVar3 = 0;
    local_50 = local_58;
    do {
      uVar10 = __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_002d6db0,DAT_002d6db4);
      __iptr = (double *)uVar10;
      if (((iVar3 + local_58) - local_50) + 1 < (int)param_7) {
        modf((double)CONCAT44(uVar12,iVar3),__iptr);
        uVar8 = extraout_r1_00;
      }
      else {
        local_30 = __adddf3(__iptr,(int)((ulonglong)uVar10 >> 0x20),DAT_002d6dc0,DAT_002d6dc4);
        floor((double)CONCAT44(uVar12,iVar3));
        uVar10 = CONCAT44(extraout_r1_01,local_30);
        local_2c = extraout_r1_01;
        iVar4 = __aeabi_dcmpgt();
        __iptr = DAT_002d6d98;
        uVar8 = DAT_002d6d9c;
        if (iVar4 != 0) {
          if (local_58 == 0) {
            while( true ) {
              uVar8 = (undefined4)((ulonglong)uVar10 >> 0x20);
              local_30 = (undefined4)uVar10;
              if ((iVar3 < 1) ||
                 (iVar4 = __aeabi_dcmpgt(local_30,uVar8,DAT_002d6dc8,DAT_002d6dcc), iVar4 == 0))
              break;
              pbVar6 = local_48 + -1;
              uVar7 = (uint)*pbVar6;
              if (local_34 == 0xffffffff) {
                if (uVar7 == 0x2e) {
                  uVar7 = (uint)local_48[-2];
                  local_54 = local_54 + 1;
                  local_34 = 1;
                  pbVar6 = local_48 + -2;
                }
              }
              else {
                local_34 = local_34 + 1;
              }
              local_48 = pbVar6;
              iVar3 = iVar3 + -1;
              uVar10 = __floatsidf(uVar7 - 0x2f);
            }
            local_2c = uVar8;
            iVar4 = __aeabi_dcmpgt(local_30,uVar8,DAT_002d6dc8,DAT_002d6dcc);
            __iptr = DAT_002d6d98;
            uVar8 = DAT_002d6d9c;
            if (iVar4 != 0) {
              if (local_34 == 0xffffffff) {
                local_48 = local_48 + -1;
                if (*local_48 == 0x2e) {
                  local_34 = 1;
                  local_54 = local_54 + 1;
                }
              }
              else {
                local_34 = local_34 + 1;
              }
              local_30 = DAT_002d6db8;
              local_2c = DAT_002d6dbc;
            }
          }
          else {
            local_30 = DAT_002d6db8;
            local_2c = DAT_002d6dbc;
            local_58 = local_58 + -1;
            if (iVar3 == 0) {
              local_50 = local_50 + -1;
            }
          }
        }
      }
      uVar1 = local_2c;
      uVar10 = CONCAT44(uVar8,__iptr);
      iVar4 = __aeabi_dcmpeq(local_30,local_2c,DAT_002d6d98,DAT_002d6d9c);
      if (iVar4 == 0) {
        local_50 = local_58 - local_50;
        for (; local_58 != 0; local_58 = local_58 + -1) {
          if (local_34 != 0xffffffff) {
            if (local_34 == 0) {
              *local_48 = 0x2e;
              local_48 = local_48 + 1;
              local_54 = local_54 - 1;
            }
            local_34 = local_34 - 1;
          }
          *local_48 = 0x30;
          local_48 = local_48 + 1;
        }
        if (local_34 != 0xffffffff) {
          if (local_34 == 0) {
            *local_48 = 0x2e;
            local_48 = local_48 + 1;
            local_54 = local_54 - 1;
          }
          local_34 = local_34 - 1;
        }
        cVar2 = __fixdfsi(local_30,uVar1);
        iVar3 = iVar3 + local_50 + 1;
        *local_48 = cVar2 + 0x30;
        local_48 = local_48 + 1;
        local_50 = 0;
      }
      else {
        local_58 = local_58 + 1;
        local_50 = local_50 + (uint)(iVar3 == 0);
      }
    } while (((iVar3 + local_58) - local_50 < (int)param_7) &&
            (iVar4 = __aeabi_dcmpgt(__iptr,uVar8,DAT_002d6da0,DAT_002d6da4), iVar4 != 0));
    uVar7 = local_34;
    pbVar6 = local_48;
    if (local_34 + 1 < 4) {
      while (uVar7 = uVar7 - 1, -1 < (int)uVar7) {
        *pbVar6 = 0x30;
        pbVar6 = pbVar6 + 1;
      }
      local_48[local_34 & (int)~local_34 >> 0x1f] = 0;
      goto LAB_002d6e5a;
    }
    *local_48 = 0x45;
    iVar4 = -1;
    if ((int)local_34 < 0) {
      local_48[1] = 0x2d;
      iVar4 = -2;
      local_48 = local_48 + 2;
      local_34 = -local_34;
    }
    else {
      local_48 = local_48 + 1;
    }
    uVar7 = 0;
    while (local_34 != 0) {
      __aeabi_uidivmod(local_34,10);
      local_28[uVar7] = extraout_r1 + '0';
      local_34 = __udivsi3(local_34,10);
      uVar7 = uVar7 + 1;
    }
    pbVar6 = local_48;
    uVar9 = uVar7;
    if ((int)uVar7 < (int)((local_54 - iVar3) + iVar4)) {
      for (; 0 < (int)uVar9; uVar9 = uVar9 - 1) {
        *pbVar6 = local_28[uVar9 - 1];
        pbVar6 = pbVar6 + 1;
      }
      local_48[uVar7 & (int)~uVar7 >> 0x1f] = 0;
      goto LAB_002d6e5a;
    }
  }
  png_error(param_1,DAT_002d6e6c + 0x2d6e58);
LAB_002d6e5a:
  if (local_1c == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


