/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c4f9a CapcomDate::set */

/* CapcomDate::set(short, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char)
    */

void __thiscall
CapcomDate::set(CapcomDate *this,short param_1,uchar param_2,uchar param_3,uchar param_4,
               uchar param_5,uchar param_6)

{
  this[4] = (CapcomDate)param_4;
  this[5] = (CapcomDate)param_5;
  *(short *)this = param_1;
  this[2] = (CapcomDate)param_2;
  this[3] = (CapcomDate)param_3;
  this[6] = (CapcomDate)param_6;
  return;
}


