/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001dca20 HudElement::hasNewIndicator */

/* HudElement::hasNewIndicator(int) */

char __thiscall HudElement::hasNewIndicator(HudElement *this,int param_1)

{
  char cVar1;
  undefined1 auStack_1c [8];
  int local_14;
  
  Vector<HudElement::NewIndicator>::elementAt((int)auStack_1c);
  cVar1 = *(char *)(local_14 + 0x14);
  if (cVar1 != '\0') {
    cVar1 = *(char *)(*(int *)(param_1 * 4 + *(int *)(this + 0x74)) + 0x14);
  }
  return cVar1;
}


