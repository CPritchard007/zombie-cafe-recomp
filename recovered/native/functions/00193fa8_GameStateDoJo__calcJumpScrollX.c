/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00193fa8 GameStateDoJo::calcJumpScrollX */

/* GameStateDoJo::calcJumpScrollX(int) */

void __thiscall GameStateDoJo::calcJumpScrollX(GameStateDoJo *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  GameStateDoJo *pGVar4;
  int iVar5;
  
  if (param_1 == 0) {
    iVar5 = 0;
    pGVar4 = this;
    iVar3 = iVar5;
    do {
      if (*(int *)(pGVar4 + 0xe0) != 0) {
        iVar3 = iVar5;
      }
      iVar5 = iVar5 + 1;
      pGVar4 = pGVar4 + 4;
    } while (iVar5 != 0xde);
    iVar1 = SmDev();
    uVar2 = __floatsisf(iVar3);
    iVar5 = DAT_0019400c;
    __mulsf3(uVar2,*(undefined4 *)(DAT_00194008 + iVar1 * 4 + 0x193ff8));
    iVar3 = __fixsfsi();
    if (*(int *)(*(int *)(this + 0x14) + 0xc) < iVar3) {
      uVar2 = __floatsisf();
      *(undefined4 *)(this + iVar5) = uVar2;
    }
    else {
      *(undefined4 *)(this + iVar5) = 0;
    }
  }
  else {
    *(undefined4 *)(this + DAT_0019400c) = 0;
  }
  return;
}


