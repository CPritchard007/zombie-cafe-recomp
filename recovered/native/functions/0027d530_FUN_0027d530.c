/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027d530 FUN_0027d530 */

int FUN_0027d530(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 4);
  FUN_00261f68();
  iVar1 = FUN_002744a8(*puVar3,param_2,param_3);
  if (iVar1 == 0) {
    if ((param_3 < 0) && ((int)((uint)*(ushort *)((int)puVar3 + 0x16) << 0x1c) < 0)) {
      puVar3[0xb] = 0;
    }
    if (puVar3[0xb] == 0) {
      iVar1 = FUN_0027d4b0(puVar3);
    }
    uVar2 = FUN_0025ba30(*(int *)(puVar3[3] + 0x38) + 0x1c);
    puVar3[0xb] = uVar2;
  }
  FUN_00262002(param_1);
  return iVar1;
}


