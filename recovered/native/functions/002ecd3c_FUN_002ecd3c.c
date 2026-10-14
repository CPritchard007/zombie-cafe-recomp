/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ecd3c FUN_002ecd3c */

uint FUN_002ecd3c(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  
  pcVar5 = DAT_002ecd9c;
  uVar4 = DAT_002ecd98;
  iVar1 = (param_1 & 3) << 3;
  uVar2 = DAT_002ecd98 << iVar1;
  do {
    uVar6 = *(uint *)(param_1 & 0xfffffffc);
    uVar3 = (uVar6 & uVar2) >> iVar1;
    iVar7 = (*pcVar5)(uVar6,(uVar4 & (uVar3 | param_2)) << iVar1 | ~uVar2 & uVar6,
                      (uint *)(param_1 & 0xfffffffc));
  } while (iVar7 != 0);
  return uVar3 & 0xffff;
}


