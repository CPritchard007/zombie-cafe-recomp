/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026029a FUN_0026029a */

uint FUN_0026029a(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x60); iVar3 = iVar3 + 1) {
    iVar2 = *(int *)(param_1 + 0x5c) + iVar3 * 0x30;
    if (param_2 <= *(uint *)(iVar2 + 0x14)) {
      uVar1 = FUN_00260168(*(undefined4 *)(iVar2 + 0x10),param_2,*(uint *)(iVar2 + 0x14),iVar2,
                           param_4);
      uVar4 = uVar4 | uVar1;
    }
  }
  return uVar4;
}


