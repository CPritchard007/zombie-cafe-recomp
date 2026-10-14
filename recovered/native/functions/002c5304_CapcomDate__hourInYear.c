/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c5304 CapcomDate::hourInYear */

/* CapcomDate::hourInYear() */

int __thiscall CapcomDate::hourInYear(CapcomDate *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  for (iVar2 = 1; iVar2 < (int)(uint)(byte)this[2]; iVar2 = iVar2 + 1) {
    iVar1 = daysInMonth((int)*(short *)this,iVar2);
    iVar3 = iVar3 + iVar1;
  }
  return (iVar3 + (uint)(byte)this[3]) * 0x18 + (uint)(byte)this[4];
}


