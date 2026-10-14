/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00296684 GameStateSpecialSale::tickStepSelectZombie */

/* GameStateSpecialSale::tickStepSelectZombie(long) */

void GameStateSpecialSale::tickStepSelectZombie(long param_1)

{
  int iVar1;
  GameStateCafe *this;
  GameStateLoading *this_00;
  String *this_01;
  HCOManager *this_02;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  CapcomGame *this_03;
  NoticeDialog *pNVar8;
  ConfirmDialog *pCVar9;
  long lVar10;
  float in_s0;
  float extraout_s0;
  float extraout_s0_00;
  float fVar11;
  float extraout_s0_01;
  float in_s1;
  float extraout_s1;
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar1 = DAT_00296918;
  iVar5 = DAT_002968dc;
  iVar7 = *(int *)(param_1 + 0xc);
  iVar4 = *(int *)(iVar7 + DAT_002968dc);
  iVar6 = DAT_002968e0 + 0x296694;
  if (((iVar4 == 0) || (*(int *)(iVar7 + 0x4b8) != 0)) ||
     ((int)**(short **)(iVar6 + DAT_002968e4) < *(int *)(iVar7 + DAT_002968e8))) {
    if ((*(char *)(iVar7 + DAT_00296918) == '\0') && (*(int *)(iVar7 + 0x4b8) != 0)) {
      if ((int)**(short **)(iVar6 + DAT_002968e4) < *(int *)(iVar7 + DAT_002968e8)) {
        uVar3 = __floatsisf((*(int *)(iVar7 + 0x4b8) >> 0x10) - (iVar4 >> 0x10));
        *(undefined4 *)(param_1 + 0x430) = uVar3;
        *(undefined1 *)(iVar7 + iVar1) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x430) = 0;
      }
    }
  }
  else {
    iVar1 = ZCImageButton::contains
                      (*(ZCImageButton **)(param_1 + 0x78),iVar4 >> 0x10,(int)(short)iVar4,in_s0,
                       in_s1);
    if (iVar1 == 0) {
      iVar5 = *(int *)(*(int *)(param_1 + 0xc) + iVar5);
      uVar3 = 0x3f800000;
      iVar5 = ZCImageButton::contains
                        (*(ZCImageButton **)(param_1 + 0x7c),iVar5 >> 0x10,(int)(short)iVar5,
                         extraout_s0,extraout_s1);
      if (iVar5 == 0) {
        iVar5 = 0;
        lVar10 = param_1;
        do {
          piVar2 = *(int **)(lVar10 + 0x220);
          if ((piVar2 != (int *)0x0) &&
             (iVar1 = (**(code **)(*piVar2 + 0x10))
                                (piVar2,*(undefined4 *)(*(int *)(param_1 + 0xc) + DAT_002968dc),
                                 *(int *)(param_1 + 0xc),*(code **)(*piVar2 + 0x10),uVar3),
             iVar1 != 0)) {
            ZombieCafe::playEffect(*(int *)(param_1 + 0xc),extraout_s0_01);
            selectInstance((GameStateSpecialSale *)param_1,iVar5);
          }
          iVar5 = iVar5 + 1;
          lVar10 = lVar10 + 4;
        } while (iVar5 != 100);
      }
      else {
        fVar11 = (float)ZombieCafe::playEffect(*(int *)(param_1 + 0xc),extraout_s0_00);
        iVar5 = *(int *)(param_1 + 0xc);
        if (((int)*(short *)((*(int *)(iVar5 + 0x680) + -1) * 2 + **(int **)(iVar6 + DAT_002968ec))
            - (*(int *)(iVar5 + DAT_002968f0 + 4) + 1)) +
            (*(int *)(iVar5 + 0x5b8) - (*(int *)(iVar5 + 0x5a4) + 1)) <
            *(int *)(param_1 + DAT_002968f4)) {
          pNVar8 = *(NoticeDialog **)(param_1 + 0x448);
          String::String(aSStack_40,(char *)(DAT_002968f8 + 0x29676c));
          String::String(aSStack_38,
                         (String *)
                         (*(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x4b0) + 8) +
                         **(int **)(iVar6 + DAT_002968fc) * 8));
          NoticeDialog::show(pNVar8,aSStack_40,aSStack_38,0,0);
          String::~String(aSStack_38);
          this_01 = aSStack_40;
        }
        else {
          iVar1 = *(int *)(param_1 + DAT_00296900);
          if (iVar1 != 99) {
            if (iVar1 == -1) {
              return;
            }
            uVar3 = *(undefined4 *)(iVar1 * 0x5d8 + *(int *)(iVar5 + DAT_00296914 + 8));
            ZombieCafe::stopMusic(fVar11);
            ZombieCafe::unloadMusic(*(ZombieCafe **)(param_1 + 0xc),0);
            this_02 = (HCOManager *)HCOManager::getInstance();
            HCOManager::saveHCOItemInfo(this_02);
            javaBuyStuff(uVar3);
            return;
          }
          pCVar9 = *(ConfirmDialog **)(param_1 + 0x438);
          String::String(aSStack_30,(char *)(DAT_00296904 + 0x2967b6));
          String::String(aSStack_28,(char *)(DAT_00296908 + 0x2967c4));
          String::String(aSStack_20,(char *)(DAT_0029690c + 0x2967ce));
          ConfirmDialog::show(pCVar9,aSStack_30,aSStack_28,aSStack_20,
                              *(undefined4 *)(iVar6 + DAT_00296910),param_1);
          String::~String(aSStack_20);
          String::~String(aSStack_28);
          this_01 = aSStack_30;
        }
        String::~String(this_01);
      }
    }
    else {
      ZombieCafe::playEffect(*(int *)(param_1 + 0xc),extraout_s0);
      this_03 = *(CapcomGame **)(param_1 + 0xc);
      this = (GameStateCafe *)operator_new(0x200);
      GameStateCafe::GameStateCafe(this);
      this_00 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(this_00,(GameState *)this);
      CapcomGame::setNextState(this_03,(GameState *)this_00);
    }
  }
  return;
}


