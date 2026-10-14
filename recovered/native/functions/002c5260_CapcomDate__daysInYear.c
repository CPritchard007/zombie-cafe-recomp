/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c5260 CapcomDate::daysInYear */

/* CapcomDate::daysInYear(int) */

int CapcomDate::daysInYear(int param_1)

{
  int iVar1;
  
  iVar1 = daysInMonth(param_1,2);
  return iVar1 + 0x151;
}


