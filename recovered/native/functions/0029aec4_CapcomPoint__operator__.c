/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029aec4 CapcomPoint::operator*= */

/* CapcomPoint::TEMPNAMEPLACEHOLDERVALUE(int const&) */

void __thiscall CapcomPoint::operator*=(CapcomPoint *this,int *param_1)

{
  *(int *)this = *param_1 * *(int *)this;
  *(int *)(this + 4) = *param_1 * *(int *)(this + 4);
  return;
}


