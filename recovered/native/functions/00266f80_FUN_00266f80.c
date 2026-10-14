/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00266f80 FUN_00266f80 */

short * FUN_00266f80(int *param_1,int param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  psVar2 = (short *)FUN_00266f0c(*param_1,0,param_2 + 0xc,0);
  if (psVar2 != (short *)0x0) {
    iVar5 = *param_1;
    iVar3 = FUN_0025d12c(iVar5,*(undefined4 *)(*(int *)(param_2 + 4) + 0x14));
    if ((1 < iVar3) || (iVar3 == 0)) {
      sVar1 = *psVar2;
      uVar4 = FUN_0025f25a(iVar5,*(undefined4 *)(iVar3 * 0x10 + *(int *)(iVar5 + 0x10)));
      *(undefined4 *)(psVar2 + (sVar1 + -1) * 0x20 + 4) = uVar4;
    }
  }
  return psVar2;
}


