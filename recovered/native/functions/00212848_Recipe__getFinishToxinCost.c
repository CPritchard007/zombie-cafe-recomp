/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00212848 Recipe::getFinishToxinCost */

/* Recipe::getFinishToxinCost(unsigned char, int) const */

undefined8 __thiscall Recipe::getFinishToxinCost(Recipe *this,uchar param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = getCookTimeSeconds(this,param_1);
  iVar2 = getSellPrice(this,param_1);
  iVar3 = getServings(this,param_1);
  iVar4 = getXp(this,param_1);
  uVar5 = __floatsisf(iVar3 * iVar2 + iVar4 * 10);
  uVar5 = __divsf3(uVar5,DAT_002128b0);
  uVar6 = __floatsisf(iVar1 - param_2);
  uVar5 = __mulsf3(uVar5,uVar6);
  uVar6 = __floatsisf(iVar1);
  __divsf3(uVar5,uVar6);
  iVar1 = __fixsfsi();
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  return CONCAT44(this,iVar1);
}


