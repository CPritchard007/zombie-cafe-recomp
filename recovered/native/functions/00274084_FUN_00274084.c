/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00274084 FUN_00274084 */

void FUN_00274084(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  uint local_4c;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  undefined1 auStack_2c [16];
  int local_1c;
  
  piVar5 = *(int **)(DAT_00274354 + 0x274090);
  local_1c = *piVar5;
  if ((*(char *)((int)param_1 + 0xe) != '\0') && (local_4c = param_1[10], local_4c != 0))
  goto LAB_002743f4;
  local_4c = 0;
  if ((param_1[0x2e] == 0) && (*(char *)((int)param_1 + 0xf) == '\0')) {
    local_4c = FUN_00261bae(param_1,1);
    uVar2 = local_4c;
    if (local_4c == 0) {
      if (*(byte *)(param_1 + 4) < 2) {
        local_3c = 1;
        iVar8 = *param_1;
        bVar10 = *(int *)param_1[0x10] == 0;
        if ((bVar10) &&
           (uVar2 = (**(code **)(iVar8 + 0x20))(iVar8,param_1[0x25],0,&local_3c), uVar2 != 0))
        goto LAB_002743e8;
        if (local_3c != 0) {
          local_38 = 0;
          uVar2 = (**(code **)(*(int *)param_1[0xf] + 0x24))((int *)param_1[0xf],&local_38);
          if (uVar2 != 0) goto LAB_002743e8;
          if (local_38 == 0) {
            uVar2 = FUN_0025bfc4(param_1,&local_34);
            if (uVar2 != 0) goto LAB_002743e8;
            if (local_34 == 0) {
              FUN_0025ad28();
              iVar9 = FUN_00261b80(param_1,2);
              if ((iVar9 == 0) &&
                 ((**(code **)(iVar8 + 0x1c))(iVar8,param_1[0x25]), (char)param_1[1] == '\0')) {
                FUN_0025bf70(param_1,1);
              }
              FUN_0025ad3c();
            }
            else {
              if (bVar10) {
                local_30 = DAT_00274358;
                uVar1 = (**(code **)(iVar8 + 0x18))
                                  (iVar8,param_1[0x25],param_1[0x10],DAT_00274358,&local_30);
                if (uVar1 != 0) {
                  uVar2 = uVar1;
                  if (uVar1 == 0xe) goto LAB_002741cc;
                  goto LAB_002743e8;
                }
              }
              local_30 = local_30 & 0xffffff00;
              pcVar6 = *(code **)(*(int *)param_1[0x10] + 8);
              uVar1 = (*pcVar6)((int *)param_1[0x10],&local_30,1,pcVar6,0,0);
              if (uVar1 != DAT_0027435c) {
                uVar2 = uVar1;
              }
              if (bVar10) {
                FUN_0025acd0(param_1[0x10]);
              }
              if (uVar2 != 0) goto LAB_002743e8;
              if ((char)local_30 != '\0') goto LAB_002741cc;
            }
          }
        }
LAB_0027428c:
        if (((char)param_1[3] == '\0') &&
           ((param_1[0x16] != 0 ||
            ((*(int *)(param_1[0x2d] + 0x28) != 0 &&
             (iVar8 = (**(code **)(DAT_00274368 + 0x274322))(), 0 < iVar8)))))) {
          local_30 = 0;
          uVar2 = FUN_0025bfc4(param_1,&local_30);
          if (uVar2 != 0) goto LAB_002743e8;
          if (local_30 == 0) {
            memset(auStack_2c,0,0x10);
          }
          else {
            pcVar6 = *(code **)(*(int *)param_1[0xf] + 8);
            uVar2 = (*pcVar6)((int *)param_1[0xf],auStack_2c,0x10,pcVar6,0x18,0);
            if (uVar2 != 0) goto LAB_002743e8;
          }
          iVar8 = memcmp(param_1 + 0x19,auStack_2c,0x10);
          if (iVar8 != 0) {
            FUN_002619d4(param_1);
          }
        }
        if (((char)param_1[3] == '\0') &&
           (local_4c = FUN_0025bfc4(param_1,&local_30), uVar2 = local_30, local_4c == 0)) {
          iVar8 = *param_1;
          if (local_30 == 0) {
            local_4c = (**(code **)(iVar8 + 0x1c))(iVar8,param_1[0x2f],0);
            local_34 = uVar2;
          }
          else {
            local_4c = (**(code **)(iVar8 + 0x20))(iVar8,param_1[0x2f],0,&local_34);
          }
          if (local_4c == 0) {
            if (local_34 == 0) {
              if (*(char *)((int)param_1 + 5) == '\x05') {
                *(undefined1 *)((int)param_1 + 5) = 0;
              }
            }
            else {
              local_4c = FUN_002634a0(param_1,0);
            }
          }
        }
        goto LAB_0027437c;
      }
LAB_002741cc:
      uVar2 = FUN_00261b80(param_1,4);
      if (uVar2 != 0) goto LAB_002743e8;
      if (*(int *)param_1[0x10] == 0) {
        iVar8 = *param_1;
        uVar2 = (**(code **)(iVar8 + 0x20))(iVar8,param_1[0x25],0,&local_34);
        if ((((uVar2 == 0) && (local_34 != 0)) &&
            (local_30 = uVar2,
            uVar2 = (**(code **)(iVar8 + 0x18))
                              (iVar8,param_1[0x25],param_1[0x10],DAT_00274360,&local_30), uVar2 == 0
            )) && ((int)(local_30 << 0x1f) < 0)) {
          uVar2 = FUN_0026b474(DAT_00274364);
          FUN_0025acd0(param_1[0x10]);
        }
      }
      iVar8 = *(int *)param_1[0x10];
      if (iVar8 == 0) {
        if ((char)param_1[1] == '\0') {
          FUN_0025bf70(param_1,1);
        }
LAB_00274272:
        if (uVar2 == 0) goto LAB_0027428c;
      }
      else if (((*(char *)((int)param_1 + 7) != '\0') ||
               (uVar2 = (**(code **)(iVar8 + 0x14))((int *)param_1[0x10],2), uVar2 == 0)) &&
              (uVar2 = (**(code **)(*(int *)param_1[0x10] + 0x18))
                                 ((int *)param_1[0x10],param_1 + 0x14), uVar2 == 0)) {
        uVar2 = FUN_00273d54(param_1,1);
        *(undefined1 *)((int)param_1 + 0xf) = 0;
        goto LAB_00274272;
      }
      if (((uVar2 & 0xff) == 10) || ((uVar2 & 0xff) == 0xd)) {
        param_1[10] = uVar2;
        *(undefined1 *)((int)param_1 + 0xf) = 6;
      }
    }
  }
  else {
LAB_0027437c:
    iVar8 = DAT_00274408;
    if (param_1[0x2e] != 0) {
      iVar9 = 0;
      local_30 = 0;
      FUN_00261c6e();
      piVar7 = (int *)param_1[0x2e];
      do {
        iVar9 = iVar9 + 1;
        if (5 < iVar9) {
          if (100 < iVar9) {
            local_4c = 0xf;
            goto LAB_002743c8;
          }
          iVar4 = 1;
          if (9 < iVar9) {
            iVar4 = iVar8;
          }
          iVar3 = *piVar7;
          (**(code **)(iVar3 + 0x3c))(iVar3,iVar4);
        }
        local_4c = FUN_002716d8(piVar7,&local_30,0);
        iVar8 = iVar8 + 0xee;
      } while (local_4c == 0xffffffff);
      if ((local_4c != 0) || (local_30 != 0)) {
LAB_002743c8:
        FUN_002619d4(param_1);
      }
    }
    if ((local_4c == 0) && (*(char *)((int)param_1 + 0xf) == '\0')) {
      local_4c = FUN_0025bfc4(param_1,param_1 + 6);
    }
    uVar2 = local_4c;
    if (local_4c == 0) {
      *(undefined1 *)((int)param_1 + 0xf) = 1;
      goto LAB_002743f4;
    }
  }
LAB_002743e8:
  FUN_00261cb6(param_1);
  local_4c = uVar2;
LAB_002743f4:
  if (local_1c == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_4c);
}


