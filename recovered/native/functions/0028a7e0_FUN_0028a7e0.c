/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0028a7e0 FUN_0028a7e0 */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0028a9d2) */
/* WARNING (jumptable): Removing unreachable block (ram,0x0028a868) */
/* WARNING: Removing unreachable block (ram,0x0028a9d2) */
/* WARNING: Removing unreachable block (ram,0x0028a868) */

void FUN_0028a7e0(int *param_1,undefined4 *param_2,int param_3,int param_4,int *param_5,int param_6,
                 int param_7,uint param_8,undefined4 param_9,int *param_10)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  uint local_6c;
  int local_68;
  int local_64;
  int local_60;
  int *local_5c;
  int local_58;
  int local_40;
  int local_34 [6];
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  
  uVar6 = (uint)(param_7 != 0);
  local_40 = param_4;
  if ((uVar6 != 0) && (param_6 != 0)) {
    local_40 = param_6;
  }
  iVar1 = *param_1;
  uVar2 = FUN_002662b8(param_1);
  iVar7 = param_2[2];
  iVar9 = param_4 + 1;
  iVar14 = iVar9;
  for (local_6c = 0; (int)local_6c < iVar7; local_6c = local_6c + 1) {
    if (local_6c != param_2[1]) {
      iVar8 = local_6c * 0x18;
      uVar13 = (uint)*(byte *)(param_2[3] + iVar8 + 0x14);
      if (uVar13 != 0) {
        uVar11 = param_8;
        if ((param_8 != 99) || (uVar11 = uVar13, uVar13 != 99)) {
          if (uVar11 != 5) {
            switch(uVar11) {
            case 1:
            case 3:
              goto switchD_0028a868_caseD_1;
            case 2:
              goto switchD_0028a868_caseD_2;
            case 4:
              FUN_0026641e(uVar2,0x49,iVar14,param_9);
              goto LAB_0028a8d8;
            default:
switchD_0028a868_default:
              uVar3 = FUN_002665da(uVar2,0x4a,iVar14);
              FUN_002786f4(param_1,*(undefined4 *)(param_2[3] + iVar8 + 4),iVar14);
              FUN_002624c2(uVar2,uVar3);
              goto LAB_0028a8d8;
            }
          }
          if (*(int *)(param_2[3] + iVar8 + 4) != 0) goto switchD_0028a868_default;
        }
switchD_0028a868_caseD_2:
        FUN_0025cdea(param_1);
        uVar11 = 2;
switchD_0028a868_caseD_1:
        FUN_00266266(uVar2,5,0x13,uVar11,iVar14);
        uVar3 = FUN_0026877c(iVar1,DAT_0028ab8c + 0x28a892,*param_2,
                             *(undefined4 *)(param_2[3] + iVar8));
        FUN_00263832(uVar2,0xffffffff,uVar3,0xffffffff);
      }
    }
LAB_0028a8d8:
    iVar14 = iVar14 + 1;
  }
  piVar12 = (int *)param_2[0xb];
  if ((piVar12 != (int *)0x0) && (-1 < *(int *)(iVar1 + 0x18) << 0xd)) {
    param_1[0x16] = iVar9;
    local_6c = param_8;
    if (param_8 == 99) {
      local_6c = 2;
    }
    for (local_68 = 0; local_68 < *piVar12; local_68 = local_68 + 1) {
      uVar3 = FUN_00266020(uVar2);
      FUN_002788a0(param_1,*(undefined4 *)(piVar12[2] + local_68 * 0x14),uVar3,8);
      if (local_6c == 4) {
        FUN_0026641e(uVar2,1,0,param_9);
      }
      else {
        iVar14 = *(int *)(piVar12[2] + local_68 * 0x14 + 4);
        if (local_6c == 5) {
          local_6c = 2;
        }
        if (iVar14 != 0) {
          iVar14 = FUN_0026877c(iVar1,DAT_0028ab90 + 0x28a960);
        }
        FUN_002662fa(param_1,local_6c,iVar14,0xffffffff);
      }
      FUN_0025c384(uVar2,uVar3);
    }
  }
  if (param_6 == 0) {
    local_60 = 0;
    goto LAB_0028aa98;
  }
  uVar13 = param_8;
  if ((param_8 == 99) &&
     (uVar13 = (uint)*(byte *)((int)param_2 + 0x23), *(byte *)((int)param_2 + 0x23) == 99)) {
    uVar13 = 2;
  }
  local_6c = uVar6;
  if (uVar6 != 0) {
    local_6c = FUN_00266266(uVar2,0x4c,param_4,0,param_6);
  }
  uVar3 = FUN_00266266(uVar2,0x36,param_3,0,param_4);
  switch(uVar13) {
  case 4:
    FUN_0026641e(uVar2,1,0,param_9);
    local_60 = 0;
    break;
  case 5:
    if ((*(int *)(iVar1 + 0x18) << 6 < 0) &&
       (iVar14 = FUN_002648b0(param_1,param_2,0x6a,0,0), iVar14 != 0)) {
LAB_0028aa20:
      piVar12 = (int *)param_1[0x6c];
      if ((int *)param_1[0x6c] == (int *)0x0) {
        piVar12 = param_1;
      }
      *(undefined1 *)((int)piVar12 + 0x17) = 1;
      FUN_0028a308(param_1,param_2,param_3,param_4,0,iVar14,5);
    }
    else {
      iVar14 = FUN_00264918(param_1,param_2,0,0);
      if (iVar14 != 0) {
        iVar14 = 0;
        goto LAB_0028aa20;
      }
      local_60 = 1;
      if (param_2[4] == 0) break;
      piVar12 = (int *)param_1[0x6c];
      if ((int *)param_1[0x6c] == (int *)0x0) {
        piVar12 = param_1;
      }
      *(undefined1 *)((int)piVar12 + 0x17) = 1;
      FUN_002708b2(param_1,param_2,param_3,0);
    }
    local_60 = 1;
    break;
  default:
    uVar13 = 2;
  case 1:
  case 2:
  case 3:
    FUN_002662fa(param_1,uVar13,DAT_0028ab94 + 0x28a9e8,0xfffffffe);
    local_60 = 0;
  }
  FUN_002624c2(uVar2,uVar3);
  if (uVar6 != 0) {
    FUN_002624c2(uVar2,local_6c);
  }
