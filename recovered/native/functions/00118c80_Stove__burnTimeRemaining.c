/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00118c80 Stove::burnTimeRemaining */

/* Stove::burnTimeRemaining() */

undefined8 __thiscall Stove::burnTimeRemaining(Stove *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = *(uint *)(this + 100);
  if ((uVar5 != 0) && (uVar5 = (uint)(byte)this[0x2e], uVar5 != 0)) {
    iVar1 = isBurned(this);
    uVar5 = 0;
    if (iVar1 == 0) {
      if (*(int *)(this + 0x7c) == 0) {
        iVar1 = FoodStack::getBurnTimeSeconds(*(FoodStack **)(this + 100));
        iVar2 = FoodStack::getCookTimeSeconds(*(FoodStack **)(this + 100));
        iVar1 = (iVar1 - iVar2) * 1000;
        iVar3 = *(int *)(this + 0x70) - *(int *)(this + 0x6c);
      }
      else {
        iVar3 = *(int *)(this + 0x70);
        iVar6 = *(int *)(this + 0x6c);
        iVar1 = FoodStack::getBurnTimeSeconds(*(FoodStack **)(this + 100));
        iVar2 = FoodStack::getCookTimeSeconds(*(FoodStack **)(this + 100));
        psVar4 = *(short **)(DAT_00118d34 + 0x118cc2);
        if (iVar6 - iVar3 <= ((iVar1 - iVar2) - (int)*psVar4) * 1000) {
          iVar1 = FoodStack::getBurnTimeSeconds(*(FoodStack **)(this + 100));
          uVar5 = iVar1 * 1000 - *(int *)(this + 0x6c);
          goto LAB_00118d28;
        }
        iVar1 = FoodStack::getBurnTimeSeconds(*(FoodStack **)(this + 100));
        iVar3 = iVar1 * 1000 - *(int *)(this + 0x6c);
        iVar1 = FoodStack::getBurnTimeSeconds(*(FoodStack **)(this + 100));
        iVar2 = FoodStack::getCookTimeSeconds(*(FoodStack **)(this + 100));
        iVar1 = ((iVar1 - iVar2) - (int)*psVar4) * 1000 +
                (*(int *)(this + 0x70) - *(int *)(this + 0x6c));
      }
      uVar5 = iVar1 + iVar3;
    }
  }
LAB_00118d28:
  return CONCAT44(this,uVar5);
}


