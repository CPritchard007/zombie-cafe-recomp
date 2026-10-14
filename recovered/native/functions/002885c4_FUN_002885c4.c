/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002885c4 FUN_002885c4 */

void FUN_002885c4(int *param_1,undefined4 param_2,int param_3,int param_4,undefined1 param_5,
                 undefined4 param_6,int param_7,undefined4 param_8,int param_9,int param_10)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  int local_48;
  int local_40;
  undefined4 local_2c;
  int *local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  
  iVar9 = *param_1;
  if (param_9 == 0) {
    local_48 = FUN_00268f60(param_1,param_2,param_3,&local_2c);
    if (-1 < local_48) goto LAB_002885fa;
  }
  else if (*(int *)(param_3 + 4) == 0) {
    local_48 = 1;
    local_2c = param_2;
LAB_002885fa:
    if ((param_7 != 0) && (*(char *)(iVar9 + 0x36) == '\0')) {
      if ((local_48 != 1) && (*(char *)(iVar9 + 0x7d) != '\0')) {
        FUN_0025fbda(iVar9,*(undefined4 *)(param_7 + 8));
        *(undefined4 *)(param_7 + 8) = 0;
      }
      iVar5 = FUN_00288584(param_1,param_7);
      if ((((*(char *)(iVar9 + 0x7d) == '\0') && (iVar5 != 0)) && (*(int *)(param_3 + 4) == 0)) &&
         (*(int *)(iVar5 + 0x44) == *(int *)(*(int *)(iVar9 + 0x10) + 0x1c))) {
        local_48 = 1;
      }
      if (*(char *)(iVar9 + 0x36) == '\0') {
        if (local_48 != 1) {
          local_24 = *(undefined4 *)(local_48 * 0x10 + *(int *)(*param_1 + 0x10));
          local_1c = local_2c;
          local_20 = DAT_002888b4 + 0x288682;
          local_28 = param_1;
          iVar5 = FUN_0026a3dc(&local_28,param_7);
          if (iVar5 != 0) goto LAB_00288878;
        }
        puVar1 = (undefined4 *)FUN_00288584(param_1,param_7);
        if (puVar1 != (undefined4 *)0x0) {
          piVar7 = (int *)(*(byte *)((int)puVar1 + 0x22) & 0x10);
          if ((*(byte *)((int)puVar1 + 0x22) & 0x10) == 0) {
            piVar2 = (int *)FUN_0025f2ac(iVar9,local_2c);
            if (piVar2 == (int *)0x0) {
              piVar7 = (int *)0x0;
            }
            else {
              iVar5 = FUN_00268fd4(param_1,piVar2);
              if (iVar5 == 0) {
                uVar3 = FUN_0025b154(piVar2);
                iVar5 = FUN_0025bb3c(*(int *)(*(int *)(iVar9 + 0x10) + local_48 * 0x10 + 0xc) + 0x28
                                     ,piVar2,uVar3);
                if (iVar5 == 0) {
                  iVar5 = sqlite3_strnicmp(*puVar1,DAT_002888c0 + 0x288736,7);
                  if (iVar5 == 0) {
                    FUN_00268e48(param_1,DAT_002888c4 + 0x288744);
                    param_1[0x11] = param_1[0x11] + 1;
                  }
                  else if ((param_4 == 0x30) || (puVar1[7] == 0)) {
                    if ((param_4 == 0x30) && (puVar1[7] == 0)) {
                      FUN_00268e48(param_1,DAT_002888d4 + 0x288798,param_7);
                      piVar7 = (int *)0x0;
                    }
                    else {
                      iVar5 = FUN_0025d12c(iVar9,puVar1[0x11]);
                      uVar8 = *(undefined4 *)(iVar5 * 0x10 + *(int *)(iVar9 + 0x10));
                      uVar3 = uVar8;
                      if (param_9 != 0) {
                        uVar3 = *(undefined4 *)(*(int *)(iVar9 + 0x10) + 0x10);
                      }
                      if ((iVar5 == 1) || (uVar6 = 7, param_9 != 0)) {
                        uVar6 = 5;
                      }
                      piVar7 = (int *)0x0;
                      iVar4 = FUN_00268e90(param_1,uVar6,piVar2,*puVar1,uVar3);
                      if (iVar4 == 0) {
                        if (iVar5 == 1) {
                          iVar5 = DAT_002888d8 + 0x2887ee;
                        }
                        else {
                          iVar5 = DAT_002888dc + 0x2887f4;
                        }
                        iVar5 = FUN_00268e90(param_1,0x12,iVar5,0,uVar8);
                        piVar7 = (int *)0x0;
                        if (iVar5 == 0) {
                          local_40 = param_4;
                          if (param_4 == 0x30) {
                            local_40 = 0x22;
                          }
                          piVar7 = (int *)FUN_0025f04c(iVar9,0x24);
                          if (piVar7 != (int *)0x0) {
                            *piVar7 = (int)piVar2;
                            iVar5 = FUN_0025f25a(iVar9,*(undefined4 *)(param_7 + 0xc));
                            piVar7[1] = iVar5;
                            piVar2 = (int *)0x0;
                            piVar7[5] = *(int *)(*(int *)(iVar9 + 0x10) + local_48 * 0x10 + 0xc);
                            piVar7[6] = puVar1[0x11];
                            *(undefined1 *)(piVar7 + 2) = param_5;
                            *(char *)((int)piVar7 + 9) = '\x02' - (local_40 == 0x22);
                            iVar5 = FUN_002606fc(iVar9,param_8,1);
                            piVar7[3] = iVar5;
                            iVar5 = FUN_002603c0(iVar9,param_6);
                            piVar7[4] = iVar5;
                            param_1[0x80] = (int)piVar7;
                          }
                        }
                      }
                    }
                  }
                  else {
                    if (param_4 == 0x22) {
                      iVar5 = DAT_002888c8 + 0x288766;
                    }
                    else {
                      iVar5 = DAT_002888cc + 0x28876c;
                    }
                    piVar7 = (int *)0x0;
                    FUN_00268e48(param_1,DAT_002888d0 + 0x288774,iVar5,param_7,0);
                  }
                }
                else if (param_10 == 0) {
                  FUN_00268e48(param_1,DAT_002888bc + 0x28871c,local_2c);
                }
                else {
                  FUN_00275ec4(param_1,local_48);
                }
              }
            }
            goto LAB_0028887a;
          }
          iVar5 = DAT_002888b8 + 0x2886c4;
          goto LAB_002886c2;
        }
        if (*(char *)(iVar9 + 0x7c) == '\x01') {
          *(undefined1 *)(iVar9 + 0x7e) = 1;
        }
      }
    }
  }
  else {
    iVar5 = DAT_002888b0 + 0x2885e2;
LAB_002886c2:
    FUN_00268e48(param_1,iVar5);
  }
LAB_00288878:
  piVar7 = (int *)0x0;
  piVar2 = piVar7;
LAB_0028887a:
  FUN_0025fbda(iVar9,piVar2);
  FUN_00260fde(iVar9,param_7);
  FUN_00260004(iVar9,param_6);
  FUN_002610aa(iVar9,param_8);
  if (param_1[0x80] == 0) {
    FUN_002614e4(iVar9,piVar7);
  }
  return;
}


