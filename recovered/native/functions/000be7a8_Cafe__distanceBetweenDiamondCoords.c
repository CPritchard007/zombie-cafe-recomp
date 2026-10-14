/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000be7a8 Cafe::distanceBetweenDiamondCoords */

/* Cafe::distanceBetweenDiamondCoords(long, long) */

int Cafe::distanceBetweenDiamondCoords(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = (param_1 >> 0x10) - (param_2 >> 0x10);
  uVar2 = iVar4 >> 0x1f;
  iVar1 = (int)(short)param_1 - (int)(short)param_2;
  uVar3 = iVar1 >> 0x1f;
  return (iVar4 + uVar2 ^ uVar2) + (iVar1 + uVar3 ^ uVar3);
}


