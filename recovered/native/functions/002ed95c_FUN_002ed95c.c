/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ed95c FUN_002ed95c */

uint FUN_002ed95c(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  
  pcVar3 = DAT_002ed9b0;
  iVar1 = (param_1 & 3) << 3;
  uVar2 = 0xff << iVar1;
  do {
    uVar5 = *(uint *)(param_1 & 0xfffffffc);
    iVar4 = (*pcVar3)(uVar5,~uVar2 & uVar5 | uVar2 & param_2 << iVar1,(uint *)(param_1 & 0xfffffffc)
                     );
  } while (iVar4 != 0);
  return (uVar5 & uVar2) >> iVar1 & 0xff;
}


