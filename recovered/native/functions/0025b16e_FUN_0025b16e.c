/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025b16e FUN_0025b16e */

int FUN_0025b16e(byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  
  if (param_1 == (byte *)0x0) {
LAB_0025b1ba:
    iVar2 = -1;
  }
  else {
    bVar3 = *param_1;
    if (bVar3 != 0x27) {
      if (bVar3 < 0x28) {
        if (bVar3 != 0x22) goto LAB_0025b1ba;
      }
      else if (bVar3 == 0x5b) {
        bVar3 = 0x5d;
      }
      else if (bVar3 != 0x60) goto LAB_0025b1ba;
    }
    iVar2 = 0;
    for (iVar4 = 1; bVar1 = param_1[iVar4], bVar1 != 0; iVar4 = iVar4 + 1) {
      if (bVar1 == bVar3) {
        if (param_1[iVar4 + 1] != bVar3) break;
        param_1[iVar2] = bVar3;
        iVar4 = iVar4 + 1;
      }
      else {
        param_1[iVar2] = bVar1;
      }
      iVar2 = iVar2 + 1;
    }
    param_1[iVar2] = 0;
  }
  return iVar2;
}


