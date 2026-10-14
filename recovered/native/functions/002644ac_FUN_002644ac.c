/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002644ac FUN_002644ac */

void FUN_002644ac(int param_1)

{
  byte bVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
  iVar2 = param_1 + 100;
  do {
    if ((*(int *)(iVar2 + 0x10) != 0) && (*(int *)(param_1 + 0x5c) < *(int *)(iVar2 + 0xc))) {
      if (*(char *)(iVar2 + 8) != '\0') {
        bVar1 = *(byte *)(param_1 + 0x13);
        if (bVar1 < 8) {
          *(int *)(param_1 + (bVar1 + 6) * 4 + 4) = *(int *)(iVar2 + 0x10);
          *(byte *)(param_1 + 0x13) = bVar1 + 1;
        }
        *(undefined1 *)(iVar2 + 8) = 0;
      }
      *(undefined4 *)(iVar2 + 0x10) = 0;
    }
    iVar2 = iVar2 + 0x18;
  } while (iVar2 != param_1 + 0x154);
  return;
}


