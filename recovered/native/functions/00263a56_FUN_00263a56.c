/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00263a56 FUN_00263a56 */

void FUN_00263a56(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  
  iVar4 = *param_1;
  FUN_00263730();
  puVar1 = (undefined4 *)FUN_0025ee10(iVar4,0x40);
  param_1[9] = (int)puVar1;
  uVar3 = 1;
  if (*(char *)(iVar4 + 0x36) == '\0') {
    iVar2 = FUN_0025f450(iVar4,puVar1,param_3,1,param_4);
    puVar1[4] = puVar1 + 8;
    *(undefined1 *)((int)puVar1 + 0x1a) = 1;
    *puVar1 = 0;
    puVar1[1] = iVar4;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[5] = 0;
    *(short *)(puVar1 + 6) = (short)(iVar2 - 0x20U >> 4);
    *(undefined1 *)((int)puVar1 + 0x1b) = 0;
    uVar3 = 0x20;
    param_1[4] = (int)puVar1;
  }
  *(undefined2 *)(param_1 + 7) = uVar3;
  return;
}


