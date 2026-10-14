/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ed2bc FUN_002ed2bc */

uint FUN_002ed2bc(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  pcVar4 = DAT_002ed324;
  uVar3 = DAT_002ed320;
  iVar1 = (param_1 & 3) << 3;
  uVar2 = DAT_002ed320 << iVar1;
  do {
    uVar5 = *(uint *)(param_1 & 0xfffffffc);
    uVar7 = (uVar3 & ((uVar5 & uVar2) >> iVar1) - param_2) << iVar1 | ~uVar2 & uVar5;
    iVar6 = (*pcVar4)(uVar5,uVar7,(uint *)(param_1 & 0xfffffffc));
  } while (iVar6 != 0);
  return (uVar7 & uVar2) >> iVar1 & 0xffff;
}


