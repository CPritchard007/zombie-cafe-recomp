/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00263b94 FUN_00263b94 */

void FUN_00263b94(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = *param_1;
  FUN_00263b20(param_1[4],(uint)*(ushort *)(param_1 + 0xb) << 1);
  FUN_0025fbda(uVar3,param_1[4]);
  *(short *)(param_1 + 0xb) = (short)param_2;
  iVar2 = param_2 * 2;
  puVar1 = (undefined4 *)FUN_0025f04c(uVar3,param_2 * 0x50);
  param_1[4] = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    for (; 0 < iVar2; iVar2 = iVar2 + -1) {
      *(undefined2 *)(puVar1 + 7) = 1;
      *puVar1 = *param_1;
      puVar1 = puVar1 + 10;
    }
  }
  return;
}


