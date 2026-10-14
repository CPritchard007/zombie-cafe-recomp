/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00179230 GameStatePowerup::execPowerup */

/* GameStatePowerup::execPowerup() */

void GameStatePowerup::execPowerup(void)

{
  int in_r0;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float extraout_s0;
  
  iVar3 = DAT_001792dc;
  iVar2 = *(int *)(*(int *)(in_r0 + 0x490) + 0x8c);
  *(int *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) + *(int *)(in_r0 + DAT_001792dc);
  iVar2 = *(int *)(*(int *)(in_r0 + 0x490) + 0x8c);
  *(int *)(iVar2 + 0x2c) = *(int *)(iVar2 + 0x2c) + *(int *)(in_r0 + 0x4c8);
  iVar2 = Character::checkLevelUp(*(Character **)(*(int *)(in_r0 + 0x490) + 0x8c));
  if ((iVar2 != 0) || (*(int *)(in_r0 + iVar3) != 0)) {
    iVar3 = *(int *)(*(int *)(in_r0 + 0x490) + 0x8c);
    uVar1 = Character::getMaxEnergy();
    *(undefined4 *)(iVar3 + 0x40) = uVar1;
    for (iVar3 = 0; iVar3 < *(int *)(in_r0 + 0x70) + 1; iVar3 = iVar3 + 1) {
      iVar2 = *(int *)(iVar3 * 4 + *(int *)(in_r0 + 0x74));
      if (iVar2 == *(int *)(*(int *)(in_r0 + 0x490) + 0x8c)) {
        Vector<float>::insertElementAt
                  ((Vector<float> *)(in_r0 + 0x60),extraout_s0,*(int *)(iVar2 + 0x40));
        iVar2 = iVar3 + 1;
        if (iVar2 < 0) {
          return;
        }
        if (*(int *)(in_r0 + 100) < iVar2) {
          return;
        }
        *(undefined4 *)(iVar2 * 4 + *(int *)(in_r0 + 0x68)) = 0;
        iVar3 = iVar3 + 2;
        if ((-1 < iVar3) && (iVar3 <= *(int *)(in_r0 + 100))) {
          FUN_00177eec((Vector<float> *)(in_r0 + 0x60),iVar3,0xffffffff);
        }
        *(int *)(in_r0 + 100) = *(int *)(in_r0 + 100) + -1;
        return;
      }
    }
  }
  return;
}


