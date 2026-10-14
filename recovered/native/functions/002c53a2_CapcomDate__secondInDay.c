/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c53a2 CapcomDate::secondInDay */

/* CapcomDate::secondInDay() */

int __thiscall CapcomDate::secondInDay(CapcomDate *this)

{
  return ((uint)(byte)this[4] * 0x3c + (uint)(byte)this[5]) * 0x3c + (uint)(byte)this[6];
}


