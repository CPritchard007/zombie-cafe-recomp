/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0020f4d4 RandomCafeElement::RandomCafeElement */

/* RandomCafeElement::RandomCafeElement(GameStateMap*) */

RandomCafeElement * __thiscall
RandomCafeElement::RandomCafeElement(RandomCafeElement *this,GameStateMap *param_1)

{
  int iVar1;
  
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  iVar1 = DAT_0020f4f0;
  *(GameStateMap **)(this + 0x60) = param_1;
  *(int *)this = *(int *)(iVar1 + 0x20f4ea) + 8;
  return this;
}


