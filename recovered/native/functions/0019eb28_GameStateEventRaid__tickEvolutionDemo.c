/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019eb28 GameStateEventRaid::tickEvolutionDemo */

/* GameStateEventRaid::tickEvolutionDemo() */

void __thiscall GameStateEventRaid::tickEvolutionDemo(GameStateEventRaid *this)

{
  GameStateEventRaid *pGVar1;
  
  this[0x18] = (GameStateEventRaid)0x6;
  pGVar1 = this + 0x94;
  CharacterEvolution::setCharacter
            (*(undefined4 *)pGVar1,*(undefined4 *)(this + 0x16c),*(undefined4 *)(this + 0x154),
             *(undefined4 *)(this + 0x158),*(undefined4 *)(this + 0x15c),
             *(undefined4 *)(this + 0x160),*(undefined4 *)(this + 0x164),
             *(undefined4 *)(this + 0x168));
  ScreenElement::setOrder(*(ScreenElement **)pGVar1,(int)**(char **)(DAT_0019eb88 + 0x19eb72));
  (**(code **)(**(int **)pGVar1 + 0x20))(*(int **)pGVar1,1);
  return;
}


