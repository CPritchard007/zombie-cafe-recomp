/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bb7c0 FUN_002bb7c0 */

undefined4 FUN_002bb7c0(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  while ((param_2 == 0xe2 || (param_2 + DAT_002bb818 == 0))) {
    param_2 = 0xa4;
  }
  if (*(int *)(param_1 + 0x118) == 0) {
    if (*(uint *)(param_1 + 0x18) < param_2) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x1c));
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x11c) + (param_2 & 0xff) * 0x200;
    uVar1 = 0xffffffff;
    iVar3 = 0;
    do {
      if (*(uint *)(iVar2 + iVar3) == param_2) {
        uVar1 = *(undefined4 *)(iVar2 + iVar3 + 4);
      }
      iVar3 = iVar3 + 8;
    } while (iVar3 != 0x200);
  }
  return uVar1;
}


