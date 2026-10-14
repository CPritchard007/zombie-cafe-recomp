/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c26bc L_TranslateClickToImageSpace */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x002c26dc) */
/* WARNING: Removing unreachable block (ram,0x002c26dc) */
/* L_TranslateClickToImageSpace(CMarketingView*, ccMktAnimFrame const*, ccTexture2D const*, ccVec2
   const*, ccVec2*, ccMktPage const*) */

void L_TranslateClickToImageSpace
               (CMarketingView *param_1,ccMktAnimFrame *param_2,ccTexture2D *param_3,ccVec2 *param_4
               ,ccVec2 *param_5,ccMktPage *param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 in_stack_ffffffc0;
  undefined4 in_stack_ffffffc4;
  undefined4 local_38;
  
  *(undefined4 *)param_5 = *(undefined4 *)param_4;
  *(undefined4 *)(param_5 + 4) = *(undefined4 *)(param_4 + 4);
  switch(*(undefined4 *)(param_1 + 0x90)) {
  case 0:
  case 5:
  case 6:
    *(undefined4 *)param_5 = *(undefined4 *)param_4;
    uVar5 = __floatsisf(*(undefined4 *)(param_1 + 4));
    uVar5 = __subsf3(uVar5,*(undefined4 *)(param_4 + 4));
    *(undefined4 *)(param_5 + 4) = uVar5;
    break;
  case 1:
    uVar5 = __floatsisf(*(undefined4 *)param_1);
    uVar5 = __subsf3(uVar5,*(undefined4 *)param_4);
    *(undefined4 *)param_5 = uVar5;
    *(undefined4 *)(param_5 + 4) = *(undefined4 *)(param_4 + 4);
    break;
  case 2:
    *(undefined4 *)param_5 = *(undefined4 *)(param_4 + 4);
    *(undefined4 *)(param_5 + 4) = *(undefined4 *)param_4;
    goto LAB_002c270e;
  case 3:
    uVar5 = __floatsisf(*(undefined4 *)(param_1 + 4));
    uVar5 = __subsf3(uVar5,*(undefined4 *)(param_4 + 4));
    *(undefined4 *)param_5 = uVar5;
    uVar5 = __floatsisf(*(undefined4 *)param_1);
    uVar5 = __subsf3(uVar5,*(undefined4 *)param_4);
    *(undefined4 *)(param_5 + 4) = uVar5;
LAB_002c270e:
    in_stack_ffffffc4 = __floatsisf(*(undefined4 *)(param_1 + 4));
    uVar5 = *(undefined4 *)param_1;
    goto LAB_002c274a;
  default:
    goto switchD_002c26dc_caseD_4;
  }
  in_stack_ffffffc4 = __floatsisf(*(undefined4 *)param_1);
  uVar5 = *(undefined4 *)(param_1 + 4);
LAB_002c274a:
  local_38 = __floatsisf(uVar5);
switchD_002c26dc_caseD_4:
  __extendsfdf2(*(int *)(param_2 + 0x14) + -0x80000000);
  cos((double)CONCAT44(in_stack_ffffffc4,in_stack_ffffffc0));
  uVar1 = __truncdfsf2();
  sin((double)CONCAT44(in_stack_ffffffc4,in_stack_ffffffc0));
  iVar2 = __truncdfsf2();
  uVar3 = __floatunsisf(*(undefined4 *)(param_3 + 0x14));
  uVar4 = __mulsf3(uVar3,*(undefined4 *)(param_2 + 0xc));
  uVar5 = __floatunsisf(*(undefined4 *)(param_3 + 0x18));
  uVar6 = __mulsf3(uVar5,*(undefined4 *)(param_2 + 0x10));
  uVar9 = *(undefined4 *)param_5;
  uVar7 = __mulsf3(uVar4,*(undefined4 *)(param_2 + 4));
  uVar5 = in_stack_ffffffc4;
  if ((((*(uint *)(param_6 + 0x28) < 9) &&
       (uVar8 = 1 << (*(uint *)(param_6 + 0x28) & 0xff), (uVar8 & 0x44) == 0)) &&
      (uVar5 = uVar3, (uVar8 & 0x182) == 0)) && (uVar5 = in_stack_ffffffc4, (uVar8 & 0x38) != 0)) {
    uVar5 = __mulsf3(uVar3,0x3f000000);
    uVar5 = __subsf3(in_stack_ffffffc4,uVar5);
  }
  else {
    uVar5 = __mulsf3(uVar5,0x3f000000);
  }
  uVar5 = __addsf3(uVar7,uVar5);
  uVar5 = __addsf3(uVar5,*(undefined4 *)(param_6 + 0x2c));
  uVar5 = __subsf3(uVar9,uVar5);
  uVar7 = *(undefined4 *)(param_5 + 4);
  *(undefined4 *)param_5 = uVar5;
  uVar3 = __mulsf3(uVar6,*(undefined4 *)(param_2 + 8));
  if ((*(uint *)(param_6 + 0x28) < 9) &&
     (uVar8 = 1 << (*(uint *)(param_6 + 0x28) & 0xff), (uVar8 & 0x110) == 0)) {
    if ((uVar8 & 0xe0) == 0) {
      if ((uVar8 & 0xe) != 0) {
        uVar9 = __floatunsisf(*(undefined4 *)(param_3 + 0x18));
        uVar9 = __mulsf3(uVar9,0x3f000000);
        uVar9 = __subsf3(local_38,uVar9);
        goto LAB_002c286e;
      }
    }
    else {
      local_38 = __floatunsisf(*(undefined4 *)(param_3 + 0x18));
    }
  }
  uVar9 = __mulsf3(local_38,0x3f000000);
LAB_002c286e:
  uVar3 = __addsf3(uVar3,uVar9);
  uVar3 = __addsf3(uVar3,*(undefined4 *)(param_6 + 0x30));
  uVar3 = __subsf3(uVar7,uVar3);
  uVar7 = __mulsf3(uVar5,uVar1);
  uVar9 = __mulsf3(uVar3,iVar2 + -0x80000000);
  uVar7 = __addsf3(uVar7,uVar9);
  uVar4 = __divsf3(uVar7,uVar4);
  uVar4 = __addsf3(uVar4,0x3f000000);
  *(undefined4 *)param_5 = uVar4;
  uVar5 = __mulsf3(uVar5,iVar2);
  uVar1 = __mulsf3(uVar3,uVar1);
  uVar5 = __addsf3(uVar5,uVar1);
  uVar5 = __divsf3(uVar5,uVar6);
  uVar5 = __addsf3(uVar5,0x3f000000);
  *(undefined4 *)(param_5 + 4) = uVar5;
  return;
}


