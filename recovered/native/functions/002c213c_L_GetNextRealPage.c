/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c213c L_GetNextRealPage */

/* L_GetNextRealPage(CMarketingView*, unsigned int) */

void L_GetNextRealPage(CMarketingView *param_1,uint param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  CMarketingView *pCVar5;
  uint uVar6;
  int iVar7;
  char *unaff_r4;
  CCOptions *this;
  int iVar8;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  undefined4 extraout_s0_03;
  undefined4 extraout_s0_04;
  undefined4 extraout_s0_05;
  undefined8 uVar9;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  undefined4 extraout_s1_04;
  undefined4 extraout_s1_05;
  undefined4 uVar10;
  int local_b4;
  undefined4 local_b0;
  int local_ac;
  char acStack_9c [128];
  int local_1c;
  
  piVar4 = *(int **)(DAT_002c2300 + 0x2c2148);
  local_1c = *piVar4;
  if (param_2 != 0xffffffff) {
    iVar8 = *(int *)(**(int **)(param_1 + 0x2c) + DAT_002c2304) + param_2 * 0x100;
    uVar9 = CCRandom::Seed();
    while( true ) {
      iVar7 = *(int *)(iVar8 + 0xc);
      if ((((3 < iVar7 - 7U) && (iVar7 != 0xc)) && (iVar7 != 0xb)) || (param_2 == 0xffffffff))
      break;
      if (iVar7 == 0xb) {
        iVar7 = L_EvalFlagLogic(param_1,*(char **)(iVar8 + 0x24),*(uint *)(iVar8 + 0x28),
                                *(int *)(iVar8 + 0x2c));
        uVar9 = CONCAT44(extraout_s1,extraout_s0);
        if (iVar7 == 0) {
          unaff_r4 = *(char **)(iVar8 + 0x34);
        }
        else {
LAB_002c2250:
          unaff_r4 = *(char **)(iVar8 + 0x30);
        }
LAB_002c2252:
        if (unaff_r4 == (char *)0x0) goto LAB_002c22bc;
        iVar7 = strcmp(unaff_r4,(char *)(DAT_002c230c + 0x2c225e));
        uVar9 = CONCAT44(extraout_s1_03,extraout_s0_03);
        if (iVar7 == 0) goto LAB_002c22bc;
        iVar7 = strncmp(unaff_r4,(char *)(DAT_002c2310 + 0x2c226e),8);
        if (iVar7 == 0) {
          uVar3 = CCSecondsSince1970();
          snprintf(acStack_9c,0x40,(char *)(DAT_002c2314 + 0x2c2282),uVar3);
          uVar9 = CCAnalytics_RecordAnalyticsEventWithText(DAT_002c2318 + 0x2c2290,unaff_r4 + 8);
          goto LAB_002c22bc;
        }
        iVar7 = strncmp(unaff_r4,(char *)(DAT_002c231c + 0x2c229e),5);
        uVar9 = CONCAT44(extraout_s1_04,extraout_s0_04);
        if (iVar7 == 0) {
          param_2 = L_GetPageIndexForName(param_1,unaff_r4 + 5);
          uVar9 = CONCAT44(extraout_s1_05,extraout_s0_05);
          iVar8 = *(int *)(**(int **)(param_1 + 0x2c) + DAT_002c2304) + param_2 * 0x100;
        }
      }
      else {
        if (iVar7 != 10) {
          if (iVar7 == 9) {
            uVar6 = CCSecondsSince1970();
            uVar3 = extraout_s0_01;
            uVar10 = extraout_s1_01;
            if ((uVar6 <= *(uint *)(iVar8 + 0x24)) || (*(uint *)(iVar8 + 0x28) <= uVar6))
            goto LAB_002c22f2;
            unaff_r4 = *(char **)(iVar8 + 0x2c);
            uVar9 = CONCAT44(extraout_s1_01,extraout_s0_01);
          }
          else if (iVar7 == 8) {
            uVar3 = CCRandom::NextFloat((float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
            local_b4 = 0;
            local_b0 = 0;
            local_ac = iVar8;
            do {
              local_b0 = __addsf3(local_b0,*(undefined4 *)(local_ac + 0x34));
              iVar7 = __aeabi_fcmple(uVar3,local_b0);
              uVar9 = CONCAT44(extraout_s1_02,extraout_s0_02);
              if (iVar7 != 0) {
                unaff_r4 = *(char **)(iVar8 + (local_b4 + 8) * 4 + 4);
                uVar9 = CONCAT44(extraout_s1_02,extraout_s0_02);
                break;
              }
              local_b4 = local_b4 + 1;
              local_ac = local_ac + 4;
            } while (local_b4 != 4);
          }
          else if (iVar7 != 0xc) {
            if (iVar7 == 7) {
              uVar9 = L_SetIntFlag(param_1,*(char **)(iVar8 + 0x24),*(int *)(iVar8 + 0x2c),
                                   *(int *)(iVar8 + 0x28));
              goto LAB_002c2250;
            }
          }
          else {
            unaff_r4 = *(char **)(iVar8 + 0x28);
            uVar9 = L_RecordAppMessage(param_1,*(char **)(iVar8 + 0x24));
          }
          goto LAB_002c2252;
        }
        snprintf(acStack_9c,0x80,(char *)(DAT_002c2308 + 0x2c218a),*(undefined4 *)(iVar8 + 8));
        pCVar5 = param_1 + 0xc0;
        iVar7 = CCOptions::GetUInt(*(CCOptions **)pCVar5,acStack_9c,(char *)0x0,(uint)pCVar5);
        iVar1 = CCSecondsSince1970();
        uVar6 = *(uint *)(iVar8 + 0x24);
        uVar3 = extraout_s0_00;
        uVar10 = extraout_s1_00;
        if (uVar6 < (uint)(iVar1 - iVar7)) {
          this = *(CCOptions **)pCVar5;
          pcVar2 = (char *)CCSecondsSince1970();
          uVar9 = CCOptions::SetUInt(this,acStack_9c,pcVar2,uVar6);
          unaff_r4 = *(char **)(iVar8 + 0x28);
          goto LAB_002c2252;
        }
LAB_002c22f2:
        uVar9 = CONCAT44(uVar10,uVar3);
        unaff_r4 = (char *)0x0;
LAB_002c22bc:
        param_2 = 0xffffffff;
      }
    }
  }
  if (local_1c == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


