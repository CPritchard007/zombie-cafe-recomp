/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ccc28 CharacterCommandBar::addColosseumAttackButton */

/* CharacterCommandBar::addColosseumAttackButton(void (*)(void*, ScreenElement*), void*) */

void __thiscall
CharacterCommandBar::addColosseumAttackButton
          (CharacterCommandBar *this,_func_void_void_ptr_ScreenElement_ptr *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = enableButton(this,0xb,param_1,param_2);
  *(undefined1 *)(iVar1 + 0x86) = 0;
  return;
}


