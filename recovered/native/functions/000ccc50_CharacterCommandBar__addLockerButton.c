/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ccc50 CharacterCommandBar::addLockerButton */

/* CharacterCommandBar::addLockerButton(void (*)(void*, ScreenElement*), void*) */

void __thiscall
CharacterCommandBar::addLockerButton
          (CharacterCommandBar *this,_func_void_void_ptr_ScreenElement_ptr *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = enableButton(this,10,param_1,param_2);
  *(undefined1 *)(iVar1 + 0x86) = 0;
  return;
}


