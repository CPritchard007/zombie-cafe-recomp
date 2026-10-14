/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cee94 CharacterDetails::heal */

/* CharacterDetails::heal(CharacterDetails*, ScreenElement*) */

void CharacterDetails::heal(CharacterDetails *param_1,ScreenElement *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = ZombieCafe::getToxin(*(ZombieCafe **)(param_1 + 0x78));
  if ((0 < iVar1) && (iVar1 = *(int *)(param_1 + 0x88), iVar1 != 0)) {
    if (*(int *)(iVar1 + 0x50) < 1) {
      iVar2 = __aeabi_fcmple(*(undefined4 *)(iVar1 + 0x40),0);
      if (iVar2 != 0) {
        return;
      }
      uVar3 = Character::getMaxEnergy();
      uVar4 = Character::getMaxEnergy();
      iVar2 = __aeabi_fcmplt(uVar3,0);
      if (iVar2 == 0) {
        iVar2 = __aeabi_fcmpgt(uVar3,uVar4);
        if (iVar2 != 0) {
          uVar3 = uVar4;
        }
      }
      else {
        uVar3 = 0;
      }
      *(undefined4 *)(iVar1 + 0x40) = uVar3;
    }
    else {
      uVar3 = __floatsisf((int)**(short **)(DAT_000cef50 + 0xceeb4));
      uVar4 = Character::getMaxEnergy();
      iVar2 = __aeabi_fcmplt(uVar3,0);
      if (iVar2 == 0) {
        iVar2 = __aeabi_fcmpgt(uVar3,uVar4);
        if (iVar2 != 0) {
          uVar3 = uVar4;
        }
      }
      else {
        uVar3 = 0;
      }
      *(undefined4 *)(iVar1 + 0x40) = uVar3;
      *(undefined4 *)(*(int *)(param_1 + 0x88) + 0x50) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x88) + 0x44) = 0;
    }
    ZombieCafe::spendToxin(*(ZombieCafe **)(param_1 + 0x78),1);
    *(undefined1 *)(*(int *)(param_1 + 0x78) + DAT_000cef54) = 1;
  }
  return;
}


