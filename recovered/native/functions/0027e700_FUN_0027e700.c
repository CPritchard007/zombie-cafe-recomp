/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027e700 FUN_0027e700 */

uint FUN_0027e700(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint local_40;
  int local_3c;
  undefined1 auStack_38 [16];
  int local_28;
  ushort local_22;
  ushort local_20;
  
  iVar4 = *(int *)(param_1 + 0x34);
  FUN_00260a6c(param_1,param_2,auStack_38);
  uVar1 = (uint)local_20;
  uVar3 = uVar1;
  if ((uVar1 != 0) &&
     (uVar3 = 0xb,
     param_2 + uVar1 + 3 <= *(int *)(param_1 + 0x38) + (uint)*(ushort *)(param_1 + 0x12))) {
    uVar1 = FUN_0025ba30(param_2 + uVar1);
    iVar2 = __udivsi3((local_28 + *(int *)(iVar4 + 0x24) + -5) - (uint)local_22);
    do {
      if (iVar2 == 0) {
        return 0;
      }
      local_40 = 0;
      local_3c = 0;
      if ((uVar1 < 2) || (*(uint *)(iVar4 + 0x2c) < uVar1)) {
        uVar3 = FUN_0026b4e4(DAT_0027e7cc);
        return uVar3;
      }
      iVar2 = iVar2 + -1;
      if ((iVar2 != 0) && (uVar3 = FUN_00274f48(iVar4,uVar1,&local_3c,&local_40), uVar3 != 0)) {
        return uVar3;
      }
      if (((local_3c == 0) && (local_3c = FUN_0025de4c(iVar4,uVar1), local_3c == 0)) ||
         (*(short *)(*(int *)(local_3c + 0x44) + 0x1a) == 1)) {
        uVar3 = FUN_0027e534(iVar4,local_3c,uVar1);
      }
      else {
        uVar3 = FUN_0026b4e4(DAT_0027e7d0);
      }
      if (local_3c != 0) {
        FUN_002749b4(*(undefined4 *)(local_3c + 0x44));
      }
      uVar1 = local_40;
    } while (uVar3 == 0);
  }
  return uVar3;
}


