/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026699e FUN_0026699e */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00266a64) */
/* WARNING: Removing unreachable block (ram,0x00266a64) */

undefined4
FUN_0026699e(int *param_1,int *param_2,int param_3,undefined1 *param_4,undefined4 param_5,
            int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_3c;
  int local_38;
  
  iVar8 = param_1[2];
  uVar5 = *(undefined4 *)(iVar8 + 0x1c);
  uVar2 = FUN_00266020(iVar8);
  if (param_6 != 0) {
    uVar3 = FUN_002665da(iVar8,0x1c);
    iVar4 = FUN_002662da(iVar8,0x18,*(undefined4 *)(param_3 + 8),param_6 + 1,
                         *(undefined4 *)(param_3 + 0xc),param_7,param_8);
    FUN_00266266(iVar8,0x19,iVar4 + 2,uVar2,iVar4 + 2);
    FUN_002624c2(iVar8,uVar3);
    iVar4 = *(int *)(param_3 + 8);
    iVar6 = *(int *)(param_3 + 0xc);
    if (iVar4 != param_6 + 1) {
      local_38 = param_6;
      for (iVar7 = 0; local_38 = local_38 + 1, iVar7 < iVar6; iVar7 = iVar7 + 1) {
        FUN_0026641e(param_1[2],0xe,iVar7 + iVar4,local_38);
      }
    }
    FUN_0026641e(iVar8,7,1,param_6);
  }
  if (*(char *)(*param_1 + 0x36) != '\0') {
    return 0;
  }
  FUN_002665fc(iVar8,param_2,uVar2);
  switch(*param_4) {
  case 6:
    if (*(int *)(param_3 + 8) != *(int *)(param_4 + 4)) {
      FUN_00266966(param_1,*(int *)(param_3 + 8),*(int *)(param_4 + 4),1);
    }
    break;
  case 7:
    uVar1 = FUN_0025cd0e(**(undefined4 **)(*param_2 + 8),param_4[1]);
    *(undefined1 *)((int)param_2 + 5) = uVar1;
    local_3c = FUN_002627dc(param_1);
    FUN_002662da(iVar8,0x1f,*(undefined4 *)(param_3 + 8),1,local_3c,(int)param_2 + 5,1);
    FUN_0025cb14(param_1,*(undefined4 *)(param_3 + 8),1);
    FUN_0026641e(iVar8,0x61,*(undefined4 *)(param_4 + 4),local_3c);
    goto LAB_00266b02;
  case 8:
  case 9:
    local_3c = FUN_002627dc(param_1);
    uVar3 = FUN_002627dc(param_1);
    FUN_00266266(iVar8,0x1f,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc),local_3c);
    FUN_0026641e(iVar8,0x38,*(undefined4 *)(param_4 + 4),uVar3);
    FUN_00266266(iVar8,0x39,*(undefined4 *)(param_4 + 4),local_3c,uVar3);
    FUN_0025c3b8(iVar8,8);
    FUN_002627fe(param_1,uVar3);
LAB_00266b02:
    FUN_002627fe(param_1,local_3c);
    break;
  case 10:
    if (*(int *)(param_4 + 8) == 0) {
      uVar3 = FUN_00262834(param_1,*(undefined4 *)(param_3 + 0xc));
      *(undefined4 *)(param_4 + 8) = uVar3;
      *(undefined4 *)(param_4 + 0xc) = *(undefined4 *)(param_3 + 0xc);
    }
    if (*(int *)(param_3 + 8) != *(int *)(param_4 + 8)) {
      FUN_00266966(param_1,*(int *)(param_3 + 8),*(int *)(param_4 + 8),
                   *(undefined4 *)(param_4 + 0xc));
    }
    FUN_002665da(iVar8,4,*(undefined4 *)(param_4 + 4));
    break;
  default:
    FUN_0026641e(iVar8,0x10,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc));
    FUN_0025cb14(param_1,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc));
  }
  if (param_2[2] != 0) {
    FUN_00266266(iVar8,0x7a,param_2[2],param_9,0xffffffff);
  }
  FUN_0025c384(iVar8,uVar2);
  FUN_002665da(iVar8,3,param_5);
  return uVar5;
}


