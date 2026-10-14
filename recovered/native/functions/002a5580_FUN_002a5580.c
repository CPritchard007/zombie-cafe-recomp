/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a5580 FUN_002a5580 */

ScreenElement * FUN_002a5580(ScreenElement *param_1,ScreenElement param_2,uchar param_3)

{
  ScreenElement::ScreenElement(param_1,(ScreenElement *)0x0);
  *(int *)param_1 = *(int *)(DAT_002a55b8 + 0x2a559c) + 8;
  param_1[0x60] = param_2;
  ScreenElement::setAnchor(param_1,param_3);
  return param_1;
}


