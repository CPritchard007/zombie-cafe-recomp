/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00269170 FUN_00269170 */

void FUN_00269170(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = *param_1;
  uVar1 = FUN_0025f15e(uVar4);
  iVar2 = FUN_0025f15e(uVar4,param_2,param_5,param_6);
  iVar3 = FUN_00269118(param_1,0x4c,uVar1,iVar2,0);
  if ((iVar3 != 0) && (param_7 != 0)) {
    *(ushort *)(iVar3 + 2) = *(ushort *)(iVar3 + 2) | 1;
    *(short *)(iVar3 + 0x20) = (short)*(undefined4 *)(iVar2 + 0x18);
  }
  uVar1 = FUN_00262684(uVar4,*param_8);
  *param_8 = uVar1;
  return;
}


