/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010d310 GameStateAmpouleRaid::setPlayerZombieCafePos */

/* GameStateAmpouleRaid::setPlayerZombieCafePos() */

undefined8 GameStateAmpouleRaid::setPlayerZombieCafePos(void)

{
  short sVar1;
  int iVar2;
  int in_r0;
  undefined4 uVar3;
  code *in_r1;
  uint uVar4;
  int *piVar5;
  int iVar6;
  code *local_1c;
  
  iVar2 = DAT_0010d35c;
  iVar6 = 0;
  local_1c = in_r1;
  do {
    uVar4 = (uint)*(byte *)(in_r0 + iVar6 + 300);
    if (uVar4 != 0xff) {
      piVar5 = *(int **)(uVar4 * 4 + *(int *)(in_r0 + 0x108));
      sVar1 = *(short *)(iVar2 + 0x10d330 + iVar6 * 4);
      *(short *)(piVar5 + 0xb) = sVar1;
      local_1c = *(code **)(*piVar5 + 0xc);
      uVar3 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(in_r0 + 100),(int)sVar1);
      (*local_1c)(piVar5,uVar3);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 != 6);
  return CONCAT44(local_1c,in_r0);
}


