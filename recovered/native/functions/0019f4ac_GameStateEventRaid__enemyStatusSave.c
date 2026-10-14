/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019f4ac GameStateEventRaid::enemyStatusSave */

/* GameStateEventRaid::enemyStatusSave() */

void __thiscall GameStateEventRaid::enemyStatusSave(GameStateEventRaid *this)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 uVar4;
  undefined4 extraout_r1_00;
  CharacterInstance *this_00;
  int iVar5;
  ZombieCafe *this_01;
  int *piVar6;
  int iVar7;
  int local_30;
  bool local_28;
  
  iVar5 = *(int *)(this + 0xf4);
  ZombieCafe::initEventRaid_enemyInfo(*(ZombieCafe **)(this + 0xc));
  local_30 = 0;
  uVar4 = extraout_r1;
  for (iVar7 = 0; iVar7 < iVar5 + 1; iVar7 = iVar7 + 1) {
    this_00 = *(CharacterInstance **)(iVar7 * 4 + *(int *)(this + 0xf8));
    piVar6 = *(int **)(this_00 + 0x8c);
    iVar2 = __fixsfsi(piVar6[0x10],uVar4);
    sVar1 = *(short *)(*piVar6 + DAT_0019f54c);
    CharacterInstance::getScale(this_00);
    uVar4 = **(undefined4 **)(DAT_0019f550 + 0x19f4f2);
    if ((iVar2 != 0) && (sVar1 != 0)) {
      this_01 = *(ZombieCafe **)(this + 0xc);
      iVar3 = __aeabi_fcmpeq();
      local_28 = iVar3 == 0 || sVar1 == 0;
      ZombieCafe::setEventRaid_enemyInfo(this_01,local_30,sVar1,local_28,iVar2);
      local_30 = local_30 + 1;
      uVar4 = extraout_r1_00;
    }
  }
  return;
}


