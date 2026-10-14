/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026826c FUN_0026826c */

undefined4 FUN_0026826c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  
  if (param_2 != 0) {
    if (*(uint *)(param_1 + 0xc) < param_2) {
      iVar2 = DAT_002682b0 + 0x268284;
    }
    else {
      pbVar4 = (byte *)(*(int *)(param_1 + 8) + (param_2 >> 3));
      bVar1 = *pbVar4;
      uVar3 = 1 << (param_2 & 7);
      if ((uVar3 & bVar1) == 0) {
        *pbVar4 = bVar1 | (byte)uVar3;
        return 0;
      }
      iVar2 = DAT_002682b4 + 0x2682a0;
    }
    FUN_00268204(param_1,param_3,iVar2,param_2,param_4);
  }
  return 1;
}


