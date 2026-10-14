/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00262244 FUN_00262244 */

undefined4 FUN_00262244(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = 0;
  uVar2 = 0;
  if (*(char *)(param_1 + 0x5b) == '\x01') {
    if (*(short *)(param_1 + 0x42) == 0) {
      FUN_00260b32(*(undefined4 *)((*(short *)(param_1 + 0x5e) + 0x22) * 4 + param_1),
                   *(undefined2 *)((*(short *)(param_1 + 0x5e) + 0x30) * 2 + param_1),param_1 + 0x28
                  );
      *(undefined1 *)(param_1 + 0x5a) = 1;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x28);
    uVar2 = *(undefined4 *)(param_1 + 0x2c);
  }
  *param_2 = uVar1;
  param_2[1] = uVar2;
  return 0;
}


