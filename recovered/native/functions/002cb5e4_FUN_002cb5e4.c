/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002cb5e4 FUN_002cb5e4 */

undefined8 FUN_002cb5e4(int param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(param_1 + 0x1d4);
  while( true ) {
    if (DAT_002cb6c8 < *(int *)(iVar6 + 0x10)) break;
    iVar3 = *(uint *)(iVar6 + 0x14) - 1;
    *(int *)(iVar6 + 0x14) = iVar3;
    if (iVar3 < 0) {
      uVar2 = 0;
      if ((*(int *)(param_1 + 0x1b8) == 0) && (uVar2 = FUN_002cb5b2(param_1), uVar2 == 0xff)) {
        do {
          iVar3 = FUN_002cb5b2(param_1);
        } while (iVar3 == 0xff);
        if (iVar3 != 0) {
          *(int *)(param_1 + 0x1b8) = iVar3;
          uVar2 = 0;
        }
      }
      iVar4 = *(int *)(iVar6 + 0x14);
      *(uint *)(iVar6 + 0xc) = uVar2 | *(int *)(iVar6 + 0xc) << 8;
      iVar3 = iVar4 + 8;
      *(int *)(iVar6 + 0x14) = iVar3;
      if ((iVar3 < 0) && (iVar4 = iVar4 + 9, *(int *)(iVar6 + 0x14) = iVar4, iVar4 == 0)) {
        *(undefined4 *)(iVar6 + 0x10) = 0x8000;
      }
    }
    *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) << 1;
  }
  bVar1 = *param_2;
  uVar2 = (uint)bVar1;
  iVar4 = *(int *)((uVar2 & 0x7f) * 4 + *(int *)(DAT_002cb6cc + 0x2cb668));
  iVar5 = iVar4 >> 0x10;
  iVar3 = *(int *)(iVar6 + 0x10) - iVar5;
  iVar7 = iVar3 << (*(uint *)(iVar6 + 0x14) & 0xff);
  *(int *)(iVar6 + 0x10) = iVar3;
  if (*(int *)(iVar6 + 0xc) < iVar7) {
    if (DAT_002cb6c8 < iVar3) goto LAB_002cb6c4;
    if (iVar3 < iVar5) goto LAB_002cb6b4;
  }
  else {
    *(int *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) - iVar7;
    *(int *)(iVar6 + 0x10) = iVar5;
    if (iVar5 <= iVar3) {
LAB_002cb6b4:
      uVar2 = uVar2 ^ 0x80;
      *param_2 = (byte)iVar4 ^ bVar1 & 0x80;
      goto LAB_002cb6c4;
    }
  }
  *param_2 = (byte)((uint)iVar4 >> 8) ^ bVar1 & 0x80;
LAB_002cb6c4:
  return CONCAT44(param_1,(int)uVar2 >> 7);
}


