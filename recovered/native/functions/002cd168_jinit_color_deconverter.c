/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002cd168 jinit_color_deconverter */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x002cd1f4) */
/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x002cd2bc) */
/* WARNING (jumptable): Removing unreachable block (ram,0x002cd210) */
/* WARNING: Removing unreachable block (ram,0x002cd2bc) */
/* WARNING: Removing unreachable block (ram,0x002cd1f4) */
/* WARNING: Removing unreachable block (ram,0x002cd210) */

undefined8 jinit_color_deconverter(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *local_1c;
  
  piVar3 = (int *)(**(code **)param_1[1])(param_1,1,0x20);
  iVar9 = DAT_002cd430 + 0x2cd180;
  param_1[0x78] = (int)piVar3;
  *piVar3 = iVar9;
  iVar9 = param_1[9];
  if ((uint)param_1[10] < 8) {
    uVar6 = 1 << (param_1[10] & 0xffU);
    if ((uVar6 & 0xcc) == 0) {
      if ((uVar6 & 0x30) == 0) {
        if (-1 < (int)(uVar6 << 0x1e)) goto LAB_002cd1b4;
        if (iVar9 != 1) goto LAB_002cd1b8;
      }
      else if (iVar9 != 4) goto LAB_002cd1b8;
    }
    else if (iVar9 != 3) goto LAB_002cd1b8;
  }
  else {
LAB_002cd1b4:
    if (iVar9 < 1) {
LAB_002cd1b8:
      *(undefined4 *)(*param_1 + 0x14) = 0xb;
      (**(code **)*param_1)(param_1);
    }
  }
  if (((param_1[0x4c] != 0) && (param_1[10] != 2)) && (param_1[10] != 6)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x1c;
    (**(code **)*param_1)(param_1);
  }
  iVar9 = param_1[10];
  local_1c = param_2;
  switch(param_1[0xb]) {
  case 1:
    param_1[0x1e] = 1;
    switch(iVar9) {
    case 1:
    case 3:
    case 7:
      iVar9 = 0x58;
      piVar3[1] = DAT_002cd434 + 0x2cd22c;
      for (iVar5 = 1; iVar5 < param_1[9]; iVar5 = iVar5 + 1) {
        *(undefined4 *)(param_1[0x36] + iVar9 + 0x34) = 0;
        iVar9 = iVar9 + 0x58;
      }
      goto LAB_002cd41e;
    case 2:
      if (param_1[0x4c] == 0) {
        iVar9 = DAT_002cd438 + 0x2cd25c;
LAB_002cd260:
        piVar3[1] = iVar9;
      }
      else {
        if (param_1[0x4c] == 1) {
          iVar9 = DAT_002cd43c + 0x2cd262;
          goto LAB_002cd260;
        }
        *(undefined4 *)(*param_1 + 0x14) = 0x1c;
        (**(code **)*param_1)(param_1);
      }
      iVar9 = param_1[0x78];
      piVar3 = (int *)(**(code **)param_1[1])(param_1,1,0xc00);
      *(int **)(iVar9 + 0x1c) = piVar3;
      iVar9 = DAT_002cd440;
      iVar7 = 0;
      iVar5 = 0x8000;
      iVar8 = 0;
      do {
        *piVar3 = iVar8;
        iVar10 = DAT_002cd444;
        piVar3[0x100] = iVar7;
        *(int *)((int)(piVar3 + 1) + iVar10) = iVar5;
        iVar8 = iVar8 + DAT_002cd448;
        iVar7 = iVar7 + DAT_002cd44c;
        iVar5 = iVar5 + DAT_002cd450;
        piVar3 = piVar3 + 1;
      } while (iVar8 != iVar9);
      goto LAB_002cd41e;
    }
    break;
  case 2:
    param_1[0x1e] = 3;
    switch(iVar9) {
    case 1:
      iVar9 = DAT_002cd454 + 0x2cd2ce;
      break;
    case 2:
      if (param_1[0x4c] == 0) {
        iVar9 = DAT_002cd480 + 0x2cd3b6;
      }
      else {
        if (param_1[0x4c] != 1) goto switchD_002cd2bc_caseD_4;
        iVar9 = DAT_002cd484 + 0x2cd3bc;
      }
      break;
    case 3:
      iVar9 = DAT_002cd458 + 0x2cd2d4;
LAB_002cd3f0:
      piVar3[1] = iVar9;
      FUN_002ccd34(param_1);
      goto LAB_002cd41e;
    default:
      goto switchD_002cd2bc_caseD_4;
    case 7:
      piVar3[1] = DAT_002cd45c + 0x2cd2de;
      iVar11 = param_1[0x78];
      uVar4 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined4 *)(iVar11 + 8) = uVar4;
      uVar4 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined4 *)(iVar11 + 0xc) = uVar4;
      uVar4 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined4 *)(iVar11 + 0x10) = uVar4;
      uVar4 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined4 *)(iVar11 + 0x14) = uVar4;
      uVar4 = (**(code **)param_1[1])(param_1,1,0x500);
      iVar9 = DAT_002cd460;
      *(undefined4 *)(iVar11 + 0x18) = uVar4;
      iVar10 = 0;
      iVar5 = DAT_002cd468;
      iVar7 = DAT_002cd464;
      iVar8 = DAT_002cd46c;
      do {
        *(int *)(*(int *)(iVar11 + 8) + iVar10) = iVar8 >> 0x10;
        *(int *)(*(int *)(iVar11 + 0xc) + iVar10) = iVar7 >> 0x10;
        iVar1 = DAT_002cd470;
        *(int *)(*(int *)(iVar11 + 0x10) + iVar10) = iVar5;
        iVar2 = DAT_002cd474;
        iVar7 = iVar7 + iVar1;
        *(int *)(*(int *)(iVar11 + 0x14) + iVar10) = iVar9;
        iVar10 = iVar10 + 4;
        iVar9 = iVar9 + iVar2;
        iVar8 = iVar8 + DAT_002cd478;
        iVar5 = iVar5 + DAT_002cd47c;
      } while (iVar10 != 0x400);
      memset(*(void **)(iVar11 + 0x18),0,0x200);
      *(int *)(iVar11 + 0x18) = *(int *)(iVar11 + 0x18) + 0x200;
      iVar9 = 0;
      do {
        *(char *)(*(int *)(iVar11 + 0x18) + iVar9) = (char)iVar9;
        iVar9 = iVar9 + 1;
      } while (iVar9 != 0x100);
      iVar9 = 0x100;
      do {
        *(undefined1 *)(*(int *)(iVar11 + 0x18) + iVar9) = 0xff;
        iVar9 = iVar9 + 1;
        local_1c = param_1;
      } while (iVar9 != 0x300);
      goto LAB_002cd41e;
    }
