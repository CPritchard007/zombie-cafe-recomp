/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c5b98 jpeg_consume_input */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x002c5ba6) */
/* WARNING: Removing unreachable block (ram,0x002c5ba6) */

int jpeg_consume_input(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  
  switch(param_1[5]) {
  case 200:
    (**(code **)(param_1[0x73] + 4))(param_1);
    (**(code **)(param_1[6] + 8))(param_1);
    param_1[5] = 0xc9;
  case 0xc9:
    iVar7 = (**(code **)param_1[0x73])(param_1);
    if (iVar7 != 1) {
      return iVar7;
    }
    iVar7 = param_1[9];
    if (iVar7 == 3) {
      piVar4 = (int *)param_1[0x36];
      iVar7 = *piVar4;
      iVar3 = piVar4[0x16];
      iVar5 = piVar4[0x2c];
      if (((iVar3 != 2) || (iVar7 != 1)) || (iVar5 != 3)) {
        if (((iVar3 != 0x22) || (iVar7 != 1)) || (iVar5 != 0x23)) {
          if (((iVar3 == 0x47) && (iVar7 == 0x52)) && (iVar5 == 0x42)) {
LAB_002c5c62:
            iVar5 = 2;
          }
          else if (((iVar3 == 0x67) && (iVar7 == 0x72)) && (iVar5 == 0x62)) {
            iVar5 = 6;
          }
          else {
            if (param_1[0x47] == 0) {
              if (param_1[0x4a] == 0) {
                iVar1 = *param_1;
                *(int *)(iVar1 + 0x18) = iVar7;
                *(int *)(iVar1 + 0x1c) = iVar3;
                *(int *)(iVar1 + 0x20) = iVar5;
                *(undefined4 *)(*param_1 + 0x14) = 0x71;
                uVar2 = 1;
                pcVar6 = *(code **)(*param_1 + 4);
              }
              else {
                if ((char)param_1[0x4b] == '\0') goto LAB_002c5c62;
                if ((char)param_1[0x4b] == '\x01') goto LAB_002c5c96;
                *(undefined4 *)(*param_1 + 0x14) = 0x74;
                uVar2 = 0xffffffff;
                *(uint *)(*param_1 + 0x18) = (uint)*(byte *)(param_1 + 0x4b);
                pcVar6 = *(code **)(*param_1 + 4);
              }
              (*pcVar6)(param_1,uVar2);
            }
LAB_002c5c96:
            iVar5 = 3;
          }
        }
        else {
          iVar5 = 7;
        }
      }
      param_1[10] = iVar5;
      iVar7 = 2;
LAB_002c5cda:
      param_1[0xb] = iVar7;
    }
    else {
      if (iVar7 == 4) {
        iVar7 = 4;
        if ((param_1[0x4a] != 0) && ((char)param_1[0x4b] != '\0')) {
          if ((char)param_1[0x4b] != '\x02') {
            *(undefined4 *)(*param_1 + 0x14) = 0x74;
            *(uint *)(*param_1 + 0x18) = (uint)*(byte *)(param_1 + 0x4b);
            (**(code **)(*param_1 + 4))(param_1,0xffffffff);
          }
          iVar7 = 5;
        }
        param_1[10] = iVar7;
        iVar7 = 4;
        goto LAB_002c5cda;
      }
      if (iVar7 != 1) {
        iVar7 = 0;
        param_1[10] = 0;
        goto LAB_002c5cda;
      }
      param_1[10] = 1;
      param_1[0xb] = 1;
    }
    param_1[0x16] = 2;
    param_1[0xc] = param_1[0x6b];
    param_1[0xd] = param_1[0x6b];
    iVar7 = DAT_002c5d54;
    param_1[0xe] = DAT_002c5d50;
    param_1[0xf] = iVar7;
    param_1[0x13] = 1;
    param_1[0x14] = 1;
    param_1[0x17] = 1;
    param_1[0x18] = 0x100;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x15] = 0;
    param_1[0x22] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[5] = 0xca;
    iVar7 = 1;
    break;
  case 0xca:
    iVar7 = 1;
    break;
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd2:
    iVar7 = (**(code **)param_1[0x73])(param_1);
    break;
  default:
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    iVar7 = 0;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)(param_1);
  }
  return iVar7;
}