LAB_0028aa98:
  iVar14 = param_2[4];
  local_58 = param_3 + 1;
  local_5c = param_5;
  do {
    if (iVar14 == 0) {
      if (param_10 != (int *)0x0) {
        *param_10 = local_60;
      }
      return;
    }
    if (*local_5c != 0) {
      iVar7 = FUN_00262834(param_1,*(int *)(iVar14 + 0x24) + 1);
      local_64 = iVar7;
      for (local_6c = 0; (int)local_6c < *(int *)(iVar14 + 0x24); local_6c = local_6c + 1) {
        iVar10 = *(int *)(local_6c * 4 + *(int *)(iVar14 + 4));
        iVar8 = param_4;
        if (iVar10 != param_2[1]) {
          iVar8 = iVar9 + iVar10;
        }
        FUN_0026641e(uVar2,0xf,iVar8,local_64);
        local_64 = local_64 + 1;
      }
      FUN_0026641e(uVar2,0xf,param_4,iVar7 + local_6c);
      FUN_00266266(uVar2,0x1f,iVar7,*(int *)(iVar14 + 0x24) + 1,*local_5c);
      uVar3 = FUN_0025ef9c(uVar2,iVar14);
      FUN_00263832(uVar2,0xffffffff,uVar3,0);
      FUN_0025cb14(param_1,iVar7,*(int *)(iVar14 + 0x24) + 1);
      local_6c = (uint)*(byte *)(iVar14 + 0x2c);
      if (local_6c == 0) {
        FUN_0025cbb8(param_1,iVar7,*(int *)(iVar14 + 0x24) + 1);
      }
      else {
        if (param_8 == 99) {
          if (local_6c == 99) {
            local_6c = 2;
          }
        }
        else {
          local_6c = param_8;
        }
        if (local_60 != 0) {
          if (local_6c == 4) {
            local_6c = 5;
          }
          else if (local_6c == 3) {
            local_6c = 2;
          }
        }
        uVar3 = FUN_002627dc(param_1);
        FUN_0026641e(uVar2,0xf,local_40,uVar3);
        uVar4 = FUN_002662da(uVar2,0x35,local_58,0,uVar3,iVar7,0xfffffff2);
        FUN_0025cbb8(param_1,iVar7,*(int *)(iVar14 + 0x24) + 1);
        if ((int)local_6c < 1) {
LAB_0028ac9a:
          piVar12 = (int *)param_1[0x6c];
          if ((int *)param_1[0x6c] == (int *)0x0) {
            piVar12 = param_1;
          }
          *(undefined1 *)((int)piVar12 + 0x17) = 1;
          uVar6 = *(uint *)(iVar1 + 0x18) & 0x2000000;
          if (uVar6 != 0) {
            uVar6 = FUN_002648b0(param_1,param_2,0x6a,0,0);
          }
          FUN_0028a308(param_1,param_2,param_3,uVar3,0,uVar6,5);
          local_60 = 1;
        }
        else if ((int)local_6c < 4) {
          local_34[5] = 200;
          local_1b = 1;
          local_1a = 0;
          local_1c = 0;
          local_34[1] = 0;
          local_34[2] = 0;
          local_34[3] = 0;
          local_34[4] = 0;
          if (*(int *)(iVar14 + 0x24) < 2) {
            iVar7 = DAT_0028ad18 + 0x28ac18;
          }
          else {
            iVar7 = DAT_0028ad14 + 0x28ac12;
          }
          local_34[0] = iVar1;
          for (local_68 = 0; local_68 < *(int *)(iVar14 + 0x24); local_68 = local_68 + 1) {
            uVar5 = *(undefined4 *)
                     (*(int *)(local_68 * 4 + *(int *)(iVar14 + 4)) * 0x18 + param_2[3]);
            FUN_002674ce(local_34,iVar7,0xffffffff);
            FUN_002674ce(local_34,uVar5,0xffffffff);
            iVar7 = DAT_0028ad1c + 0x28ac50;
          }
          if (*(int *)(iVar14 + 0x24) < 2) {
            iVar7 = DAT_0028ad24 + 0x28ac66;
          }
          else {
            iVar7 = DAT_0028ad20 + 0x28ac60;
          }
          FUN_002674ce(local_34,iVar7,0xffffffff);
          uVar5 = FUN_002684c4(local_34);
          FUN_002662fa(param_1,local_6c,uVar5,0);
          FUN_0025fbda(local_34[0],uVar5);
        }
        else {
          if (local_6c != 4) goto LAB_0028ac9a;
          FUN_0026641e(uVar2,1,0,param_9);
        }
        FUN_002624c2(uVar2,uVar4);
        FUN_002627fe(param_1,uVar3);
      }
    }
    iVar14 = *(int *)(iVar14 + 0x14);
    local_5c = local_5c + 1;
    local_58 = local_58 + 1;
  } while( true );
}


