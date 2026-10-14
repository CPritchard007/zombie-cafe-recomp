/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001dc5e0 HudElement::getButton */

/* HudElement::getButton(int) */

undefined4 __thiscall HudElement::getButton(HudElement *this,int param_1)

{
  HudElement *pHVar1;
  
  if (param_1 == 0x13) {
    pHVar1 = this + 0xa4;
  }
  else if (param_1 == 0x1a) {
    pHVar1 = this + 0xa0;
  }
  else if (param_1 == 0x1b) {
    pHVar1 = this + 0xa8;
  }
  else if (param_1 == 0x10) {
    pHVar1 = this + 0x90;
  }
  else if (param_1 == 0x11) {
    pHVar1 = this + 0x94;
  }
  else if (param_1 == 0x17) {
    pHVar1 = this + 0xec;
  }
  else if (param_1 == 0x18) {
    pHVar1 = this + 0xf0;
  }
  else if (param_1 == 0x12) {
    pHVar1 = this + 0x98;
  }
  else {
    if (param_1 != 0x16) {
      if (*(int *)(this + 0x70) + 1 <= param_1) {
        return 0;
      }
      return *(undefined4 *)(param_1 * 4 + *(int *)(this + 0x74));
    }
    pHVar1 = this + 0xe8;
  }
  return *(undefined4 *)pHVar1;
}


