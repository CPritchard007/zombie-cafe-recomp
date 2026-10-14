/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025ccc4 FUN_0025ccc4 */

uint FUN_0025ccc4(char *param_1)

{
  char cVar1;
  uint uVar2;
  
  for (; cVar1 = *param_1, cVar1 == 't';
      param_1 = (char *)**(undefined4 **)(**(int **)(param_1 + 0x10) + 8)) {
  }
  if (cVar1 == '%') {
    uVar2 = FUN_0025cbf8(*(undefined4 *)(param_1 + 4));
  }
  else if ((((cVar1 == -0x68) || (cVar1 == -0x66)) || (cVar1 == -0x7c)) &&
          (*(int *)(param_1 + 0x28) != 0)) {
    uVar2 = 100;
    if (-1 < *(short *)(param_1 + 0x1c)) {
      uVar2 = (uint)*(byte *)(*(int *)(*(int *)(param_1 + 0x28) + 0xc) +
                              *(short *)(param_1 + 0x1c) * 0x18 + 0x16);
    }
  }
  else {
    uVar2 = (uint)(byte)param_1[1];
  }
  return uVar2;
}


