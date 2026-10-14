/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029aed6 CapcomPoint::operator/= */

/* CapcomPoint::TEMPNAMEPLACEHOLDERVALUE(CapcomPoint const&) */

CapcomPoint * __thiscall CapcomPoint::operator/=(CapcomPoint *this,CapcomPoint *param_1)

{
  undefined4 uVar1;
  
  uVar1 = __divsi3(*(undefined4 *)this,*(undefined4 *)param_1);
  *(undefined4 *)this = uVar1;
  uVar1 = __divsi3(*(undefined4 *)(this + 4),*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(this + 4) = uVar1;
  return this;
}


