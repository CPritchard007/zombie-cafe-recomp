/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00274d48 FUN_00274d48 */

int FUN_00274d48(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  do {
    iVar3 = *(int *)((*(short *)(param_1 + 0x5e) + 0x22) * 4 + param_1);
    if (*(char *)(iVar3 + 3) != '\0') {
      return 0;
    }
    iVar2 = (uint)*(ushort *)((*(short *)(param_1 + 0x5e) + 0x30) * 2 + param_1) * 2;
    uVar1 = FUN_0025ba30(*(int *)(iVar3 + 0x38) +
                         (uint)(CONCAT11(*(undefined1 *)(*(int *)(iVar3 + 0x40) + iVar2),
                                         *(undefined1 *)(*(int *)(iVar3 + 0x40) + iVar2 + 1)) &
                               *(ushort *)(iVar3 + 0x12)));
    iVar3 = FUN_00274c90(param_1,uVar1);
  } while (iVar3 == 0);
  return iVar3;
}


