/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c5330 CapcomDate::hoursBetween */

/* CapcomDate::hoursBetween(CapcomDate, CapcomDate) */

int CapcomDate::hoursBetween
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar3 = 0;
  local_20 = param_3;
  local_1c = param_4;
  local_18 = param_1;
  local_14 = param_2;
  while( true ) {
    if ((int)(short)local_20 <= (int)(short)local_18) break;
    iVar1 = (int)(short)local_20;
    if (local_18._2_1_ < 3) {
      iVar1 = (int)(short)local_18;
    }
    iVar1 = daysInYear(iVar1);
    iVar3 = iVar3 + iVar1;
    local_18 = CONCAT22(local_18._2_2_,(short)local_18 + 1);
  }
  while( true ) {
    if ((int)(short)local_18 <= (int)(short)local_20) break;
    iVar1 = (int)(short)local_20;
    if (2 < local_18._2_1_) {
      iVar1 = (int)(short)local_18;
    }
    iVar1 = daysInYear(iVar1);
    iVar3 = iVar3 - iVar1;
    local_18 = CONCAT22(local_18._2_2_,(short)local_18 + -1);
  }
  iVar1 = hourInYear((CapcomDate *)&local_20);
  iVar2 = hourInYear((CapcomDate *)&local_18);
  return (iVar3 + iVar1) - iVar2;
}


