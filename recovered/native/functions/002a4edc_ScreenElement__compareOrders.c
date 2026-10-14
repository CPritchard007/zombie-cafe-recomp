/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a4edc ScreenElement::compareOrders */

/* ScreenElement::compareOrders(ScreenElement*, ScreenElement*) */

int ScreenElement::compareOrders(ScreenElement *param_1,ScreenElement *param_2)

{
  int iVar1;
  
  iVar1 = (int)(char)param_1[0x4c] - (int)(char)param_2[0x4c];
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  return iVar1;
}


