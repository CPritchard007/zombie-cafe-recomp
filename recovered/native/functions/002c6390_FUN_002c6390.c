/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c6390 FUN_002c6390 */

int FUN_002c6390(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_28;
  int local_24;
  
  iVar3 = param_1[0x73];
  iVar6 = DAT_002c6694 + 0x2c63a4;
  local_24 = 2;
  if (*(int *)(iVar3 + 0x14) == 0) {
    do {
      while( true ) {
        iVar1 = (**(code **)(param_1[0x74] + 4))(param_1);
        iVar4 = DAT_002c6698;
        if (iVar1 != 1) {
          if (iVar1 != 2) {
            return iVar1;
          }
          *(undefined4 *)(iVar3 + 0x14) = 1;
          if (*(int *)(iVar3 + 0x18) != 0) {
            if (*(int *)(param_1[0x74] + 0x10) == 0) {
              return 2;
            }
            *(undefined4 *)(*param_1 + 0x14) = 0x3e;
            (**(code **)*param_1)(param_1);
            return 2;
          }
          if (param_1[0x26] <= param_1[0x24]) {
            return 2;
          }
          param_1[0x26] = param_1[0x24];
          return 2;
        }
        if (*(int *)(iVar3 + 0x18) == 0) break;
        if (*(int *)(iVar3 + 0x18) == 1) {
          if ((DAT_002c6698 < param_1[8]) || (DAT_002c6698 < param_1[7])) {
            *(undefined4 *)(*param_1 + 0x14) = 0x2a;
            *(int *)(*param_1 + 0x18) = iVar4;
            (**(code **)*param_1)(param_1);
          }
          if (4 < param_1[0x35] - 8U) {
            *(undefined4 *)(*param_1 + 0x14) = 0x10;
            *(int *)(*param_1 + 0x18) = param_1[0x35];
            (**(code **)*param_1)(param_1);
          }
          if (10 < param_1[9]) {
            *(undefined4 *)(*param_1 + 0x14) = 0x1b;
            *(int *)(*param_1 + 0x18) = param_1[9];
            *(undefined4 *)(*param_1 + 0x1c) = 10;
            (**(code **)*param_1)(param_1);
          }
          param_1[0x4f] = 1;
          param_1[0x50] = 1;
          piVar5 = (int *)(param_1[0x36] + 8);
          for (local_28 = 0; local_28 < param_1[9]; local_28 = local_28 + 1) {
            if (((3 < *piVar5 - 1U) || (piVar5[1] < 1)) || (4 < piVar5[1])) {
              *(undefined4 *)(*param_1 + 0x14) = 0x13;
              (**(code **)*param_1)(param_1);
            }
            iVar4 = *piVar5;
            if (*piVar5 < param_1[0x4f]) {
              iVar4 = param_1[0x4f];
            }
            param_1[0x4f] = iVar4;
            iVar4 = piVar5[1];
            if (piVar5[1] < param_1[0x50]) {
              iVar4 = param_1[0x50];
            }
            param_1[0x50] = iVar4;
            piVar5 = piVar5 + 0x16;
          }
          if ((param_1[0x37] != 0) || ((param_1[0x38] != 0 && (param_1[0x55] != 0)))) {
            iVar4 = 8;
            goto LAB_002c6564;
          }
          iVar4 = param_1[0x68];
          if (iVar4 == 0x3f) {
            iVar1 = 8;
LAB_002c655c:
            param_1[0x6b] = iVar1;
            iVar1 = DAT_002c66b4;
LAB_002c6522:
            param_1[0x6c] = *(int *)(iVar6 + iVar1);
            param_1[0x6d] = iVar4;
          }
          else {
            if (iVar4 < 0x40) {
              if (iVar4 == 0xf) {
                param_1[0x6b] = 4;
                iVar1 = DAT_002c66a4;
              }
              else if (iVar4 < 0x10) {
                if (iVar4 == 3) {
                  param_1[0x6b] = 2;
                  iVar1 = DAT_002c669c;
                }
                else {
                  if (iVar4 != 8) {
                    if (iVar4 == 0) {
                      iVar1 = 1;
                      goto LAB_002c655c;
                    }
                    goto LAB_002c6596;
                  }
                  param_1[0x6b] = 3;
                  iVar1 = DAT_002c66a0;
                }
              }
              else if (iVar4 == 0x23) {
                param_1[0x6b] = 6;
                iVar1 = DAT_002c66ac;
              }
              else if (iVar4 == 0x30) {
                param_1[0x6b] = 7;
                iVar1 = DAT_002c66b0;
              }
              else {
                if (iVar4 != 0x18) goto LAB_002c6596;
                param_1[0x6b] = 5;
                iVar1 = DAT_002c66a8;
              }
              goto LAB_002c6522;
            }
            if (iVar4 == 0x8f) {
              iVar4 = 0xc;
LAB_002c6564:
              param_1[0x6b] = iVar4;
              param_1[0x6c] = *(int *)(iVar6 + DAT_002c66b4);
              param_1[0x6d] = 0x3f;
            }
            else {
              if (iVar4 < 0x90) {
                if (iVar4 == 99) {
                  iVar4 = 10;
                }
                else if (iVar4 == 0x78) {
                  iVar4 = 0xb;
                }
                else {
                  if (iVar4 != 0x50) goto LAB_002c6596;
                  iVar4 = 9;
                }
                goto LAB_002c6564;
              }
              if (iVar4 == 0xc3) {
                iVar4 = 0xe;
                goto LAB_002c6564;
              }
              if (0xc3 < iVar4) {
                if (iVar4 == 0xe0) {
                  iVar4 = 0xf;
                }
                else {
                  if (iVar4 != 0xff) goto LAB_002c6596;
                  iVar4 = 0x10;
                }
                goto LAB_002c6564;
              }
              if (iVar4 == 0xa8) {
                iVar4 = 0xd;
                goto LAB_002c6564;
              }
LAB_002c6596:
              *(undefined4 *)(*param_1 + 0x14) = 0x11;
              *(int *)(*param_1 + 0x18) = param_1[0x67];
              *(int *)(*param_1 + 0x1c) = param_1[0x68];
              *(int *)(*param_1 + 0x20) = param_1[0x69];
              *(int *)(*param_1 + 0x24) = param_1[0x6a];
              (**(code **)*param_1)(param_1);
            }
          }
          param_1[0x51] = param_1[0x6b];
          param_1[0x52] = param_1[0x6b];
          iVar4 = param_1[0x36];
          local_28 = 0;
          while (local_28 < param_1[9]) {
            *(int *)(iVar4 + 0x24) = param_1[0x6b];
            *(int *)(iVar4 + 0x28) = param_1[0x6b];
            uVar2 = jdiv_round_up(param_1[7] * *(int *)(iVar4 + 8),param_1[0x4f] * param_1[0x6b]);
            *(undefined4 *)(iVar4 + 0x1c) = uVar2;
            uVar2 = jdiv_round_up(param_1[8] * *(int *)(iVar4 + 0xc),param_1[0x50] * param_1[0x6b]);
            *(undefined4 *)(iVar4 + 0x20) = uVar2;
            uVar2 = jdiv_round_up(param_1[7] * *(int *)(iVar4 + 8),param_1[0x4f]);
            *(undefined4 *)(iVar4 + 0x2c) = uVar2;
            uVar2 = jdiv_round_up(param_1[8] * *(int *)(iVar4 + 0xc),param_1[0x50]);
            *(undefined4 *)(iVar4 + 0x34) = 1;
            local_28 = local_28 + 1;
            *(undefined4 *)(iVar4 + 0x30) = uVar2;
            *(undefined4 *)(iVar4 + 0x50) = 0;
            iVar4 = iVar4 + 0x58;
          }
          iVar4 = jdiv_round_up(param_1[8],param_1[0x50] * param_1[0x6b]);
          param_1[0x53] = iVar4;
          if ((param_1[0x55] < param_1[9]) || (param_1[0x38] != 0)) {
            *(undefined4 *)(param_1[0x73] + 0x10) = 1;
          }
          else {
            *(undefined4 *)(param_1[0x73] + 0x10) = 0;
          }
        }
        if (param_1[0x55] != 0) {
          *(undefined4 *)(iVar3 + 0x18) = 0;
          return 1;
        }
        *(undefined4 *)(iVar3 + 0x18) = 2;
      }
      if (*(int *)(iVar3 + 0x10) == 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0x24;
        (**(code **)*param_1)(param_1);
      }
    } while (param_1[0x55] == 0);
    FUN_002c61d4(param_1);
    local_24 = 1;
  }
  return local_24;
}


