/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011bb18 GameStateCafe::checkFlowerPlantTimeCheet */

/* GameStateCafe::checkFlowerPlantTimeCheet() */

undefined4 __thiscall GameStateCafe::checkFlowerPlantTimeCheet(GameStateCafe *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  Platform::getAppTime();
  __fixdfdi();
  uVar4 = __floatdidf();
  uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
  iVar3 = *(int *)(this + 0xc);
  __subdf3((int)uVar4,uVar2,*(undefined4 *)(iVar3 + 0x378),*(undefined4 *)(iVar3 + 0x37c));
  uVar5 = __fixdfdi();
  iVar1 = (int)((ulonglong)uVar5 >> 0x20);
  if ((iVar1 + 1 < 0 == SCARRY4(iVar1,1)) && ((iVar1 != -1 || (DAT_0011bb80 <= (uint)uVar5)))) {
    __subdf3((int)uVar4,uVar2,*(undefined4 *)(iVar3 + 0x370),*(undefined4 *)(iVar3 + 0x374));
    uVar4 = __fixdfdi();
    iVar1 = (int)((ulonglong)uVar4 >> 0x20);
    uVar2 = 1;
    if ((iVar1 + 1 < 0 == SCARRY4(iVar1,1)) && ((iVar1 != -1 || (DAT_0011bb80 <= (uint)uVar4)))) {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


