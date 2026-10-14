/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e91e0 FUN_002e91e0 */

void FUN_002e91e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int unaff_r5;
  code *UNRECOVERED_JUMPTABLE;
  
  *(undefined4 *)(param_1 + -0x88) = param_3;
  uVar2 = uRam002e9204;
  uVar1 = uRam002e9200;
  *(undefined4 *)(param_1 + -0x8c) = param_2;
  *(undefined4 *)(param_1 + -0x58) = uVar1;
  *(undefined4 *)(param_1 + -0x54) = uVar2;
  iVar4 = DAT_002e9208 + 0x2e91f6;
  *(int *)(param_1 + -0x50) = iVar4;
  iVar3 = FUN_002e9118();
  *(byte *)(iVar3 + unaff_r5) = (byte)iVar4 | (byte)unaff_r5;
                    /* WARNING: Could not recover jumptable at 0x002e9206. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


