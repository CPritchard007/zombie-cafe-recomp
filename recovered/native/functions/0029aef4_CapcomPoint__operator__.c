/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029aef4 CapcomPoint::operator/= */

/* CapcomPoint::TEMPNAMEPLACEHOLDERVALUE(int const&) */

CapcomPoint * __thiscall CapcomPoint::operator/=(CapcomPoint *this,int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = __divsi3(*(undefined4 *)this,*param_1);
  *(undefined4 *)this = uVar1;
  uVar1 = __divsi3(*(undefined4 *)(this + 4),*param_1);
  *(undefined4 *)(this + 4) = uVar1;
  return this;
}


