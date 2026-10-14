/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e67f8 FUN_002e67f8 */

int FUN_002e67f8(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  uVar5 = *(uint *)(param_1 + 0x1c4);
  if ((DAT_002e68f0 < uVar5) || (DAT_002e68f0 < *(uint *)(param_1 + 0x1d0))) {
    iVar10 = -1;
  }
  else if (*(char *)(param_1 + 0x214) == '\0') {
    iVar10 = uVar5 * (*(uint *)(param_1 + 0x1d0) + 1);
  }
  else {
    iVar4 = 0;
    bVar1 = *(byte *)(param_1 + DAT_002e68f4);
    iVar6 = 7;
    iVar9 = 7;
    iVar10 = 0;
    uVar7 = 0;
    while( true ) {
      uVar3 = uVar7 + 1;
      uVar2 = 3;
      if (1 < iVar4) {
        uVar2 = iVar6 >> 1;
      }
      uVar2 = (iVar9 - ((uVar7 & 1) << (3U - ((int)uVar3 >> 1) & 0xff) & 7)) +
              *(int *)(param_1 + 0x1c0) >> (uVar2 & 0xff);
      if (uVar2 != 0) {
        if (bVar1 < 8) {
          uVar2 = uVar2 * bVar1 + 7 >> 3;
        }
        else {
          uVar2 = (bVar1 >> 3) * uVar2;
        }
        iVar9 = 7;
        if (2 < iVar4) {
          iVar9 = (1 << ((int)(9 - uVar3) >> 1 & 0xffU)) + -1;
        }
        uVar8 = 3;
        if (2 < iVar4) {
          uVar8 = (int)(9 - uVar3) >> 1;
        }
        iVar10 = iVar10 + (uVar2 + 1) *
                          ((iVar9 - ((uVar7 & 1 ^ 1) << (3U - ((int)uVar7 >> 1) & 0xff) & 7)) +
                           uVar5 >> (uVar8 & 0xff));
      }
      iVar6 = iVar6 + -1;
      if (iVar6 == 0) break;
      iVar9 = 7;
      if (uVar3 != 1) {
        iVar9 = (1 << (iVar6 >> 1 & 0xffU)) + -1;
      }
      iVar4 = iVar4 + 1;
      uVar7 = uVar3;
    }
  }
  return iVar10;
}


