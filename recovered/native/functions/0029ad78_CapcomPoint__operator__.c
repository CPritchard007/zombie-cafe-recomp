/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029ad78 CapcomPoint::operator!= */

/* CapcomPoint::TEMPNAMEPLACEHOLDERVALUE(CapcomPoint const&) const */

bool __thiscall CapcomPoint::operator!=(CapcomPoint *this,CapcomPoint *param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (*(int *)this == *(int *)param_1) {
    bVar1 = *(int *)(this + 4) != *(int *)(param_1 + 4);
  }
  return bVar1;
}


