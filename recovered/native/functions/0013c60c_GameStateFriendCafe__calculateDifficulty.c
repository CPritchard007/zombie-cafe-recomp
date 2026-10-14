/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013c60c GameStateFriendCafe::calculateDifficulty */

/* GameStateFriendCafe::calculateDifficulty(Character*) */

void __thiscall
GameStateFriendCafe::calculateDifficulty(GameStateFriendCafe *this,Character *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  float __x;
  float __x_00;
  
  uVar7 = *(undefined4 *)(param_1 + 0x40);
  uVar4 = Character::getMaxEnergy();
  uVar4 = __divsf3(uVar7,uVar4);
  uVar7 = __floatsisf((int)*(short *)(*(int *)param_1 + DAT_0013c70c));
  iVar5 = Character::getRareValue(param_1);
  iVar8 = DAT_0013c710 + 0x13c64c;
  uVar7 = __mulsf3(uVar7,*(undefined4 *)(iVar8 + *(int *)(param_1 + 0x28) * 0xc + iVar5 * 0xe10 + 8)
                  );
  roundf(__x);
  iVar5 = Character::getRareValue(param_1);
  iVar6 = Character::getSameZombiePowerupNum(param_1);
  sVar1 = __fixsfsi(uVar7);
  iVar9 = DAT_0013c714 + 0x13c680;
  sVar2 = __fixsfsi(*(undefined4 *)(iVar9 + iVar6 * 0xc + iVar5 * 0x3c + 0x78));
  uVar7 = __floatsisf((int)*(short *)(*(int *)param_1 + DAT_0013c718));
  iVar5 = Character::getRareValue(param_1);
  uVar7 = __mulsf3(uVar7,*(undefined4 *)(iVar8 + *(int *)(param_1 + 0x28) * 0xc + iVar5 * 0xe10 + 4)
                  );
  roundf(__x_00);
  iVar5 = Character::getRareValue(param_1);
  iVar6 = Character::getSameZombiePowerupNum(param_1);
  __addsf3(uVar7,*(undefined4 *)(iVar9 + iVar6 * 0xc + iVar5 * 0x3c + 0x74));
  sVar3 = __fixsfsi();
  uVar7 = __floatsisf((int)(short)(sVar1 + sVar2) + (int)sVar3);
  uVar4 = __mulsf3(uVar4,uVar7);
  __divsf3(uVar4,DAT_0013c71c);
  return;
}


