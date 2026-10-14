/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00118c40 Stove::cookTimeRemaining */

/* Stove::cookTimeRemaining() */

uint __thiscall Stove::cookTimeRemaining(Stove *this)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 100);
  if ((uVar2 != 0) && (uVar2 = (uint)(byte)this[0x2e], uVar2 != 0)) {
    iVar1 = isDoneCooking(this);
    uVar2 = 0;
    if ((iVar1 == 0) && (iVar1 = isBurned(this), iVar1 == 0)) {
      iVar1 = FoodStack::getCookTimeSeconds(*(FoodStack **)(this + 100));
      uVar2 = iVar1 * 1000 - *(int *)(this + 0x70);
    }
  }
  return uVar2;
}


