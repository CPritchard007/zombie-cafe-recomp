/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029ae0e CapcomPoint::operator/ */

/* CapcomPoint::TEMPNAMEPLACEHOLDERVALUE(int const&) const */

CapcomPoint * __thiscall CapcomPoint::operator/(CapcomPoint *this,int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *in_r2;
  undefined4 uVar3;
  
  uVar3 = *in_r2;
  iVar1 = __divsi3(*param_1,uVar3);
  iVar2 = __divsi3(param_1[1],uVar3);
  CapcomPoint(this,iVar1,iVar2);
  return this;
}


