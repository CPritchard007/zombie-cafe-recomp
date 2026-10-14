/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e7f38 LotteryDialog::birthNewCharacterAndZombie */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x001e804c) */
/* WARNING: Removing unreachable block (ram,0x001e804c) */
/* LotteryDialog::birthNewCharacterAndZombie(int) */

GameStateCafe * __thiscall
LotteryDialog::birthNewCharacterAndZombie(LotteryDialog *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  Character *pCVar3;
  CharacterInstance *this_00;
  GameStateCafe *pGVar4;
  int extraout_r1;
  int iVar5;
  int iVar6;
  CFPathFinder *pCVar7;
  int iVar8;
  int iVar9;
  
  do {
    iVar5 = 0;
    iVar8 = 0;
    do {
      iVar6 = iVar5 + param_1 * 0x2a8;
      if (*(int *)(this + iVar6 + 0x2b4) != 0) {
        iVar8 = iVar8 + *(int *)(this + DAT_001e8084 + iVar6);
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 != 0x2a8);
    iVar5 = 0;
    if (0 < iVar8 + 1) {
      uVar2 = arc4random();
      __aeabi_uidivmod(uVar2,iVar8 + 1);
      iVar5 = extraout_r1;
    }
    iVar6 = 0;
    iVar8 = 0;
    do {
      iVar1 = iVar6 + param_1 * 0x2a8;
      iVar9 = *(int *)(this + iVar1 + 0x2b4);
      if (iVar9 != 0) {
        iVar8 = iVar8 + *(int *)(this + DAT_001e8084 + iVar1);
      }
      if (iVar5 <= iVar8) goto LAB_001e7fb4;
      iVar6 = iVar6 + 4;
    } while (iVar6 != 0x2a8);
    iVar9 = 0;
LAB_001e7fb4:
    pCVar3 = (Character *)Cafe::createCustomer(*(int *)(*(int *)(this + 0x60) + 0x7e8));
    pCVar7 = *(CFPathFinder **)(*(int *)(*(int *)(this + 0x60) + 0x7e8) + 0x5c);
    this_00 = (CharacterInstance *)operator_new(0xdc);
    CharacterInstance::CharacterInstance(this_00,pCVar3,pCVar7);
    if (*(short *)(**(int **)(this_00 + 0x8c) + DAT_001e8088) != 0) {
      (**(code **)(*(int *)this_00 + 4))(this_00);
      pGVar4 = (GameStateCafe *)
               GameStateCafe::lotterySpawnCustomer(*(int *)(this + 100),SUB41(iVar9,0));
      GameStateCafe::completeInfect(*(CharacterInstance **)(this + 100),pGVar4);
      if (this[param_1 + 0x212] == (LotteryDialog)0x0) {
        iVar5 = 0;
        iVar8 = *(int *)(this + (param_1 + 0x9a) * 4 + 4);
      }
      else {
        iVar8 = 0;
        iVar5 = *(int *)(this + (param_1 + 0x9a) * 4 + 4);
      }
      recordCram(this,param_1,iVar9,iVar8,iVar5);
      if ((uint)param_1 < 4) {
        iVar5 = *(int *)(this + 0x60);
        switch(param_1) {
        case 0:
          iVar5 = *(int *)(iVar5 + 0x40);
          iVar8 = 8;
          break;
        case 1:
          iVar5 = *(int *)(iVar5 + 0x40);
          iVar8 = 9;
          break;
        case 2:
          iVar5 = *(int *)(iVar5 + 0x40);
          iVar8 = 10;
          break;
        case 3:
          iVar5 = *(int *)(iVar5 + 0x40);
          iVar8 = 0xb;
        }
        Quest::runQuest(iVar5,iVar8,(int *)0xffffffff);
      }
      return pGVar4;
    }
    (**(code **)(*(int *)this_00 + 4))(this_00);
  } while( true );
}


