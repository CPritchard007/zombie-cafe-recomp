/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00261cb6 FUN_00261cb6 */

void FUN_00261cb6(int param_1)

{
  int iVar1;
  
  FUN_0025f68e(*(undefined4 *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x38) = 0;
  FUN_0025f884(param_1);
  if (*(int *)(param_1 + 0xb8) != 0) {
    FUN_00261c6e();
    *(undefined1 *)(param_1 + 0xf) = 0;
    goto LAB_00261d20;
  }
  if (*(char *)(param_1 + 4) != '\0') goto LAB_00261d20;
  iVar1 = **(int **)(param_1 + 0x3c);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(iVar1 + 0x30))();
  }
  if (iVar1 << 0x14 < 0) {
    if ((*(byte *)(param_1 + 5) & 5) != 1) goto LAB_00261cfe;
  }
  else {
LAB_00261cfe:
    FUN_0025acd0(*(undefined4 *)(param_1 + 0x40));
  }
  iVar1 = FUN_0025bf70(param_1,0);
  if ((iVar1 != 0) && (*(char *)(param_1 + 0xf) == '\x06')) {
    *(undefined1 *)(param_1 + 0x10) = 5;
  }
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
LAB_00261d20:
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_002619d4(param_1);
    *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_1 + 0xc);
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  return;
}


