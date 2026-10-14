/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e6bc4 FUN_002e6bc4 */

void FUN_002e6bc4(byte *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  char extraout_r1;
  uint uVar3;
  uint uVar4;
  
  bVar1 = *param_1;
  if (((bVar1 & 0xf) == 8) && ((bVar1 & 0xf0) < 0x71)) {
    uVar2 = (uint)(bVar1 >> 4);
    uVar3 = 1 << uVar2 + 7;
    uVar4 = uVar3;
    if (param_2 <= uVar3) {
      do {
        uVar4 = uVar4 >> 1;
        uVar2 = uVar2 - 1;
        if (uVar4 < param_2) break;
      } while (uVar2 != 0);
      bVar1 = param_1[1];
      uVar4 = uVar2 * 0x10 | 8;
      *param_1 = (byte)uVar4;
      __aeabi_uidivmod(uVar4 * 0x100 + (bVar1 & 0xe0),0x1f,uVar3,0xe0,param_4);
      param_1[1] = ((char)(bVar1 & 0xe0) + '\x1f') - extraout_r1;
    }
  }
  return;
}


