/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010df34 GameStateAmpouleRaid::tickWinDemo */

/* GameStateAmpouleRaid::tickWinDemo(long) */

void GameStateAmpouleRaid::tickWinDemo(long param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  AmpouleRaidRewardScreen *this;
  FurnitureData *pFVar6;
  short *psVar7;
  undefined4 uVar8;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (4000 < *(int *)(param_1 + 0x44)) {
    *(undefined1 *)(param_1 + 0x20) = 7;
    iVar2 = ZombieCafe::getAmpouleRaid_themeID(*(ZombieCafe **)(param_1 + 0xc));
    iVar3 = ZombieCafe::getAmpouleRaid_cafeLevel(*(ZombieCafe **)(param_1 + 0xc));
    ZombieCafe::setAmpouleRaid_cafeLevelNext
              (*(ZombieCafe **)(param_1 + 0xc),(short)((uint)((iVar3 + 1) * 0x10000) >> 0x10));
    iVar4 = ZombieCafe::isAmpouleRaid_FirstHalf();
    if (iVar4 == 0) {
      iVar2 = *(int *)(*(int *)(DAT_0010e0c4 + 0x10df7c) + iVar2 * 8 + 4);
    }
    else {
      iVar2 = *(int *)(*(int *)(DAT_0010e0c4 + 0x10df7c) + iVar2 * 8);
    }
    psVar7 = (short *)(iVar2 + iVar3 * 0x10);
    sVar1 = *psVar7;
    iVar4 = *(int *)(psVar7 + 2);
    iVar2 = *(int *)(psVar7 + 4);
    if ((sVar1 != 1) || (iVar5 = iVar4, iVar4 == -1)) {
      iVar5 = rewardAmpouleLottery((GameStateAmpouleRaid *)param_1,(short)iVar3);
    }
    *(undefined1 *)(param_1 + 0x20) = 5;
    pFVar6 = *(FurnitureData **)(iVar5 * 4 + *(int *)(*(int *)(param_1 + 100) + 0x94));
    *(FurnitureData **)(param_1 + 0x1c) = pFVar6;
    if (pFVar6 != (FurnitureData *)0x0) {
      FurnitureDialog::setFurnitureData(*(FurnitureDialog **)(param_1 + 0x18),pFVar6);
      FurnitureDialog::layout(*(FurnitureDialog **)(param_1 + 0x18));
      uVar8 = *(undefined4 *)(param_1 + 0x18);
      String::String(aSStack_20,0);
      String::String(aSStack_28,(char *)(DAT_0010e0c8 + 0x10dfdc));
      FurnitureDialog::show(uVar8,aSStack_20,aSStack_28,0,0,1);
      String::~String(aSStack_28);
      String::~String(aSStack_20);
      (**(code **)(**(int **)(param_1 + 0x18) + 0x20))(*(int **)(param_1 + 0x18),0);
      CCOptions::SetInt(*(CCOptions **)(*(int *)(param_1 + 0xc) + 0xa00),
                        (void *)(DAT_0010e0cc + 0x10e016),
                        *(char **)(*(int *)(param_1 + 0x1c) + 0x24),*(int *)(param_1 + 0x1c));
    }
    iVar3 = ZombieCafe::getAmpouleRaid_cafeLevel(*(ZombieCafe **)(param_1 + 0xc));
    ZombieCafe::addAmpouleRaid_cafeLevel(*(ZombieCafe **)(param_1 + 0xc));
    ZombieCafe::setAmpouleRaid_status(*(ZombieCafe **)(param_1 + 0xc),2);
    ZombieCafe::save();
    this = (AmpouleRaidRewardScreen *)operator_new(0xd0);
    AmpouleRaidRewardScreen::AmpouleRaidRewardScreen(this,(int)sVar1,iVar4,iVar2,iVar3 + 1,true);
    *(AmpouleRaidRewardScreen **)(param_1 + 0x14) = this;
    (**(code **)(*(int *)this + 0x1c))(this,0x12);
    iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x10);
    (**(code **)(**(int **)(param_1 + 0x14) + 0x14))
              (*(int **)(param_1 + 0x14),(iVar2 >> 0x10) - (iVar2 >> 0x1f) >> 1,
               (int)(short)iVar2 / 2);
    ScreenElement::setOrder
              (*(ScreenElement **)(param_1 + 0x14),(int)**(char **)(DAT_0010e0d0 + 0x10e086));
    (**(code **)(**(int **)(param_1 + 0x6c) + 0x2c))
              (*(int **)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x14));
    sendAmpouleRaidResult((GameStateAmpouleRaid *)param_1,0,0,iVar3);
  }
  return;
}


