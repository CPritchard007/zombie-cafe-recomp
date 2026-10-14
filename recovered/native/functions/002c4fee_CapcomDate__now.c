/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c4fee CapcomDate::now */

/* CapcomDate::now() */

CapcomDate * __thiscall CapcomDate::now(CapcomDate *this)

{
  CapcomDate CVar1;
  undefined2 uVar2;
  
  uVar2 = javaGetDate(0);
  *(undefined2 *)this = uVar2;
  CVar1 = (CapcomDate)javaGetDate(1);
  this[2] = CVar1;
  CVar1 = (CapcomDate)javaGetDate(2);
  this[3] = CVar1;
  CVar1 = (CapcomDate)javaGetDate(3);
  this[4] = CVar1;
  CVar1 = (CapcomDate)javaGetDate(4);
  this[5] = CVar1;
  CVar1 = (CapcomDate)javaGetDate(5);
  this[6] = CVar1;
  return this;
}


