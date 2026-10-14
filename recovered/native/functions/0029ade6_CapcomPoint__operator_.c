/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029ade6 CapcomPoint::operator/ */

/* CapcomPoint::TEMPNAMEPLACEHOLDERVALUE(CapcomPoint const&) const */

CapcomPoint * __thiscall CapcomPoint::operator/(CapcomPoint *this,CapcomPoint *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *in_r2;
  
  iVar1 = __divsi3(*(undefined4 *)param_1,*in_r2);
  iVar2 = __divsi3(*(undefined4 *)(param_1 + 4),in_r2[1]);
  CapcomPoint(this,iVar1,iVar2);
  return this;
}


