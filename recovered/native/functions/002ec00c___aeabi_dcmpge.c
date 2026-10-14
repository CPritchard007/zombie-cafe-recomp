/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ec00c __aeabi_dcmpge */

bool __aeabi_dcmpge(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  __aeabi_cdrcmple();
  return !(bool)in_CY || (bool)in_ZR;
}


