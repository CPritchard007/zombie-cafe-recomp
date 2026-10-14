/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002747d4 FUN_002747d4 */

void FUN_002747d4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0xb8) == 0) {
    bVar1 = *(byte *)(param_1 + 0xf);
    if ((**(int **)(param_1 + 0x40) == 0) || (bVar1 == 2)) {
      uVar3 = FUN_00261dac(param_1,0,param_3,**(int **)(param_1 + 0x40),param_4);
      if ((2 < bVar1) && (*(char *)(param_1 + 0xe) == '\0')) {
        *(undefined4 *)(param_1 + 0x28) = 4;
        goto LAB_00274834;
      }
    }
    else {
      uVar3 = FUN_00273d54();
    }
  }
  else {
    uVar2 = FUN_002744a8(param_1,2,0xffffffff);
    uVar3 = FUN_00261dac(param_1,*(undefined1 *)(param_1 + 0x12));
    if (uVar2 != 0) {
      uVar3 = uVar2;
    }
  }
  if (((uVar3 & 0xff) != 10) && ((uVar3 & 0xff) != 0xd)) {
    return;
  }
  *(uint *)(param_1 + 0x28) = uVar3;
LAB_00274834:
  *(undefined1 *)(param_1 + 0xf) = 6;
  return;
}


