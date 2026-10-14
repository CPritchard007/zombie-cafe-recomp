/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011e9c4 GameStateCafe::onCookCommandBarBait */

/* GameStateCafe::onCookCommandBarBait(GameStateCafe*, Stove*) */

void GameStateCafe::onCookCommandBarBait(GameStateCafe *param_1,Stove *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  String *pSVar5;
  ZombieCafe *this;
  NoticeDialog *pNVar6;
  GameStateCafe *this_00;
  float extraout_s0;
  float fVar7;
  float extraout_s0_00;
  float extraout_s0_01;
  String aSStack_c0 [8];
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
  
  iVar2 = CapcomApp::getInstance();
  this = *(ZombieCafe **)(iVar2 + 4);
  this_00 = *(GameStateCafe **)(this + 8);
  if (this_00 == param_1) {
    iVar2 = ZombieCafe::checkZombieFlowerEvent();
    if (((iVar2 == 0) || (iVar2 = ZombieCafe::checkZombieFlowerEventTime(), iVar2 == 0)) ||
       (iVar2 = ZombieCafe::checkZombieFlowerEventLevel(this), iVar2 == 0)) {
      pNVar6 = *(NoticeDialog **)(param_1 + 0xd0);
      String::String(aSStack_c0,(char *)(DAT_0011ed2c + 0x11ea0c));
      Vector<String>::elementAt((int)aSStack_b8);
      NoticeDialog::show(pNVar6,aSStack_c0,aSStack_b8,0,0);
      String::~String(aSStack_b8);
      pSVar5 = aSStack_c0;
    }
    else {
      iVar2 = ZombieCafe::checkZombieFlowerPlantStateStart(this);
      if (iVar2 == 0) {
        iVar2 = ZombieCafe::checkZombieFlowerPlantStateFinish(this);
        pNVar6 = *(NoticeDialog **)(this_00 + 0xd0);
        if (iVar2 == 0) {
          String::String(aSStack_a0,(char *)(DAT_0011ed38 + 0x11ea84));
          Vector<String>::elementAt((int)aSStack_98);
          NoticeDialog::show(pNVar6,aSStack_a0,aSStack_98,0,0);
          String::~String(aSStack_98);
          pSVar5 = aSStack_a0;
        }
        else {
          String::String(aSStack_b0,(char *)(DAT_0011ed34 + 0x11ea54));
          Vector<String>::elementAt((int)aSStack_a8);
          NoticeDialog::show(pNVar6,aSStack_b0,aSStack_a8,0,0);
          String::~String(aSStack_a8);
          pSVar5 = aSStack_b0;
        }
      }
      else {
        if (param_2[0x2e] == (Stove)0x0) {
          return;
        }
        iVar2 = Stove::isDoneCooking(param_2);
        if (iVar2 == 0) {
          return;
        }
        uVar3 = getCookBaidExp(this_00,param_2);
        iVar2 = checkFlowerPlantTimeCheet(this_00);
        if ((iVar2 != 0) || (bVar1 = false, fVar7 = extraout_s0, 0 < *(short *)(this + 0x36c))) {
          fVar7 = (float)__divsf3(uVar3,DAT_0011ed3c);
          bVar1 = true;
          if (0 < *(short *)(this + 0x36c)) {
            *(short *)(this + 0x36c) = *(short *)(this + 0x36c) + -1;
          }
        }
        if ((param_2[0x2e] != (Stove)0x0) &&
           (iVar2 = Stove::isDoneCooking(param_2), fVar7 = extraout_s0_00, iVar2 != 0)) {
          *(undefined4 *)(param_2 + 100) = 0;
          param_2[0x2e] = (Stove)0x0;
          piVar4 = (int *)Stove::stopCooking(param_2);
          fVar7 = extraout_s0_01;
          if (piVar4 != (int *)0x0) {
            fVar7 = (float)(**(code **)(*piVar4 + 4))();
          }
        }
        ZombieCafe::addZombieFlowerPoint(this,fVar7);
        iVar2 = ZombieCafe::checkZombieFlowerPlantState(this);
        if (iVar2 != 0) {
          finishFlowerPlant(this_00);
        }
        String::String(aSStack_90);
        if (bVar1) {
          String::String(aSStack_88,(char *)(DAT_0011ed40 + 0x11eb62));
          String::String(aSStack_80,(char *)(DAT_0011ed44 + 0x11eb6c));
          String::operator+(aSStack_78,aSStack_88,aSStack_80);
          fVar7 = (float)ZombieCafe::getZombieFlowerPoint(this);
          String::valueOf(aSStack_70,fVar7);
          String::operator+(aSStack_68,aSStack_78,aSStack_70);
          String::String(aSStack_60,(char *)(DAT_0011ed48 + 0x11eb98));
          String::operator+(aSStack_58,aSStack_68,aSStack_60);
          String::operator=(aSStack_90,aSStack_58);
          String::~String(aSStack_58);
          String::~String(aSStack_60);
          String::~String(aSStack_68);
          String::~String(aSStack_70);
          String::~String(aSStack_78);
          String::~String(aSStack_80);
          pSVar5 = aSStack_88;
        }
        else {
          String::String(aSStack_50,(char *)(DAT_0011ed4c + 0x11ebdc));
          fVar7 = (float)ZombieCafe::getZombieFlowerPoint(this);
          String::valueOf(aSStack_48,fVar7);
          String::operator+(aSStack_40,aSStack_50,aSStack_48);
          String::String(aSStack_38,(char *)(DAT_0011ed50 + 0x11ebfe));
          String::operator+(aSStack_30,aSStack_40,aSStack_38);
          String::operator=(aSStack_90,aSStack_30);
          String::~String(aSStack_30);
          String::~String(aSStack_38);
          String::~String(aSStack_40);
          String::~String(aSStack_48);
          pSVar5 = aSStack_50;
        }
        String::~String(pSVar5);
        pNVar6 = *(NoticeDialog **)(this_00 + 0xd0);
        String::String(aSStack_20,aSStack_90);
        Vector<String>::elementAt((int)aSStack_28);
        NoticeDialog::show(pNVar6,aSStack_20,aSStack_28,0,0);
        String::~String(aSStack_28);
        String::~String(aSStack_20);
        pSVar5 = aSStack_90;
      }
    }
    String::~String(pSVar5);
  }
  return;
}


