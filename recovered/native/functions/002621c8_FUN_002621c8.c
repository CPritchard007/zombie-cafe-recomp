/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002621c8 FUN_002621c8 */

void FUN_002621c8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = FUN_0025f04c(0,0x54);
  }
  else {
    iVar3 = *(int *)(param_2 + 4);
    FUN_00261f68(param_2);
    if (*(int *)(iVar3 + 0x30) == 0) {
      uVar2 = FUN_0025f04c(0,0x54);
      iVar1 = DAT_00262240;
      *(undefined4 *)(iVar3 + 0x30) = uVar2;
      *(int *)(iVar3 + 0x34) = iVar1 + 0x2621ec;
    }
    FUN_00262002(param_2);
    iVar3 = *(int *)(iVar3 + 0x30);
  }
  if (iVar3 == 0) {
    *(undefined1 *)(param_1 + 0x36) = 1;
  }
  else if (*(char *)(iVar3 + 0x4c) == '\0') {
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0;
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    *(undefined4 *)(iVar3 + 0x20) = 0;
    *(undefined4 *)(iVar3 + 0x1c) = 0;
    *(undefined4 *)(iVar3 + 0x18) = 0;
    *(undefined4 *)(iVar3 + 0x24) = 0;
    *(undefined4 *)(iVar3 + 0x30) = 0;
    *(undefined4 *)(iVar3 + 0x2c) = 0;
    *(undefined4 *)(iVar3 + 0x28) = 0;
    *(undefined4 *)(iVar3 + 0x34) = 0;
    *(undefined4 *)(iVar3 + 0x40) = 0;
    *(undefined4 *)(iVar3 + 0x3c) = 0;
    *(undefined4 *)(iVar3 + 0x38) = 0;
    *(undefined4 *)(iVar3 + 0x44) = 0;
    *(undefined1 *)(iVar3 + 0x4d) = 1;
  }
  return;
}


