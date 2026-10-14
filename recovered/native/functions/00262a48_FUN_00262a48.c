/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00262a48 FUN_00262a48 */

code FUN_00262a48(byte *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int extraout_r1;
  uint uVar5;
  int iVar6;
  
  uVar5 = (uint)*(byte *)(DAT_00262ac8 + 0x262a94 + (uint)param_1[param_2 - 1]);
  uVar2 = uVar5 * 3;
  __aeabi_idivmod((uint)*(byte *)(DAT_00262ac8 + 0x262a94 + (uint)*param_1) << 2 ^ param_2 ^ uVar2,
                  0x7f,uVar5 * 2,uVar2,param_4);
  iVar3 = DAT_00262ad0;
  bVar1 = *(byte *)(DAT_00262acc + 0x262aa5 + extraout_r1);
  while( true ) {
    iVar6 = bVar1 - 1;
    if (iVar6 == -1) {
      return (code)0x1a;
    }
    if ((*(byte *)(iVar3 + 0x262aaa + iVar6) == param_2) &&
       (iVar4 = sqlite3_strnicmp(DAT_00262ad8 + 0x262ac1 +
                                 (uint)*(ushort *)
                                        ((int)&DAT_00262ad4 + DAT_00262ad4 + iVar6 * 2 + 2),param_1,
                                 param_2), iVar4 == 0)) break;
    bVar1 = *(byte *)(DAT_00262ae0 + 0x262ae7 + iVar6);
  }
  return FUN_00262ae4[iVar6 + DAT_00262adc];
}


