/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a5290 CapcomOrderableList<ScreenElement*>::compare */

/* CapcomOrderableList<ScreenElement*>::compare(ScreenElement*, ScreenElement*) */

void CapcomOrderableList<ScreenElement*>::compare(ScreenElement *param_1,ScreenElement *param_2)

{
  undefined4 in_r2;
  
  if (param_1[0x18] == (ScreenElement)0x1) {
    (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x24));
  }
  else {
    (**(code **)(param_1 + 0x1c))(param_2,in_r2);
  }
  return;
}


