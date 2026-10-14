/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027fdb8 FUN_0027fdb8 */

void FUN_0027fdb8(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 4);
  uVar3 = *(ushort *)(iVar4 + 0x16) & 0xffef;
  *(ushort *)(iVar4 + 0x16) = uVar3;
  if (param_2 == 1) {
    uVar3 = uVar3 | 0x10;
    *(ushort *)(iVar4 + 0x16) = uVar3;
  }
  iVar1 = FUN_0027d63c(param_1,0,0x10,uVar3,param_4);
  if (iVar1 == 0) {
    iVar1 = *(int *)(*(int *)(iVar4 + 0xc) + 0x38);
    if (((((uint)*(byte *)(iVar1 + 0x12) != (param_2 & 0xff)) ||
         ((uint)*(byte *)(iVar1 + 0x13) != (param_2 & 0xff))) &&
        (iVar2 = FUN_0027d63c(param_1,2), iVar2 == 0)) &&
       (iVar2 = FUN_002733c4(*(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x44)), iVar2 == 0)) {
      *(char *)(iVar1 + 0x12) = (char)param_2;
      *(char *)(iVar1 + 0x13) = (char)param_2;
    }
  }
  *(ushort *)(iVar4 + 0x16) = *(ushort *)(iVar4 + 0x16) & 0xffef;
  return;
}


