/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029af12 CapcomPoint::operator>>= */

/* CapcomPoint::TEMPNAMEPLACEHOLDERVALUE(int const&) */

void __thiscall CapcomPoint::operator>>=(CapcomPoint *this,int *param_1)

{
  *(int *)this = *(int *)this >> (*param_1 & 0xffU);
  *(int *)(this + 4) = *(int *)(this + 4) >> (*param_1 & 0xffU);
  return;
}


