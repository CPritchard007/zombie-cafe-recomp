/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00195e58 GameStateDoJo::tickStepPreview */

/* GameStateDoJo::tickStepPreview(long) */

void GameStateDoJo::tickStepPreview(long param_1)

{
  int iVar1;
  GameStateCafe *this;
  GameStateLoading *this_00;
  ZCImageButton *this_01;
  ConfirmDialog *pCVar2;
  String *this_02;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  CapcomGame *this_03;
  long lVar10;
  NoticeDialog *pNVar11;
  float in_s0;
  float extraout_s0;
  float extraout_s0_00;
  float in_s1;
  float extraout_s1;
  String aSStack_b8 [8];
  String aSStack_b0 [8];
  String aSStack_a8 [8];
  String aSStack_a0 [8];
  String aSStack_98 [8];
  String aSStack_90 [8];
  String aSStack_88 [8];
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
  
  iVar1 = DAT_001962d0;
  iVar8 = DAT_001961f4;
  iVar6 = DAT_001961f0 + 0x195e6a;
  if ((*(char *)(*(int *)(param_1 + 0x710) + 0x14) == '\0') &&
     (*(char *)(*(int *)(param_1 + 0x700) + 0x14) == '\0')) {
    iVar9 = *(int *)(param_1 + 0xc);
    iVar5 = *(int *)(iVar9 + DAT_001961f4);
    if ((iVar5 == 0) ||
       ((*(int *)(iVar9 + 0x4b8) != 0 ||
        ((int)**(short **)(iVar6 + DAT_001961f8) < *(int *)(iVar9 + DAT_001961fc))))) {
      if ((*(char *)(iVar9 + DAT_001962d0) == '\0') && (*(int *)(iVar9 + 0x4b8) != 0)) {
        if ((int)**(short **)(iVar6 + DAT_001961f8) < *(int *)(iVar9 + DAT_001961fc)) {
          uVar4 = __floatsisf((iVar5 >> 0x10) - (*(int *)(iVar9 + 0x4b8) >> 0x10));
          *(undefined4 *)(param_1 + 0x6e0) = uVar4;
          *(undefined1 *)(iVar9 + iVar1) = 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x6e0) = 0;
        }
      }
    }
    else {
      uVar4 = 0x3f800000;
      iVar1 = ZCImageButton::contains
                        (*(ZCImageButton **)(param_1 + 0xb8),iVar5 >> 0x10,(int)(short)iVar5,in_s0,
                         in_s1);
      if (iVar1 == 0) {
        this_01 = *(ZCImageButton **)(param_1 + 0xbc);
        if ((this_01[0x14] != (ZCImageButton)0x0) && (this_01[0x86] != (ZCImageButton)0x0)) {
          iVar8 = *(int *)(*(int *)(param_1 + 0xc) + iVar8);
          uVar4 = 0x3f800000;
          iVar8 = ZCImageButton::contains
                            (this_01,iVar8 >> 0x10,(int)(short)iVar8,extraout_s0,extraout_s1);
          if (iVar8 != 0) {
            ZombieCafe::playEffect(*(int *)(param_1 + 0xc),extraout_s0_00);
            iVar8 = DAT_00196200;
            if (*(char *)(param_1 + 0x6d0) == '\0') {
              if (*(int *)(param_1 + DAT_00196200) <=
                  *(int *)(*(ZombieCafe **)(param_1 + 0xc) + DAT_00196228)) {
                buyConfirmed((GameStateDoJo *)param_1);
                return;
              }
              pNVar11 = *(NoticeDialog **)(param_1 + 0x710);
              Vector<String>::elementAt((int)aSStack_28);
              Vector<String>::elementAt((int)aSStack_20);
              NoticeDialog::show(pNVar11,aSStack_28,aSStack_20,0,0);
              String::~String(aSStack_20);
              this_02 = aSStack_28;
            }
            else {
              iVar1 = ZombieCafe::getToxin(*(ZombieCafe **)(param_1 + 0xc));
              if (iVar1 < *(int *)(param_1 + iVar8)) {
                pNVar11 = *(NoticeDialog **)(param_1 + 0x710);
                Vector<String>::elementAt((int)aSStack_b8);
                Vector<String>::elementAt((int)aSStack_b0);
                NoticeDialog::show(pNVar11,aSStack_b8,aSStack_b0,0,0);
                String::~String(aSStack_b0);
                this_02 = aSStack_b8;
              }
              else {
                uVar4 = *(undefined4 *)(iVar6 + DAT_0019621c);
                uVar7 = *(undefined4 *)(iVar6 + DAT_00196220);
                if (*(char *)(*(int *)(param_1 + 0x30) + 0x36) == '\0') {
                  pCVar2 = *(ConfirmDialog **)(param_1 + 0x700);
                  Vector<String>::elementAt((int)aSStack_60);
                  String::valueOf((int)aSStack_58);
                  String::operator+(aSStack_50,aSStack_60,aSStack_58);
                  Vector<String>::elementAt((int)aSStack_48);
                  String::operator+(aSStack_40,aSStack_50,aSStack_48);
                  Vector<String>::elementAt((int)aSStack_38);
                  Vector<String>::elementAt((int)aSStack_30);
                  ConfirmDialog::show(pCVar2,aSStack_40,aSStack_38,aSStack_30,uVar4,uVar7,param_1,0,
                                      0);
                  String::~String(aSStack_30);
                  String::~String(aSStack_38);
                  String::~String(aSStack_40);
                  String::~String(aSStack_48);
                  String::~String(aSStack_50);
                  String::~String(aSStack_58);
                  this_02 = aSStack_60;
                }
                else {
                  pCVar2 = *(ConfirmDialog **)(param_1 + 0x700);
                  Vector<String>::elementAt((int)aSStack_a8);
                  String::valueOf((int)aSStack_a0);
                  String::operator+(aSStack_98,aSStack_a8,aSStack_a0);
                  Vector<String>::elementAt((int)aSStack_90);
                  String::operator+(aSStack_88,aSStack_98,aSStack_90);
                  String::String(aSStack_80,(char *)(DAT_00196224 + 0x195ffa));
                  String::operator+(aSStack_78,aSStack_88,aSStack_80);
                  Vector<String>::elementAt((int)aSStack_70);
                  Vector<String>::elementAt((int)aSStack_68);
                  ConfirmDialog::show(pCVar2,aSStack_78,aSStack_70,aSStack_68,uVar4,uVar7,param_1,0,
                                      0);
                  String::~String(aSStack_68);
                  String::~String(aSStack_70);
                  String::~String(aSStack_78);
                  String::~String(aSStack_80);
                  String::~String(aSStack_88);
                  String::~String(aSStack_90);
                  String::~String(aSStack_98);
                  String::~String(aSStack_a0);
                  this_02 = aSStack_a8;
                }
              }
            }
            String::~String(this_02);
            return;
          }
        }
        iVar8 = 0;
        lVar10 = param_1;
        do {
          piVar3 = *(int **)(lVar10 + 0x618);
          if ((piVar3 != (int *)0x0) &&
             (iVar1 = (**(code **)(*piVar3 + 0x10))
                                (piVar3,*(undefined4 *)(*(int *)(param_1 + 0xc) + DAT_001961f4),
                                 *(int *)(param_1 + 0xc),*(code **)(*piVar3 + 0x10),uVar4),
             iVar1 != 0)) {
            selectCharacter((GameStateDoJo *)param_1,iVar8,true);
          }
          iVar8 = iVar8 + 1;
          lVar10 = lVar10 + 4;
        } while (iVar8 != 0x14);
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


