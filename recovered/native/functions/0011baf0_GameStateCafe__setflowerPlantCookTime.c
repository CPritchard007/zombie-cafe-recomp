/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011baf0 GameStateCafe::setflowerPlantCookTime */

/* GameStateCafe::setflowerPlantCookTime() */

void __thiscall GameStateCafe::setflowerPlantCookTime(GameStateCafe *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(this + 0xc);
  uVar3 = *(undefined4 *)(*(int *)(this + 0x14) + 0xd8);
  uVar4 = *(undefined4 *)(*(int *)(this + 0x14) + 0xdc);
  iVar1 = __aeabi_dcmplt(*(undefined4 *)(iVar2 + 0x370),*(undefined4 *)(iVar2 + 0x374),uVar3,uVar4);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar2 + 0x370) = uVar3;
    *(undefined4 *)(iVar2 + 0x374) = uVar4;
  }
  return;
}