LAB_002cd40c:
    piVar3[1] = iVar9;
    goto LAB_002cd41e;
  default:
    if (param_1[0xb] == iVar9) {
      param_1[0x1e] = param_1[9];
      iVar9 = DAT_002cd498 + 0x2cd40e;
      goto LAB_002cd40c;
    }
    break;
  case 4:
    param_1[0x1e] = 4;
    if (iVar9 == 4) {
      iVar9 = DAT_002cd494 + 0x2cd400;
      goto LAB_002cd40c;
    }
    if (iVar9 == 5) {
      iVar9 = DAT_002cd490 + 0x2cd3f2;
      goto LAB_002cd3f0;
    }
    break;
  case 6:
    param_1[0x1e] = 3;
    if (iVar9 == 6) {
      if (param_1[0x4c] == 0) {
        iVar9 = DAT_002cd488 + 0x2cd3da;
      }
      else {
        if (param_1[0x4c] != 1) break;
        iVar9 = DAT_002cd48c + 0x2cd3e0;
      }
      goto LAB_002cd40c;
    }
  }
switchD_002cd2bc_caseD_4:
  *(undefined4 *)(*param_1 + 0x14) = 0x1c;
  (**(code **)*param_1)(param_1);
LAB_002cd41e:
  if (param_1[0x15] == 0) {
    iVar9 = param_1[0x1e];
  }
  else {
    iVar9 = 1;
  }
  param_1[0x1f] = iVar9;
  return CONCAT44(local_1c,param_1);
}


