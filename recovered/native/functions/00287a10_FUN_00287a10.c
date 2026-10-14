/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00287a10 FUN_00287a10 */

undefined8 FUN_00287a10(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x7d) = 1;
  iVar3 = 0;
  do {
    if (*(int *)(param_1 + 0x14) <= iVar3) {
      iVar2 = 0;
      if (((1 < *(int *)(param_1 + 0x14)) &&
          (iVar2 = 0, (*(ushort *)(*(int *)(*(int *)(param_1 + 0x10) + 0x1c) + 0x4e) & 1) == 0)) &&
         (iVar2 = FUN_00287774(param_1,1,param_2), iVar2 != 0)) {
        FUN_002634ec(param_1,1);
      }
      break;
    }
    if ((iVar3 == 1) ||
       ((*(ushort *)(*(int *)(*(int *)(param_1 + 0x10) + iVar3 * 0x10 + 0xc) + 0x4e) & 1) != 0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00287774(param_1,iVar3,param_2);
      if (iVar2 != 0) {
        FUN_002634ec(param_1,iVar3);
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar2 == 0);
  *(undefined1 *)(param_1 + 0x7d) = 0;
  if ((iVar2 == 0) && ((uVar1 & 0x200) == 0)) {
    *(uint *)(param_1 + 0x18) = DAT_00287ab8 & *(uint *)(param_1 + 0x18);
  }
  return CONCAT44(param_1,iVar2);
}


