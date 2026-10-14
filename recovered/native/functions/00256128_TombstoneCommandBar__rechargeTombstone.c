/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00256128 TombstoneCommandBar::rechargeTombstone */

/* TombstoneCommandBar::rechargeTombstone(TombstoneCommandBar*) */

void TombstoneCommandBar::rechargeTombstone(TombstoneCommandBar *param_1)

{
  int iVar1;
  undefined4 uVar2;
  ZombieCafe *pZVar3;
  undefined4 uVar4;
  MALTAHoover *pMVar5;
  SServer *pSVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  char acStack_11c [64];
  char acStack_dc [64];
  char acStack_9c [128];
  int local_1c;
  
  iVar13 = DAT_0025633c + 0x256134;
  piVar14 = *(int **)(iVar13 + DAT_00256340);
  local_1c = *piVar14;
  iVar15 = **(int **)(iVar13 + DAT_00256344);
  iVar1 = ZombieCafe::getToxin(*(ZombieCafe **)(param_1 + 0x68));
  if (iVar15 <= iVar1) {
    if ((*(char *)(*(int *)(*(int *)(param_1 + 0x78) + 0x38) + 0x44) == '\x0e') &&
       (*(int *)(*(int *)(*(int *)(param_1 + 0x78) + 0x38) + 0x24) ==
        **(int **)(iVar13 + DAT_00256348))) {
      *(undefined4 *)(*(int *)(param_1 + 0x68) + DAT_00256350) =
           **(undefined4 **)(iVar13 + DAT_0025634c);
    }
    if ((*(char *)(*(int *)(*(int *)(param_1 + 0x78) + 0x38) + 0x44) == '\x0e') &&
       (*(int *)(*(int *)(*(int *)(param_1 + 0x78) + 0x38) + 0x24) ==
        **(int **)(iVar13 + DAT_00256354))) {
      *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x9d0) = **(undefined4 **)(iVar13 + DAT_00256358);
    }
    if ((*(char *)(*(int *)(*(int *)(param_1 + 0x78) + 0x38) + 0x44) == '\x0e') &&
       (*(int *)(*(int *)(*(int *)(param_1 + 0x78) + 0x38) + 0x24) ==
        **(int **)(iVar13 + DAT_0025635c))) {
      *(undefined4 *)(*(int *)(param_1 + 0x68) + DAT_00256360) =
           **(undefined4 **)(iVar13 + DAT_0025634c);
    }
    if ((*(char *)(*(int *)(*(int *)(param_1 + 0x78) + 0x38) + 0x44) == '\x0e') &&
       (*(int *)(*(int *)(*(int *)(param_1 + 0x78) + 0x38) + 0x24) ==
        **(int **)(iVar13 + DAT_00256364))) {
      *(undefined4 *)(*(int *)(param_1 + 0x68) + DAT_00256368) =
           **(undefined4 **)(iVar13 + DAT_00256358);
    }
    ZombieCafe::spendToxin(*(ZombieCafe **)(param_1 + 0x68),iVar15);
    *(undefined1 *)(*(int *)(param_1 + 0x68) + DAT_0025636c) = 1;
    setTombstone(param_1,*(Furniture **)(param_1 + 0x78));
    iVar1 = DAT_00256374;
    uVar2 = CCServer::GetMyUserID(*(void **)(*(int *)(param_1 + 0x68) + DAT_00256370));
    pZVar3 = *(ZombieCafe **)(param_1 + 0x68);
    uVar8 = *(undefined4 *)(pZVar3 + 0x680);
    uVar10 = *(undefined4 *)(pZVar3 + DAT_00256378);
    uVar9 = *(undefined4 *)(pZVar3 + DAT_0025637c);
    uVar4 = ZombieCafe::getToxin(pZVar3);
    snprintf(acStack_9c,0x80,(char *)(DAT_00256380 + 0x25624a),(char *)(iVar1 + 0x25621c),uVar2,
             uVar8,uVar10,uVar9,uVar4,iVar15,
             *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x78) + 0x38) + 0x24));
    printf((char *)(DAT_00256384 + 0x25625c),acStack_9c);
    CCMarketing_RecordAnalyticsEvent
              (*(undefined4 *)(*(int *)(param_1 + 0x68) + DAT_00256388),DAT_0025638c + 0x25626a,
               acStack_9c);
    pMVar5 = (MALTAHoover *)MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    MALTAHoover::init(pMVar5,(char *)(DAT_00256390 + 0x256286),(char *)(DAT_00256394 + 0x256288),
                      (char *)(iVar1 + 0x25621c));
    memset(acStack_11c,0,0x40);
    pSVar6 = (SServer *)MALTAHoover::GetInstance();
    iVar1 = MALTAHoover::getFBID(pSVar6,(char *)**(undefined4 **)(iVar13 + DAT_00256398));
    if (iVar1 == 0) {
      L_PrintLog((char *)(DAT_0025639c + 0x2562b2),acStack_11c);
    }
    memset(acStack_dc,0,0x40);
    snprintf(acStack_dc,0x40,(char *)(DAT_002563a0 + 0x2562ce),acStack_11c,iVar15,
             *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x78) + 0x38) + 0x24));
    L_PrintLog((char *)(DAT_002563a4 + 0x2562e0),(char *)(DAT_002563a8 + 0x2562e2));
    pMVar5 = (MALTAHoover *)MALTAHoover::GetInstance();
    uVar11 = *(uint *)(*(ZombieCafe **)(param_1 + 0x68) + 0x680);
    uVar7 = ZombieCafe::getToxin(*(ZombieCafe **)(param_1 + 0x68));
    pZVar3 = *(ZombieCafe **)(param_1 + 0x68);
    uVar16 = *(uint *)(pZVar3 + DAT_00256378);
    uVar12 = *(uint *)(pZVar3 + DAT_0025637c);
    iVar1 = ZombieCafe::calUserRankId(pZVar3,(uint)(byte)pZVar3[DAT_002563ac]);
    MALTAHoover::send(pMVar5,(char *)(DAT_002563b4 + 0x256322),uVar11,uVar7,uVar12,uVar16,iVar1,
                      acStack_dc,*(char **)(iVar13 + DAT_002563b0));
  }
  if (local_1c == *piVar14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


