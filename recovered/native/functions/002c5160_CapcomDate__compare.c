/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c5160 CapcomDate::compare */

/* CapcomDate::compare(CapcomDate, CapcomDate) */

int CapcomDate::compare(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = param_1 >> 0x10 & 0xff;
  uVar5 = param_2 >> 8 & 0xff;
  uVar6 = param_3 >> 0x10 & 0xff;
  uVar1 = param_4 >> 0x10 & 0xff;
  uVar7 = param_4 >> 8 & 0xff;
  uVar4 = param_2 >> 0x10 & 0xff;
  if ((int)(short)param_1 == (int)(short)param_3) {
    iVar2 = uVar3 - uVar6;
    if (uVar3 == uVar6) {
      if (param_1 >> 0x18 == param_3 >> 0x18) {
        iVar2 = (param_2 & 0xff) - (param_4 & 0xff);
        if (((param_2 & 0xff) == (param_4 & 0xff)) && (iVar2 = uVar5 - uVar7, uVar5 == uVar7)) {
          iVar2 = 0;
          if (uVar4 != uVar1) {
            iVar2 = uVar4 - uVar1;
          }
        }
      }
      else {
        iVar2 = (param_1 >> 0x18) - (param_3 >> 0x18);
      }
    }
  }
  else {
    iVar2 = (int)(short)param_1 - (int)(short)param_3;
  }
  return iVar2;
}


