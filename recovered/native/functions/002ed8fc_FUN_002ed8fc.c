/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ed8fc FUN_002ed8fc */

uint FUN_002ed8fc(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  
  pcVar3 = DAT_002ed958;
  iVar1 = (param_1 & 3) << 3;
  uVar2 = DAT_002ed954 << iVar1;
  param_2 = DAT_002ed954 & param_2;
  do {
    uVar5 = *(uint *)(param_1 & 0xfffffffc);
    iVar4 = (*pcVar3)(uVar5,~uVar2 & uVar5 | param_2 << iVar1,(uint *)(param_1 & 0xfffffffc));
  } while (iVar4 != 0);
  return (uVar5 & uVar2) >> iVar1 & 0xffff;
}


