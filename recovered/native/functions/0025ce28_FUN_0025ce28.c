/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025ce28 FUN_0025ce28 */

undefined8 FUN_0025ce28(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int extraout_r1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  
  pbVar2 = *(byte **)(param_2 + 0x18);
  iVar3 = param_1;
  iVar1 = FUN_0025b154(pbVar2);
  __aeabi_idivmod((uint)*(byte *)(DAT_0025ce70 + 0x25ce80 + (uint)*pbVar2) + iVar1,0x17);
  iVar4 = extraout_r1;
  iVar1 = FUN_0025cdfc(param_1,extraout_r1,pbVar2,iVar1,iVar3,extraout_r1,param_3);
  if (iVar1 == 0) {
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(iVar4 * 4 + param_1);
    *(int *)(iVar4 * 4 + param_1) = param_2;
  }
  else {
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar1 + 8);
    *(int *)(iVar1 + 8) = param_2;
  }
  return CONCAT44(iVar4,iVar3);
}


