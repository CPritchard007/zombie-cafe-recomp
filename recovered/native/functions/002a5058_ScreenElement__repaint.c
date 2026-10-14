/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a5058 ScreenElement::repaint */

/* ScreenElement::repaint(CapcomGraphics*) */

void ScreenElement::repaint(CapcomGraphics *param_1)

{
  if (param_1[0x14] != (CapcomGraphics)0x0) {
    (**(code **)(*(int *)param_1 + 0xc))();
  }
  return;
}


