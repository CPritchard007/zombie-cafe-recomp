/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d5a5c png_calculate_crc */

void png_calculate_crc(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  if (*(int *)(param_1 + 0x1dc) << 2 < 0) {
    bVar3 = (*(uint *)(param_1 + 0x138) & 0x300) + DAT_002d5ac0 != 0;
  }
  else {
    bVar3 = (*(uint *)(param_1 + 0x138) & 0x800) == 0;
  }
  if ((bVar3) && (param_3 != 0)) {
    uVar1 = *(undefined4 *)(param_1 + 0x200);
    iVar2 = param_3;
    if (param_3 == 0) {
      iVar2 = -1;
    }
    do {
      uVar1 = crc32(uVar1,param_2,iVar2);
      param_2 = param_2 + iVar2;
      param_3 = param_3 - iVar2;
      iVar2 = param_3;
    } while (param_3 != 0);
    *(undefined4 *)(param_1 + 0x200) = uVar1;
  }
  return;
}


