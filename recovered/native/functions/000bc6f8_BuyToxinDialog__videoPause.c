/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bc6f8 BuyToxinDialog::videoPause */

/* BuyToxinDialog::videoPause(void*) */

void BuyToxinDialog::videoPause(void *param_1)

{
  int iVar1;
  ZombieCafeGameState *this;
  int iVar2;
  
  if (*(int *)((int)param_1 + 0x6c) == 0) {
    iVar2 = *(int *)(*(int *)((int)param_1 + 0x68) + 8);
    this = (ZombieCafeGameState *)operator_new(0x1c);
    ZombieCafeGameState::ZombieCafeGameState(this);
    iVar1 = DAT_000bc74c;
    *(int *)(this + 0x14) = iVar2;
    *(int *)this = *(int *)(iVar1 + 0xbc720) + 8;
    *(char *)(iVar2 + 4) = *(char *)(iVar2 + 4) + '\x01';
    this[0x18] = (ZombieCafeGameState)0x0;
    *(ZombieCafeGameState **)((int)param_1 + 0x6c) = this;
    this[4] = (ZombieCafeGameState)((char)this[4] + '\x01');
  }
  else {
    *(undefined4 *)(*(int *)((int)param_1 + 0x6c) + 0x14) =
         *(undefined4 *)(*(int *)((int)param_1 + 0x68) + 8);
  }
  CapcomGame::setNextState
            (*(CapcomGame **)((int)param_1 + 0x68),*(GameState **)((int)param_1 + 0x6c));
  return;
}


