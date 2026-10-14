/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029aeb2 CapcomPoint::operator*= */

/* CapcomPoint::TEMPNAMEPLACEHOLDERVALUE(CapcomPoint const&) */

void __thiscall CapcomPoint::operator*=(CapcomPoint *this,CapcomPoint *param_1)

{
  *(int *)this = *(int *)param_1 * *(int *)this;
  *(int *)(this + 4) = *(int *)(param_1 + 4) * *(int *)(this + 4);
  return;
}


