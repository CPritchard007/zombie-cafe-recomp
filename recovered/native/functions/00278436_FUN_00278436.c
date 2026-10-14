/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00278436 FUN_00278436 */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00278518) */
/* WARNING: Removing unreachable block (ram,0x00278518) */

void FUN_00278436(int param_1,int param_2,int *param_3,undefined4 param_4,int param_5,int param_6,
                 int param_7,char *param_8,undefined4 param_9,undefined4 param_10)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int local_40;
  
  cVar1 = *param_8;
  iVar5 = *(int *)(param_8 + 4);
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    return;
  }
  bVar9 = param_6 == 0;
  if ((param_7 < 0) && (bVar9)) {
    FUN_002665fc(iVar7,param_2,param_9);
  }
  local_40 = param_5;
  if (param_5 < 1) {
    local_40 = *param_3;
  }
  if (*(int *)(param_8 + 8) == 0) {
    *(int *)(param_8 + 8) = *(int *)(param_1 + 0x4c) + 1;
    *(int *)(param_8 + 0xc) = local_40;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + local_40;
  }
  iVar8 = *(int *)(param_8 + 8);
  if (param_5 < 1) {
    if (cVar1 != '\x03') {
      FUN_0025cb7c(param_1);
      FUN_00278300(param_1,param_3,iVar8,cVar1 == '\x05');
    }
  }
  else {
    iVar6 = 0;
    do {
      FUN_00266266(iVar7,0x1d,param_4,iVar6,iVar6 + iVar8);
      iVar6 = iVar6 + 1;
    } while (iVar6 != param_5);
  }
  if ((-1 < param_7) && (FUN_00266b9a(param_1,param_7,param_9,local_40,iVar8), bVar9)) {
    FUN_002665fc(iVar7,param_2,param_9);
  }
  switch(cVar1) {
  case '\x01':
    uVar4 = FUN_002627dc(param_1);
    FUN_00266266(iVar7,0x1f,iVar8,local_40,uVar4);
    FUN_0026641e(iVar7,0x61,iVar5,uVar4);
    goto LAB_002785ba;
  case '\x02':
    FUN_00266266(iVar7,0x62,iVar5,iVar8,local_40);
    break;
  case '\x03':
    FUN_0026641e(iVar7,7,1,iVar5);
    break;
  case '\x05':
  case '\n':
    if (param_6 != 0) {
      uVar4 = FUN_002627dc(param_1);
      FUN_00266266(iVar7,0x1f,iVar8,local_40,uVar4);
      FUN_00278348(param_1,param_6,param_2,uVar4);
      goto LAB_002785ba;
    }
    if (cVar1 == '\n') {
      FUN_002665da(iVar7,4,*(undefined4 *)(param_8 + 4));
      goto LAB_002786a6;
    }
    FUN_0026641e(iVar7,0x10,iVar8,local_40);
    FUN_0025cb14(param_1,iVar8,local_40);
    break;
  case '\x06':
    if (param_6 == 0) {
      if (iVar8 != iVar5) {
        FUN_00266966(param_1,iVar8,iVar5,1);
        goto LAB_002786a6;
      }
    }
    else {
LAB_00278630:
      FUN_00278348(param_1,param_6,param_2,iVar8);
    }
    break;
  case '\a':
    uVar2 = FUN_0025cd0e(*(undefined4 *)param_3[2],param_8[1]);
    *(undefined1 *)(param_2 + 5) = uVar2;
    if (param_6 != 0) goto LAB_00278630;
    uVar4 = FUN_002627dc(param_1,0);
    FUN_002662da(iVar7,0x1f,iVar8,1,uVar4,param_2 + 5,1);
    FUN_0025cb14(param_1,iVar8,1);
    FUN_0026641e(iVar7,0x61,iVar5,uVar4);
    FUN_002627fe(param_1,uVar4);
    goto LAB_002786a6;
  case '\b':
  case '\t':
    uVar4 = FUN_002627dc(param_1);
    FUN_00266266(iVar7,0x1f,iVar8,local_40,uVar4);
    if (param_6 == 0) {
      uVar3 = FUN_002627dc(param_1);
      FUN_0026641e(iVar7,0x38,iVar5,uVar3);
      FUN_00266266(iVar7,0x39,iVar5,uVar4,uVar3);
      FUN_0025c3b8(iVar7,8);
      FUN_002627fe(param_1,uVar3);
    }
    else {
      FUN_00278348(param_1,param_6,param_2,uVar4);
    }
LAB_002785ba:
    FUN_002627fe(param_1,uVar4);
  }
  if (bVar9) {
LAB_002786a6:
    if (*(int *)(param_2 + 8) != 0) {
      FUN_00266266(iVar7,0x7a,*(int *)(param_2 + 8),param_10,0xffffffff);
    }
  }
  return;
}


