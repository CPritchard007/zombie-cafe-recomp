/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002648b0 FUN_002648b0 */

uint FUN_002648b0(int *param_1,undefined4 param_2,uint param_3,int param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(*param_1 + 0x18) & 0x40000000;
  if (uVar4 != 0) {
    uVar4 = FUN_00264860();
  }
  uVar3 = 0;
  for (uVar2 = uVar4; uVar2 != 0; uVar2 = *(uint *)(uVar2 + 0x20)) {
    if (*(byte *)(uVar2 + 8) == param_3) {
      if (((param_4 == 0) || (*(int *)(uVar2 + 0x10) == 0)) ||
         (iVar1 = FUN_002647d0(*(int *)(uVar2 + 0x10),param_4), iVar1 != 0)) {
        uVar3 = uVar3 | *(byte *)(uVar2 + 9);
      }
    }
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar3;
  }
  if (uVar3 == 0) {
    uVar4 = 0;
  }
  return uVar4;
}


