/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017f4b2 GameStateRaid::isCenteredOnTile */

/* GameStateRaid::isCenteredOnTile(CafeObject*) */

int __thiscall GameStateRaid::isCenteredOnTile(GameStateRaid *this,CafeObject *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  sVar1 = *(short *)(param_1 + 6);
  iVar3 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x78),(int)*(short *)(param_1 + 0x2c));
  iVar3 = (int)sVar1 - (iVar3 >> 0x10);
  uVar4 = iVar3 >> 0x1f;
  iVar5 = 0;
  if ((int)(iVar3 + uVar4 ^ uVar4) < 0x1e) {
    sVar1 = *(short *)(param_1 + 4);
    sVar2 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x78),(int)*(short *)(param_1 + 0x2c));
    uVar4 = (int)sVar1 - (int)sVar2 >> 0x1f;
    uVar4 = ((int)sVar1 - (int)sVar2) + uVar4 ^ uVar4;
    iVar5 = (uint)(uVar4 < 0x1e) - ((int)uVar4 >> 0x1f);
  }
  return iVar5;
}


