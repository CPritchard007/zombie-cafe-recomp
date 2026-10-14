/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b5434 GameStateEventRaid3::setPlayerZombieCafePos */

/* GameStateEventRaid3::setPlayerZombieCafePos() */

undefined8 GameStateEventRaid3::setPlayerZombieCafePos(void)

{
  short sVar1;
  int in_r0;
  long lVar2;
  undefined4 uVar3;
  code *in_r1;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  code *local_1c;
  
  iVar7 = 0;
  iVar8 = DAT_001b54ac + 0x1b5440;
  local_1c = in_r1;
  do {
    uVar5 = (uint)*(byte *)(in_r0 + iVar7 + 0x154);
    if (uVar5 != 0xff) {
      piVar6 = *(int **)(uVar5 * 4 + *(int *)(in_r0 + 0x130));
      iVar4 = iVar8 + (*(int *)(in_r0 + 0x30) * 0xc + iVar7) * 8;
      lVar2 = Cafe::diamondToStaggeredCoords
                        (**(int **)(DAT_001b54b0 + 0x1b5462) - *(int *)(iVar4 + 0x14),
                         **(int **)(DAT_001b54b4 + 0x1b5474) + *(int *)(iVar4 + 0x18));
      sVar1 = Cafe::staggeredCoordsToIndex(lVar2);
      *(short *)(piVar6 + 0xb) = sVar1;
      local_1c = *(code **)(*piVar6 + 0xc);
      uVar3 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(in_r0 + 0x84),(int)sVar1);
      (*local_1c)(piVar6,uVar3);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 6);
  return CONCAT44(local_1c,in_r0);
}


