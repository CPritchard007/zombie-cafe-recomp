/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011bac8 GameStateCafe::setflowerPlantTime */

/* GameStateCafe::setflowerPlantTime() */

void __thiscall GameStateCafe::setflowerPlantTime(GameStateCafe *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(this + 0xc);
  uVar3 = *(undefined4 *)(*(int *)(this + 0x14) + 0xd8);
  uVar4 = *(undefined4 *)(*(int *)(this + 0x14) + 0xdc);
  iVar1 = __aeabi_dcmplt(*(undefined4 *)(iVar2 + 0x378),*(undefined4 *)(iVar2 + 0x37c),uVar3,uVar4);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar2 + 0x378) = uVar3;
    *(undefined4 *)(iVar2 + 0x37c) = uVar4;
  }
  return;
}


