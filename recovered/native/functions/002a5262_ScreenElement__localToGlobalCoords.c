/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a5262 ScreenElement::localToGlobalCoords */

/* ScreenElement::localToGlobalCoords(long) const */

void __thiscall ScreenElement::localToGlobalCoords(ScreenElement *this,long param_1)

{
  do {
    param_1 = localToParentCoords(this,param_1 >> 0x10,(int)(short)param_1);
    this = *(ScreenElement **)(this + 0x20);
  } while (this != (ScreenElement *)0x0);
  return;
}


