/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c5444 CapcomDate::addSeconds */

/* CapcomDate::addSeconds(int) */

void CapcomDate::addSeconds(int param_1)

{
  int iVar1;
  int in_r1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  
  bVar2 = *(byte *)(param_1 + 6);
  bVar4 = *(byte *)(param_1 + 5);
  bVar5 = *(byte *)(param_1 + 4);
  if (in_r1 != 0) {
    iVar1 = __divsi3(in_r1 + (uint)bVar2,0x3c);
    iVar3 = in_r1 + (uint)bVar2 + iVar1 * -0x3c;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0x3c;
      iVar1 = iVar1 + -1;
    }
    bVar2 = (byte)iVar3;
    if (iVar1 != 0) {
      iVar3 = __divsi3(iVar1 + (uint)bVar4,0x3c);
      iVar1 = iVar1 + (uint)bVar4 + iVar3 * -0x3c;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x3c;
        iVar3 = iVar3 + -1;
      }
      bVar4 = (byte)iVar1;
      if (iVar3 != 0) {
        iVar1 = __divsi3(iVar3 + (uint)bVar5,0x18);
        iVar3 = iVar3 + (uint)bVar5 + iVar1 * -0x18;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 0x18;
          iVar1 = iVar1 + -1;
        }
        bVar5 = (byte)iVar3;
        if (iVar1 != 0) {
          addDays((CapcomDate *)param_1,iVar1);
        }
      }
    }
  }
  *(byte *)(param_1 + 6) = bVar2;
  *(byte *)(param_1 + 5) = bVar4;
  *(byte *)(param_1 + 4) = bVar5;
  return;
}


