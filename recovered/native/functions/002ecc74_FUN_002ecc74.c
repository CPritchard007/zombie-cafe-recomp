/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ecc74 FUN_002ecc74 */

uint FUN_002ecc74(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  
  pcVar5 = DAT_002eccd4;
  uVar4 = DAT_002eccd0;
  iVar1 = (param_1 & 3) << 3;
  uVar2 = DAT_002eccd0 << iVar1;
  do {
    uVar6 = *(uint *)(param_1 & 0xfffffffc);
    uVar3 = (uVar6 & uVar2) >> iVar1;
    iVar7 = (*pcVar5)(uVar6,(uVar4 & uVar3 + param_2) << iVar1 | ~uVar2 & uVar6,
                      (uint *)(param_1 & 0xfffffffc));
  } while (iVar7 != 0);
  return uVar3 & 0xffff;
}


