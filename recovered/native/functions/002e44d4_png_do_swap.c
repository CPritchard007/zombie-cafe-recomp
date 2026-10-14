/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e44d4 png_do_swap */

void png_do_swap(int *param_1,undefined1 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)((int)param_1 + 9) == '\x10') {
    bVar1 = *(byte *)((int)param_1 + 10);
    iVar3 = *param_1;
    for (iVar4 = 0; iVar4 != (uint)bVar1 * iVar3; iVar4 = iVar4 + 1) {
      uVar2 = param_2[1];
      param_2[1] = *param_2;
      *param_2 = uVar2;
      param_2 = param_2 + 2;
    }
  }
  return;
}


