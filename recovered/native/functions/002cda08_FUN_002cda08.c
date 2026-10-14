/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002cda08 FUN_002cda08 */

uint FUN_002cda08(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = param_4;
  if (param_3 < param_5) {
    iVar1 = FUN_002cd930();
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    param_2 = *(int *)(param_1 + 8);
    param_3 = *(int *)(param_1 + 0xc);
  }
  uVar2 = param_3 - param_5;
  uVar3 = *(uint *)(param_5 * 4 + DAT_002cda9c + 0x2cda2c) & param_2 >> (uVar2 & 0xff);
  do {
    if ((int)uVar3 <= *(int *)(param_4 + param_5 * 4)) {
      *(int *)(param_1 + 8) = param_2;
      *(uint *)(param_1 + 0xc) = uVar2;
      if (param_5 < 0x11) {
        uVar2 = (uint)*(byte *)(*(int *)(param_4 + 0x8c) + uVar3 +
                                *(int *)((param_5 + 0x12) * 4 + param_4) + 0x11);
      }
      else {
        *(undefined4 *)(**(int **)(param_1 + 0x10) + 0x14) = 0x79;
        (**(code **)(**(int **)(param_1 + 0x10) + 4))(*(int **)(param_1 + 0x10),0xffffffff);
        uVar2 = 0;
      }
      return uVar2;
    }
    if ((int)uVar2 < 1) {
      iVar1 = FUN_002cd930(param_1,param_2,uVar2,1,iVar4);
      if (iVar1 == 0) {
        return 0xffffffff;
      }
      param_2 = *(int *)(param_1 + 8);
      uVar2 = *(uint *)(param_1 + 0xc);
    }
    uVar2 = uVar2 - 1;
    uVar3 = param_2 >> (uVar2 & 0xff) & 1U | uVar3 << 1;
    param_5 = param_5 + 1;
  } while( true );
}


