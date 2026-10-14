/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002eced0 FUN_002eced0 */

uint FUN_002eced0(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  
  pcVar4 = DAT_002ecf28;
  iVar1 = (param_1 & 3) << 3;
  uVar2 = 0xff << iVar1;
  do {
    uVar5 = *(uint *)(param_1 & 0xfffffffc);
    uVar3 = (uVar5 & uVar2) >> iVar1;
    iVar6 = (*pcVar4)(uVar5,uVar2 & uVar3 + param_2 << iVar1 | ~uVar2 & uVar5,
                      (uint *)(param_1 & 0xfffffffc));
  } while (iVar6 != 0);
  return uVar3 & 0xff;
}


