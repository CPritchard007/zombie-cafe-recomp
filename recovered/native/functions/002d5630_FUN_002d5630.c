/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d5630 FUN_002d5630 */

undefined8 FUN_002d5630(uint param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar3 = CONCAT44(DAT_002d56ac,DAT_002d56a8);
  uVar2 = CONCAT44(DAT_002d56b4,DAT_002d56b0);
  if ((int)param_1 < 0) {
    if ((int)param_1 < DAT_002d56c0) {
      return CONCAT44(DAT_002d56bc,DAT_002d56b8);
    }
    param_1 = -param_1;
    bVar1 = true;
    uVar2 = CONCAT44(DAT_002d56b4,DAT_002d56b0);
    uVar3 = CONCAT44(DAT_002d56ac,DAT_002d56a8);
  }
  else {
    if (param_1 == 0) {
      return uVar2;
    }
    bVar1 = false;
  }
  do {
    if ((param_1 & 1) != 0) {
      uVar2 = __muldf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),(int)uVar3,
                       (int)((ulonglong)uVar3 >> 0x20),uVar3,param_3);
    }
    uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uVar3 = __muldf3((int)uVar3,uVar4,(int)uVar3,uVar4,uVar3,param_3);
    param_1 = (int)param_1 >> 1;
  } while (param_1 != 0);
  if (bVar1) {
    uVar2 = __divdf3(DAT_002d56b0,DAT_002d56b4,(int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  }
  return uVar2;
}


