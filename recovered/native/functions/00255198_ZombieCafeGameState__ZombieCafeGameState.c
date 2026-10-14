/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00255198 ZombieCafeGameState::ZombieCafeGameState */

/* ZombieCafeGameState::ZombieCafeGameState() */

ZombieCafeGameState * __thiscall ZombieCafeGameState::ZombieCafeGameState(ZombieCafeGameState *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  this[4] = (ZombieCafeGameState)0x0;
  this[5] = (ZombieCafeGameState)0x0;
  iVar1 = DAT_002551f4;
  *(int *)this = *(int *)(DAT_002551ec + 0x2551aa) + 8;
  L_PrintLog((char *)(DAT_002551f8 + 0x2551bc),(char *)(iVar1 + 0x2551b8));
  iVar3 = CapcomApp::getInstance();
  *(int *)(this + 8) = iVar3;
  iVar2 = DAT_00255200;
  iVar1 = DAT_002551fc;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(iVar3 + 4);
  this[0x10] = **(ZombieCafeGameState **)(DAT_00255204 + 0x2551d6);
  L_PrintLog((char *)(iVar2 + 0x2551d2),(char *)(iVar1 + 0x2551d4));
  return this;
}


