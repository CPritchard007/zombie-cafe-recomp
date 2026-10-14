/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00275670 FUN_00275670 */

undefined4 FUN_00275670(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 0xb0);
  FUN_0025ad28();
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_00271e10(*(undefined4 *)(param_1 + 0xb8),*(undefined1 *)(param_1 + 9),
               *(undefined4 *)(param_1 + 0x80),uVar3,param_4);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  FUN_002619d4(param_1);
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar2 = **(int **)(param_1 + 0x40);
    if (iVar2 != 0) {
      if ((*(char *)(param_1 + 7) != '\0') ||
         (uVar1 = (**(code **)(iVar2 + 0x14))(*(int **)(param_1 + 0x40),2), uVar1 == 0)) {
        uVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x18))
                          (*(int **)(param_1 + 0x40),param_1 + 0x50);
      }
      if (((uVar1 & 0xff) == 10) || ((uVar1 & 0xff) == 0xd)) {
        *(uint *)(param_1 + 0x28) = uVar1;
        *(undefined1 *)(param_1 + 0xf) = 6;
      }
    }
    FUN_0027483a(param_1);
  }
  else {
    FUN_00261cb6(param_1);
  }
  FUN_0025ad3c();
  FUN_0025acd0(*(undefined4 *)(param_1 + 0x40));
  FUN_0025acd0(*(undefined4 *)(param_1 + 0x3c));
  FUN_0025f6b8(uVar3);
  if (*(int *)(*(int *)(param_1 + 0xb4) + 0x28) != 0) {
    (**(code **)(DAT_0027571c + 0x27579a))();
  }
  sqlite3_free(param_1);
  return 0;
}


