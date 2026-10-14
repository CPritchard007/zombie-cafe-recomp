/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001dca48 HudElement::setButtonNewIndicator */

/* HudElement::setButtonNewIndicator(int, bool) */

void __thiscall HudElement::setButtonNewIndicator(HudElement *this,int param_1,bool param_2)

{
  int iVar1;
  undefined1 auStack_1c [8];
  int *local_14;
  
  iVar1 = *(int *)(param_1 * 4 + *(int *)(this + 0x74));
  Vector<HudElement::NewIndicator>::elementAt((int)auStack_1c);
  if (param_2) {
    param_2 = *(bool *)(iVar1 + 0x14);
  }
  (**(code **)(*local_14 + 0x20))(local_14,param_2);
  return;
}


