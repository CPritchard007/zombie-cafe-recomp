/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018cd84 GameStateRoulette::tickStepPreview */

/* GameStateRoulette::tickStepPreview(long) */

void GameStateRoulette::tickStepPreview(long param_1)

{
  int iVar1;
  int iVar2;
  GameStateCafe *this;
  GameStateLoading *this_00;
  ZCImageButton *this_01;
  String *this_02;
  ConfirmDialog *pCVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  CapcomGame *this_03;
  NoticeDialog *pNVar10;
  long lVar11;
  float in_s0;
  float extraout_s0;
  float extraout_s0_00;
  float in_s1;
  float extraout_s1;
  String aSStack_80 [8];
  String aSStack_78 [8];
  String aSStack_70 [8];
  String aSStack_68 [8];
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar1 = DAT_0018d164;
  iVar2 = DAT_0018d140;
  iVar8 = DAT_0018d0fc;
  iVar7 = DAT_0018d0f4 + 0x18cd92;
  if ((*(char *)(*(int *)(param_1 + DAT_0018d0f0) + 0x14) == '\0') &&
     (*(char *)(*(int *)(param_1 + DAT_0018d0f8) + 0x14) == '\0')) {
    iVar9 = *(int *)(param_1 + 0xc);
    iVar6 = *(int *)(iVar9 + DAT_0018d0fc);
    if ((iVar6 == 0) ||
       ((*(int *)(iVar9 + 0x4b8) != 0 ||
        ((int)**(short **)(iVar7 + DAT_0018d100) < *(int *)(iVar9 + DAT_0018d104))))) {
      if ((*(char *)(iVar9 + DAT_0018d164) == '\0') && (*(int *)(iVar9 + 0x4b8) != 0)) {
        if ((int)**(short **)(iVar7 + DAT_0018d100) < *(int *)(iVar9 + DAT_0018d104)) {
          uVar5 = __floatsisf((iVar6 >> 0x10) - (*(int *)(iVar9 + 0x4b8) >> 0x10));
          *(undefined4 *)(param_1 + iVar2) = uVar5;
          *(undefined1 *)(iVar9 + iVar1) = 1;
        }
        else {
          *(undefined4 *)(param_1 + DAT_0018d140) = 0;
        }
      }
    }
    else {
      uVar5 = 0x3f800000;
      iVar2 = ZCImageButton::contains
                        (*(ZCImageButton **)(param_1 + 0x7c),iVar6 >> 0x10,(int)(short)iVar6,in_s0,
                         in_s1);
      if (iVar2 == 0) {
        this_01 = *(ZCImageButton **)(param_1 + 0x80);
        if ((this_01[0x14] != (ZCImageButton)0x0) && (this_01[0x86] != (ZCImageButton)0x0)) {
          iVar8 = *(int *)(*(int *)(param_1 + 0xc) + iVar8);
          uVar5 = 0x3f800000;
          iVar8 = ZCImageButton::contains
                            (this_01,iVar8 >> 0x10,(int)(short)iVar8,extraout_s0,extraout_s1);
          if (iVar8 != 0) {
            ZombieCafe::playEffect(*(int *)(param_1 + 0xc),extraout_s0_00);
            if (*(char *)(param_1 + DAT_0018d108) != '\0') {
              return;
            }
            iVar2 = checkStaffNum((GameStateRoulette *)param_1);
            iVar8 = DAT_0018d118;
            if (iVar2 == 0) {
              pNVar10 = *(NoticeDialog **)(param_1 + DAT_0018d0f0);
              String::String(aSStack_80,(char *)(DAT_0018d10c + 0x18ce72));
              Vector<String>::elementAt((int)aSStack_78);
              NoticeDialog::show(pNVar10,aSStack_80,aSStack_78,0,0);
              String::~String(aSStack_78);
              this_02 = aSStack_80;
            }
            else if (*(char *)(param_1 + DAT_0018d114) == '\0') {
              if (*(int *)(param_1 + DAT_0018d118) <=
                  *(int *)(*(ZombieCafe **)(param_1 + 0xc) + DAT_0018d138)) {
                buyConfirmed((GameStateRoulette *)param_1);
                return;
              }
              pNVar10 = *(NoticeDialog **)(param_1 + DAT_0018d0f0);
              Vector<String>::elementAt((int)aSStack_28);
              Vector<String>::elementAt((int)aSStack_20);
              NoticeDialog::show(pNVar10,aSStack_28,aSStack_20,0,0);
              String::~String(aSStack_20);
              this_02 = aSStack_28;
            }
            else {
              iVar2 = ZombieCafe::getToxin(*(ZombieCafe **)(param_1 + 0xc));
              if (iVar2 < *(int *)(param_1 + iVar8)) {
                pNVar10 = *(NoticeDialog **)(param_1 + DAT_0018d0f0);
                String::String(aSStack_70,(char *)(DAT_0018d11c + 0x18cec8));
                Vector<String>::elementAt((int)aSStack_68);
                NoticeDialog::show(pNVar10,aSStack_70,aSStack_68,0,0);
                String::~String(aSStack_68);
                this_02 = aSStack_70;
              }
              else {
                pCVar3 = *(ConfirmDialog **)(param_1 + DAT_0018d0f8);
                Vector<String>::elementAt((int)aSStack_60);
                String::valueOf((int)aSStack_58);
                String::operator+(aSStack_50,aSStack_60,aSStack_58);
                Vector<String>::elementAt((int)aSStack_48);
                String::operator+(aSStack_40,aSStack_50,aSStack_48);
                Vector<String>::elementAt((int)aSStack_38);
                Vector<String>::elementAt((int)aSStack_30);
                ConfirmDialog::show(pCVar3,aSStack_40,aSStack_38,aSStack_30,
                                    *(undefined4 *)(iVar7 + DAT_0018d130),
                                    *(undefined4 *)(iVar7 + DAT_0018d134),param_1,0,0);
                String::~String(aSStack_30);
                String::~String(aSStack_38);
                String::~String(aSStack_40);
                String::~String(aSStack_48);
                String::~String(aSStack_50);
                String::~String(aSStack_58);
                this_02 = aSStack_60;
              }
            }
            String::~String(this_02);
            return;
          }
        }
        iVar8 = 0;
        lVar11 = param_1;
        do {
          if (*(char *)(param_1 + DAT_0018d108) == '\0') {
            piVar4 = *(int **)(lVar11 + 0x94);
            if ((piVar4 != (int *)0x0) &&
               (iVar2 = (**(code **)(*piVar4 + 0x10))
                                  (piVar4,*(undefined4 *)(*(int *)(param_1 + 0xc) + DAT_0018d0fc),
                                   *(int *)(param_1 + 0xc),*(code **)(*piVar4 + 0x10),uVar5),
               iVar2 != 0)) {
              selectCharacter((GameStateRoulette *)param_1,iVar8);
            }
          }
          else {
            piVar4 = *(int **)(lVar11 + 0xa20);
            if ((piVar4 != (int *)0x0) &&
               (iVar2 = (**(code **)(*piVar4 + 0x10))
                                  (piVar4,*(undefined4 *)(*(int *)(param_1 + 0xc) + DAT_0018d0fc)),
               iVar2 != 0)) {
              selectFurniture((GameStateRoulette *)param_1,iVar8);
            }
          }
          iVar8 = iVar8 + 1;
          lVar11 = lVar11 + 4;
        } while (iVar8 != 0xaa);
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
  }
  return;
}


