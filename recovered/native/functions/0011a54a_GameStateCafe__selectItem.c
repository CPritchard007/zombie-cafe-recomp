/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011a54a GameStateCafe::selectItem */

/* GameStateCafe::selectItem(int) */

void __thiscall GameStateCafe::selectItem(GameStateCafe *this,int param_1)

{
  int iVar1;
  
  if (-1 < *(short *)(this + 0x174)) {
    iVar1 = ScreenElement::getChildAt
                      (*(ScreenElement **)(this + 0x88),(int)*(short *)(this + 0x174));
    *(undefined1 *)(iVar1 + 100) = 0;
  }
  if (-1 < param_1) {
    iVar1 = ScreenElement::getChildAt(*(ScreenElement **)(this + 0x88),param_1);
    *(undefined1 *)(iVar1 + 100) = 1;
  }
  *(short *)(this + 0x174) = (short)param_1;
  return;
}


