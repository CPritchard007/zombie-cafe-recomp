/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c53e4 CapcomDate::addDays */

/* CapcomDate::addDays(int) */

void __thiscall CapcomDate::addDays(CapcomDate *this,int param_1)

{
  CapcomDate CVar1;
  int iVar2;
  int iVar3;
  
  for (iVar3 = (uint)(byte)this[3] + param_1;
      iVar2 = daysInMonth((int)*(short *)this,(uint)(byte)this[2]), iVar2 < iVar3;
      iVar3 = iVar3 - iVar2) {
    CVar1 = this[2];
    this[2] = (CapcomDate)((char)CVar1 + '\x01');
    if (0xc < (byte)((char)CVar1 + '\x01')) {
      this[2] = (CapcomDate)0x1;
      *(short *)this = *(short *)this + 1;
    }
  }
  for (; iVar3 < 1; iVar3 = iVar3 + iVar2) {
    CVar1 = this[2];
    this[2] = (CapcomDate)((char)CVar1 + -1);
    if ((CapcomDate)((char)CVar1 + -1) == (CapcomDate)0x0) {
      this[2] = (CapcomDate)0xc;
      *(short *)this = *(short *)this + -1;
    }
    iVar2 = daysInMonth((int)*(short *)this,(uint)(byte)this[2]);
  }
  this[3] = SUB41(iVar3,0);
  return;
}


