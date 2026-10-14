/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025e84c FUN_0025e84c */

undefined4
FUN_0025e84c(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  
  iVar2 = param_2;
  while( true ) {
    if (param_3 < 1) {
      return 0;
    }
    uVar4 = FUN_0025e7e8(param_1,param_2,param_5,param_6,iVar2,param_3);
    param_2 = (int)((ulonglong)uVar4 >> 0x20);
    uVar1 = (uint)uVar4;
    if ((int)uVar1 < 1) break;
    bVar3 = CARRY4(param_5,uVar1);
    param_5 = param_5 + uVar1;
    param_6 = param_6 + ((int)uVar1 >> 0x1f) + (uint)bVar3;
    param_3 = param_3 - uVar1;
    iVar2 = iVar2 + uVar1;
  }
  if ((uVar1 != 0) && (*(int *)(param_1 + 0x14) != 0x1c)) {
    return DAT_0025e8b0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  return 0xd;
}


