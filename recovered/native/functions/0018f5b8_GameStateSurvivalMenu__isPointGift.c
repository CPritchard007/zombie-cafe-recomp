/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018f5b8 GameStateSurvivalMenu::isPointGift */

/* GameStateSurvivalMenu::isPointGift() */

undefined8 __thiscall GameStateSurvivalMenu::isPointGift(GameStateSurvivalMenu *this)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (uint *)**(int **)(DAT_0018f60c + 0x18f5d0);
  iVar2 = 0;
  for (iVar3 = 0; iVar3 < **(int **)(DAT_0018f608 + 0x18f5c4); iVar3 = iVar3 + 1) {
    iVar2 = iVar2 + (((int)*(uint *)(this + 0xac) >> 0x1f) - ((int)*puVar1 >> 0x1f)) +
                    (uint)(*puVar1 <= *(uint *)(this + 0xac));
    puVar1 = puVar1 + 0x24;
  }
  return CONCAT44(this,(uint)(*(int *)(*(int *)(this + 0xc) + DAT_0018f610) < iVar2));
}


