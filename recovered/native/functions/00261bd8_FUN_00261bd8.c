/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00261bd8 FUN_00261bd8 */

void FUN_00261bd8(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  code *pcVar4;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x30))();
    uVar2 = 0x1000;
    if ((uVar1 & 0x1000) == 0) {
      pcVar4 = *(code **)(**(int **)(param_1 + 0x3c) + 0x2c);
      if (pcVar4 != (code *)0x0) {
        uVar2 = (*pcVar4)(*(int **)(param_1 + 0x3c));
      }
      *(uint *)(param_1 + 0x7c) = uVar2;
      if (uVar2 < 0x20) {
        *(undefined4 *)(param_1 + 0x7c) = 0x200;
      }
      uVar3 = 0x10000;
      if (*(uint *)(param_1 + 0x7c) < 0x10001) {
        return;
      }
      goto LAB_00261c1e;
    }
  }
  uVar3 = 0x200;
LAB_00261c1e:
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  return;
}


