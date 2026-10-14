/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025c4a8 FUN_0025c4a8 */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0025c4b6) */
/* WARNING: Removing unreachable block (ram,0x0025c4b6) */

uint FUN_0025c4a8(byte *param_1,int param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined2 uVar7;
  uint uVar8;
  
  switch(param_2) {
  case 0:
  case 10:
  case 0xb:
    *(undefined2 *)(param_3 + 0x1c) = 1;
    uVar6 = 0;
    break;
  case 1:
    bVar3 = *param_1;
    uVar6 = 1;
    *(int *)(param_3 + 0x14) = (int)((uint)bVar3 << 0x18) >> 0x1f;
    *(int *)(param_3 + 0x10) = (int)((uint)bVar3 << 0x18) >> 0x18;
    *(undefined2 *)(param_3 + 0x1c) = 4;
    break;
  case 2:
    uVar6 = 2;
    uVar8 = (char)*param_1 * 0x100 | (uint)param_1[1];
    *(uint *)(param_3 + 0x10) = uVar8;
    *(int *)(param_3 + 0x14) = (int)uVar8 >> 0x1f;
    *(undefined2 *)(param_3 + 0x1c) = 4;
    break;
  case 3:
    uVar6 = 3;
    iVar5 = (int)CONCAT12(*param_1,CONCAT11(param_1[1],param_1[2]));
    *(int *)(param_3 + 0x10) = iVar5;
    *(int *)(param_3 + 0x14) = iVar5 >> 0x1f;
    *(undefined2 *)(param_3 + 0x1c) = 4;
    break;
  case 4:
    bVar3 = *param_1;
    bVar4 = param_1[1];
    uVar6 = 4;
    bVar1 = param_1[3];
    bVar2 = param_1[2];
    *(undefined2 *)(param_3 + 0x1c) = 4;
    uVar8 = (uint)bVar3 << 0x18 | (uint)bVar4 << 0x10 | (uint)bVar1 | (uint)bVar2 << 8;
    *(uint *)(param_3 + 0x10) = uVar8;
    *(int *)(param_3 + 0x14) = (int)uVar8 >> 0x1f;
    break;
  case 5:
    bVar4 = *param_1;
    bVar3 = param_1[1];
    *(uint *)(param_3 + 0x10) =
         (uint)param_1[3] << 0x10 | (uint)param_1[2] << 0x18 | (uint)param_1[5] |
         (uint)param_1[4] << 8;
    *(uint *)(param_3 + 0x14) = (char)bVar4 * 0x100 | (uint)bVar3;
    *(undefined2 *)(param_3 + 0x1c) = 4;
    uVar6 = 6;
    break;
  case 6:
  case 7:
    uVar6 = (uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 | (uint)param_1[7] |
            (uint)param_1[6] << 8;
    uVar8 = (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[3] |
            (uint)param_1[2] << 8;
    if (param_2 == 6) {
      *(uint *)(param_3 + 0x10) = uVar6;
      *(uint *)(param_3 + 0x14) = uVar8;
      uVar7 = 4;
    }
    else {
      *(uint *)(param_3 + 8) = uVar6;
      *(uint *)(param_3 + 0xc) = uVar8;
      iVar5 = FUN_0025b12a(uVar6,uVar8,uVar6,uVar8,param_4);
      uVar7 = 8;
      if (iVar5 != 0) {
        uVar7 = 1;
      }
    }
    *(undefined2 *)(param_3 + 0x1c) = uVar7;
    uVar6 = 8;
    break;
  case 8:
  case 9:
    uVar6 = 0;
    *(int *)(param_3 + 0x10) = param_2 + -8;
    *(undefined4 *)(param_3 + 0x14) = 0;
    uVar7 = 4;
    goto LAB_0025c5de;
  default:
    uVar6 = param_2 - 0xcU >> 1;
    *(byte **)(param_3 + 4) = param_1;
    *(uint *)(param_3 + 0x18) = uVar6;
    *(undefined4 *)(param_3 + 0x20) = 0;
    if (param_2 << 0x1f < 0) {
      uVar7 = (undefined2)DAT_0025c5e4;
    }
    else {
      uVar7 = (undefined2)DAT_0025c5e8;
    }
LAB_0025c5de:
    *(undefined2 *)(param_3 + 0x1c) = uVar7;
  }
  return uVar6;
}


