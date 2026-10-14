/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029ae36 CapcomPoint::operator>> */

/* CapcomPoint::TEMPNAMEPLACEHOLDERVALUE(int const&) const */

CapcomPoint * __thiscall CapcomPoint::operator>>(CapcomPoint *this,int *param_1)

{
  uint *in_r2;
  
  CapcomPoint(this,*param_1 >> (*in_r2 & 0xff),param_1[1] >> (*in_r2 & 0xff));
  return this;
}


