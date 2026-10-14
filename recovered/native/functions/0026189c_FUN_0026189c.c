/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026189c FUN_0026189c */

undefined4 FUN_0026189c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  while( true ) {
    if (*(int *)(iVar2 + 0x60) <= iVar3) {
      return 0;
    }
    iVar1 = *(int *)(iVar2 + 0x5c) + iVar3 * 0x30;
    if ((uVar4 <= *(uint *)(iVar1 + 0x14)) &&
       (iVar1 = FUN_00261810(*(undefined4 *)(iVar1 + 0x10),uVar4,*(uint *)(iVar1 + 0x14),iVar1,
                             param_4), iVar1 == 0)) break;
    iVar3 = iVar3 + 1;
  }
  return 1;
}


