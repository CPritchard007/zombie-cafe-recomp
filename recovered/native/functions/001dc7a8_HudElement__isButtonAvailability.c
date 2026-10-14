/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001dc7a8 HudElement::isButtonAvailability */

/* HudElement::isButtonAvailability(int) */

uint __thiscall HudElement::isButtonAvailability(HudElement *this,int param_1)

{
  HudElement *pHVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (param_1 == 0xf) {
    return 0;
  }
  if (param_1 == 0x13) {
    pHVar1 = this + 0xa4;
  }
  else if (param_1 == 0x1a) {
    pHVar1 = this + 0xa0;
  }
  else if (param_1 == 0x1b) {
    pHVar1 = this + 0xa8;
  }
  else if (param_1 == 0x19) {
    pHVar1 = this + 0xb0;
  }
  else if (param_1 == 0x16) {
    pHVar1 = this + 0xe8;
  }
  else {
    if (param_1 == 0x10) {
      uVar2 = *(uint *)(this + 0x90);
      if (uVar2 != 0) {
        uVar2 = (uint)*(byte *)(uVar2 + 0x14);
      }
      pHVar1 = this + 0xd8;
LAB_001dc7f8:
      if (*(int *)pHVar1 == 0) {
        return uVar2;
      }
      return (uint)*(byte *)(*(int *)pHVar1 + 0x14);
    }
    if (param_1 == 0x11) {
      pHVar1 = this + 0x94;
    }
    else {
      if (param_1 == 0x17) {
        pHVar1 = this + 0xec;
        goto LAB_001dc7f8;
      }
      if (param_1 == 0x18) {
        pHVar1 = this + 0xf0;
      }
      else {
        if (param_1 != 0x12) {
          if (*(int *)(this + 0x70) + 1 <= param_1) {
            return 0;
          }
          iVar3 = *(int *)(param_1 * 4 + *(int *)(this + 0x74));
          goto LAB_001dc828;
        }
        pHVar1 = this + 0x98;
      }
    }
  }
  iVar3 = *(int *)pHVar1;
  if (iVar3 == 0) {
    return 0;
  }
LAB_001dc828:
  return (uint)*(byte *)(iVar3 + 0x14);
}


