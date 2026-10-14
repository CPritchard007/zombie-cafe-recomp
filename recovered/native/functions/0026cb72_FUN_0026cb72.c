/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026cb72 FUN_0026cb72 */

undefined8
FUN_0026cb72(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,undefined4 *param_7)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(*(int *)(param_1 + 0x48) + 0x34);
  if (param_5 != 0) {
    FUN_00260c3a(iVar5,param_6,param_5,iVar4,param_3,param_4,param_3);
  }
  if (param_2 != 0) {
    uVar1 = *(ushort *)(iVar5 + 6);
    iVar3 = 0;
    *(ushort *)(iVar4 + 4) = uVar1;
    for (iVar5 = 0; iVar5 < (int)(uint)uVar1; iVar5 = iVar5 + 1) {
      iVar6 = *(int *)(iVar4 + 0x10) + iVar3;
      iVar3 = iVar3 + 0x28;
      if ((*(ushort *)(iVar6 + 0x1c) & 1) != 0) {
        *param_7 = 0xffffffff;
        goto LAB_0026cbd0;
      }
    }
    *(byte *)(iVar4 + 6) = *(byte *)(iVar4 + 6) | 2;
  }
  uVar2 = FUN_0026ca70(param_4,param_3,iVar4);
  *param_7 = uVar2;
LAB_0026cbd0:
  return CONCAT44(param_4,param_3);
}


