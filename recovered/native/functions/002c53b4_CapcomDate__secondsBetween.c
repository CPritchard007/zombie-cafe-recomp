/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c53b4 CapcomDate::secondsBetween */

/* CapcomDate::secondsBetween(CapcomDate, CapcomDate) */

int CapcomDate::secondsBetween
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_28 = param_3;
  local_24 = param_4;
  local_20 = param_1;
  local_1c = param_2;
  iVar1 = daysBetween();
  iVar2 = secondInDay((CapcomDate *)&local_28);
  iVar1 = DAT_002c53e0 * iVar1;
  iVar3 = secondInDay((CapcomDate *)&local_20);
  return (iVar1 + iVar2) - iVar3;
}


