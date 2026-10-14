/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bba00 FUN_000bba00 */

void FUN_000bba00(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  ZCImageButton *pZVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  bool bVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  code *pcVar13;
  int *piVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  uint uVar17;
  int iVar18;
  int *piVar19;
  ZombieCafe *pZVar20;
  int *piVar21;
  int *piVar22;
  int iVar23;
  int iVar24;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float fVar25;
  undefined4 extraout_s0_06;
  float extraout_s0_07;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  float extraout_s1_05;
  float fVar27;
  undefined4 extraout_s1_06;
  undefined8 uVar26;
  float extraout_s1_07;
  int local_14c;
  code *local_148;
  int local_144;
  int local_140;
  char acStack_11c [256];
  int local_1c;
  
  iVar24 = DAT_000bbd44 + 0xbba0e;
  piVar8 = *(int **)(iVar24 + DAT_000bbd48);
  local_1c = *piVar8;
  *(undefined1 *)(*(int *)(param_1 + 0x68) + DAT_000bbd4c) = 0;
  piVar19 = *(int **)(param_1 + 0x78);
  cVar1 = (char)piVar19[5];
  if (cVar1 == '\0') {
    piVar19 = *(int **)(param_1 + 0x74);
  }
  ScreenElement::tick(param_1);
  pZVar20 = *(ZombieCafe **)(param_1 + 0x68);
  iVar2 = ZombieCafe::unhandledPressOrLongEvent(pZVar20);
  if (iVar2 == 0) {
    if ((pZVar20[DAT_000bbd84] == (ZombieCafe)0x0) && (*(long *)(pZVar20 + 0x4b8) != 0)) {
      fVar25 = extraout_s0;
      fVar27 = extraout_s1;
      if (((*(ZCImageButton **)(param_1 + 0x80) == (ZCImageButton *)0x0) ||
          (iVar2 = ZCImageButton::contains
                             (*(ZCImageButton **)(param_1 + 0x80),*(long *)(pZVar20 + 0x4b8),
                              extraout_s0,extraout_s1), fVar25 = extraout_s0_07,
          fVar27 = extraout_s1_07, iVar2 == 0)) &&
         (((*(ZCImageButton **)(param_1 + 0x84) == (ZCImageButton *)0x0 ||
           (iVar2 = ZCImageButton::contains
                              (*(ZCImageButton **)(param_1 + 0x84),
                               *(long *)(*(int *)(param_1 + 0x68) + 0x4b8),fVar25,fVar27),
           iVar2 == 0)) &&
          (iVar2 = *(int *)(*(int *)(param_1 + 0x68) + 0x4b8),
          iVar2 = ScreenElement::contains
                            (*(ScreenElement **)(param_1 + 0x70),iVar2 >> 0x10,(int)(short)iVar2),
          iVar2 != 0)))) {
        iVar2 = *(int *)(param_1 + 0x68);
        if ((int)**(short **)(iVar24 + DAT_000bc018) < *(int *)(iVar2 + DAT_000bc01c)) {
          uVar5 = __floatsisf((int)*(short *)(iVar2 + 0x4b8) - (int)*(short *)(iVar2 + DAT_000bbd50)
                             );
          *(undefined4 *)(param_1 + 0xe0) = uVar5;
          *(undefined1 *)(iVar2 + DAT_000bbd84) = 1;
        }
        else {
          *(undefined4 *)(param_1 + 0xe0) = 0;
        }
      }
      else {
        *(undefined1 *)(*(int *)(param_1 + 0x68) + DAT_000bbd84) = 1;
      }
    }
    goto LAB_000bbd8e;
  }
  iVar2 = ZCImageButton::contains
                    (*(ZCImageButton **)(param_1 + 0xdc),*(long *)(pZVar20 + DAT_000bbd50),
                     extraout_s0,extraout_s1);
  if (iVar2 == 0) {
    if ((*(int *)(param_1 + 0xa8) == 0) || (*(char *)(*(int *)(param_1 + 0xa8) + 0x14) == '\0')) {
      fVar25 = extraout_s0_00;
      fVar27 = extraout_s1_00;
      if ((*(ZCImageButton **)(param_1 + 0x80) == (ZCImageButton *)0x0) ||
         (iVar2 = ZCImageButton::contains
                            (*(ZCImageButton **)(param_1 + 0x80),
                             *(long *)(*(int *)(param_1 + 0x68) + DAT_000bbd50),extraout_s0_00,
                             extraout_s1_00), fVar25 = extraout_s0_01, fVar27 = extraout_s1_01,
         iVar2 == 0)) {
        if ((*(ZCImageButton **)(param_1 + 0x84) == (ZCImageButton *)0x0) ||
           (iVar2 = ZCImageButton::contains
                              (*(ZCImageButton **)(param_1 + 0x84),
                               *(long *)(*(int *)(param_1 + 0x68) + DAT_000bbd50),fVar25,fVar27),
           iVar2 == 0)) {
          iVar2 = *(int *)(*(int *)(param_1 + 0x68) + DAT_000bbd50);
          iVar2 = ScreenElement::contains
                            (*(ScreenElement **)(param_1 + 0x70),iVar2 >> 0x10,(int)(short)iVar2);
          if (iVar2 != 0) {
            local_148 = (code *)0x0;
            fVar25 = extraout_s0_02;
            fVar27 = extraout_s1_02;
            if (cVar1 == '\0') {
              iVar2 = ZombieCafe::getPurchasingFlag();
              if (iVar2 == 0) {
                fVar25 = extraout_s0_04;
                fVar27 = extraout_s1_04;
                if (((*(undefined4 **)(param_1 + 0x88) == (undefined4 *)0x0) ||
                    (pZVar3 = (ZCImageButton *)**(undefined4 **)(param_1 + 0x88),
                    pZVar3 == (ZCImageButton *)0x0)) ||
                   ((pZVar3[0x86] == (ZCImageButton)0x0 ||
                    (iVar2 = ZCImageButton::contains
                                       (pZVar3,*(long *)(*(int *)(param_1 + 0x68) + DAT_000bbd50),
                                        extraout_s0_04,extraout_s1_04), fVar25 = extraout_s0_05,
                    fVar27 = extraout_s1_05, iVar2 == 0)))) {
                  uVar26 = CONCAT44(fVar27,fVar25);
                  local_148 = (code *)0x4;
                  iVar2 = 0;
                  do {
                    if (((*(int *)(param_1 + 0x88) != 0) &&
                        (pZVar3 = *(ZCImageButton **)(*(int *)(param_1 + 0x88) + (int)local_148),
                        pZVar3 != (ZCImageButton *)0x0)) && (pZVar3[0x86] != (ZCImageButton)0x0)) {
                      iVar23 = ZCImageButton::contains
                                         (pZVar3,*(long *)(*(int *)(param_1 + 0x68) + DAT_000bbd50),
                                          (float)uVar26,(float)((ulonglong)uVar26 >> 0x20));
                      uVar26 = CONCAT44(extraout_s1_06,extraout_s0_06);
                      if (iVar23 != 0) {
                        iVar18 = *(int *)(*(int *)(*(ZombieCafe **)(param_1 + 0x68) +
                                                  DAT_000bc010 + 8) + iVar2 * 0x5d8 + 0x5d0);
                        iVar23 = ZombieCafe::getToxin(*(ZombieCafe **)(param_1 + 0x68));
                        if (DAT_000bc014 < iVar23 + iVar18) {
                          piVar22 = *(int **)(*(int *)(param_1 + 0x68) + 8);
                          uVar5 = 5;
                          pcVar13 = *(code **)(*piVar22 + 0x28);
                        }
                        else {
                          iVar18 = ZombieCafe::isPurchaseTooFrequent();
                          iVar23 = DAT_000bbd74;
                          if (iVar18 != 0) {
                            piVar22 = *(int **)(*(int *)(param_1 + 0x68) + 8);
                            (**(code **)(*piVar22 + 0x28))(piVar22,3);
                            uVar5 = CCServer::GetMyUserID
                                              (*(void **)(*(int *)(param_1 + 0x68) + DAT_000bbd54));
                            pZVar20 = *(ZombieCafe **)(param_1 + 0x68);
                            uVar9 = *(undefined4 *)(pZVar20 + 0x680);
                            uVar10 = *(undefined4 *)(pZVar20 + DAT_000bbd58);
                            uVar11 = *(undefined4 *)(pZVar20 + DAT_000bbd5c);
                            uVar15 = ZombieCafe::getToxin(pZVar20);
                            uVar12 = *(undefined4 *)
                                      (*(int *)(*(int *)(param_1 + 0x68) + DAT_000bbd60 + 8) +
                                       iVar2 * 0x5d8 + 0x5d0);
                            uVar4 = ZombieCafe::timeSinceFirstFrequentPurchase();
                            snprintf(acStack_11c,0x80,(char *)(DAT_000bbd64 + 0xbbc2a),
                                     DAT_000bbd68 + 0xbbc30,uVar5,uVar9,uVar10,uVar11,uVar15,uVar12,
                                     uVar4);
                            uVar26 = CCMarketing_RecordAnalyticsEvent
                                               (*(undefined4 *)
                                                 (*(int *)(param_1 + 0x68) + DAT_000bbd6c),
                                                DAT_000bbd70 + 0xbbc50,acStack_11c);
                            goto LAB_000bbcaa;
                          }
                          *(undefined1 *)(param_1 + 0x14) = 0;
                          sprintf(acStack_11c,(char *)(iVar23 + 0xbbc60),iVar2);
                          L_PrintLog((char *)(DAT_000bbd78 + 0xbbc6c),acStack_11c);
                          iVar23 = *(int *)(param_1 + 0x68);
                          Platform::getAppTime();
                          uVar5 = __fixdfsi();
                          *(undefined4 *)(iVar23 + 0xb90) = uVar5;
                          *(undefined4 *)(*(int *)(param_1 + 0x68) + DAT_000bbd7c) =
                               *(undefined4 *)(*(int *)(param_1 + 0x68) + 0xb90);
                          *(int *)(*(int *)(param_1 + 0x68) + DAT_000bbd80) = iVar2;
                          javaBuyStuff(iVar2);
                          *(undefined1 *)(param_1 + 0x60) = 1;
                          uVar5 = 7;
                          piVar22 = *(int **)(*(int *)(param_1 + 0x68) + 8);
                          pcVar13 = *(code **)(*piVar22 + 0x28);
                        }
                        uVar26 = (*pcVar13)(piVar22,uVar5);
                      }
                    }
LAB_000bbcaa:
                    iVar2 = iVar2 + 1;
                    local_148 = (code *)((int)local_148 + 4);
                  } while (iVar2 != 5);
                }
                else {
                  (**(code **)(**(int **)(param_1 + 0x78) + 0x20))(*(int **)(param_1 + 0x78),1);
                  (**(code **)(**(int **)(param_1 + 0x74) + 0x20))(*(int **)(param_1 + 0x74),0);
                }
              }
              else {
                piVar22 = *(int **)(*(int *)(param_1 + 0x68) + 8);
                (**(code **)(*piVar22 + 0x28))(piVar22,6);
              }
            }
            else {
              for (; (int)local_148 < *(int *)(param_1 + 0x90) + 1;
                  local_148 = (code *)((int)local_148 + 1)) {
                pZVar3 = *(ZCImageButton **)((int)local_148 * 4 + *(int *)(param_1 + 0x94));
                if (((pZVar3 != (ZCImageButton *)0x0) && (pZVar3[0x86] != (ZCImageButton)0x0)) &&
                   (iVar2 = ZCImageButton::contains
                                      (pZVar3,*(long *)(*(int *)(param_1 + 0x68) + DAT_000bbd50),
                                       fVar25,fVar27), fVar25 = extraout_s0_03,
                   fVar27 = extraout_s1_03, iVar2 != 0)) {
                  *(undefined1 *)(param_1 + 0x14) = 0;
                }
              }
            }
          }
          goto LAB_000bbcb8;
        }
        local_144 = piVar19[1];
        local_140 = piVar19[2];
        local_148 = *(code **)(*piVar19 + 0x14);
        iVar23 = **(int **)(iVar24 + DAT_000bc00c);
        iVar2 = SmDev();
        iVar2 = *(int *)(iVar2 * 4 + iVar23) * -3;
      }
      else {
        local_140 = piVar19[2];
        local_144 = piVar19[1];
        local_148 = *(code **)(*piVar19 + 0x14);
        iVar23 = **(int **)(iVar24 + DAT_000bc00c);
        iVar2 = SmDev();
        iVar2 = *(int *)(iVar2 * 4 + iVar23) * 3;
      }
      (*local_148)(piVar19,local_144,local_140 + iVar2);
    }
  }
  else {
    ZombieCafe::playEffect(*(int *)(param_1 + 0x68),extraout_s0_00);
    *(undefined1 *)(param_1 + 0x14) = 0;
    if (*(GameState **)(param_1 + 0x6c) != (GameState *)0x0) {
      GameState::releaseHandle(*(GameState **)(param_1 + 0x6c));
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
  }
LAB_000bbcb8:
  *(undefined1 *)(*(int *)(param_1 + 0x68) + DAT_000bbd84) = 1;
LAB_000bbd8e:
  piVar21 = *(int **)(param_1 + 0x88);
  piVar22 = piVar21;
  if (((piVar21 != (int *)0x0) && (piVar22 = (int *)0x0, cVar1 == '\0')) &&
     (*(char *)(param_1 + 0xb8) == '\0')) {
    piVar22 = (int *)-(*(int *)(*piVar21 + 8) + *(int *)(*piVar21 + 0x10));
  }
  pcVar13 = *(code **)(*piVar19 + 0x14);
  uVar5 = __floatsisf(piVar19[2]);
  __addsf3(uVar5,*(undefined4 *)(param_1 + 0xe0));
  piVar6 = (int *)__fixsfsi();
  piVar14 = (int *)(*(int *)(*(int *)(param_1 + 0x70) + 0x10) - piVar19[4]);
  piVar21 = piVar22;
  if ((int)piVar14 < (int)piVar22) {
    piVar21 = piVar14;
  }
  if (((int)piVar21 <= (int)piVar6) && (piVar21 = piVar22, (int)piVar6 < (int)piVar22)) {
    piVar21 = piVar6;
  }
  (*pcVar13)(piVar19,0,piVar21);
  uVar15 = *(undefined4 *)(param_1 + 0xe0);
  puVar16 = *(undefined4 **)(iVar24 + DAT_000bbffc);
  uVar5 = __floatsisf(param_2);
  local_14c = __mulsf3(uVar5,*puVar16);
  iVar2 = __aeabi_fcmplt(local_14c,0x3f800000);
  if (iVar2 == 0) {
    local_14c = 0x3f800000;
  }
  uVar5 = __subsf3(0x3f800000,local_14c);
  local_14c = __mulsf3(uVar15,uVar5);
  *(int *)(param_1 + 0xe0) = local_14c;
  iVar2 = __aeabi_fcmpge(local_14c,0);
  if (iVar2 == 0) {
    local_14c = local_14c + -0x80000000;
  }
  iVar24 = __aeabi_fcmplt(local_14c,**(undefined4 **)(iVar24 + DAT_000bc000));
  if (iVar24 != 0) {
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  piVar21 = *(int **)(param_1 + 0x80);
  if (piVar21 != (int *)0x0) {
    if ((*(int *)(param_1 + 0xa8) == 0) ||
       (bVar7 = false, *(char *)(*(int *)(param_1 + 0xa8) + 0x14) == '\0')) {
      bVar7 = piVar19[2] < (int)piVar22;
    }
    (**(code **)(*piVar21 + 0x20))(piVar21,bVar7);
  }
  piVar22 = *(int **)(param_1 + 0x84);
  if (piVar22 != (int *)0x0) {
    if ((*(int *)(param_1 + 0xa8) == 0) ||
       (bVar7 = false, *(char *)(*(int *)(param_1 + 0xa8) + 0x14) == '\0')) {
      bVar7 = *(int *)(*(int *)(param_1 + 0x70) + 0x10) < piVar19[2] + piVar19[4];
    }
    (**(code **)(*piVar22 + 0x20))(piVar22,bVar7);
  }
  piVar19 = *(int **)(param_1 + 0x80);
  if ((piVar19 != (int *)0x0) && (*(int *)(param_1 + 0x84) != 0)) {
    iVar24 = piVar19[4] * *(int *)(*(int *)(param_1 + 0x68) + DAT_000bc004);
    uVar17 = iVar24 >> 0x1f;
    uVar17 = (iVar24 >> 0x12) + uVar17 ^ uVar17;
    iVar24 = *(int *)(param_1 + 0x7c);
    (**(code **)(*piVar19 + 0x14))
              (piVar19,*(undefined4 *)(iVar24 + 4),
               (piVar19[4] >> 2) + (*(int *)(iVar24 + 8) - *(int *)(iVar24 + 0x10)) + uVar17);
    (**(code **)(**(int **)(param_1 + 0x84) + 0x14))
              (*(int **)(param_1 + 0x84),*(undefined4 *)(*(int *)(param_1 + 0x7c) + 4),
               (*(int *)(*(int *)(param_1 + 0x7c) + 8) -
               (*(int *)(*(int *)(param_1 + 0x80) + 0x10) >> 2)) - uVar17);
  }
  *(undefined1 *)(*(int *)(param_1 + 0x68) + DAT_000bc008) = 1;
  if (local_1c == *piVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


