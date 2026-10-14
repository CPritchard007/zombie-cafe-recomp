/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e4c7c FUN_002e4c7c */

undefined4 FUN_002e4c7c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (0 < param_2) {
    uVar1 = png_malloc(param_1,param_2,param_3,param_4,param_4);
    *(undefined4 *)(param_1 + 0x2d4) = uVar1;
    iVar3 = 0;
    do {
      *(undefined1 *)(*(int *)(param_1 + 0x2d4) + iVar3) = 0xff;
      iVar3 = iVar3 + 1;
    } while (iVar3 != param_2);
    uVar1 = png_malloc(param_1,param_2 * 2,0x2d4,iVar3,param_4);
    *(undefined4 *)(param_1 + 0x2d8) = uVar1;
    uVar1 = png_malloc(param_1,param_2 * 2);
    *(undefined4 *)(param_1 + 0x2dc) = uVar1;
    iVar3 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x2dc);
      iVar2 = iVar3 * 2;
      iVar3 = iVar3 + 1;
      *(undefined2 *)(*(int *)(param_1 + 0x2d8) + iVar2) = 0x100;
      *(undefined2 *)(iVar4 + iVar2) = 0x100;
      param_3 = DAT_002e4d1c;
    } while (iVar3 != param_2);
    *(char *)(param_1 + DAT_002e4d1c) = (char)iVar3;
  }
  if (*(int *)(param_1 + 0x2e0) == 0) {
    uVar1 = png_malloc(param_1,10,param_3,0,param_4);
    *(undefined4 *)(param_1 + 0x2e0) = uVar1;
    uVar1 = png_malloc(param_1,10);
    *(undefined4 *)(param_1 + 0x2e4) = uVar1;
  }
  iVar3 = 0;
  do {
    iVar2 = *(int *)(param_1 + 0x2e4);
    *(undefined2 *)(*(int *)(param_1 + 0x2e0) + iVar3) = 8;
    *(undefined2 *)(iVar2 + iVar3) = 8;
    iVar3 = iVar3 + 2;
  } while (iVar3 != 10);
  *(undefined1 *)(param_1 + 0x2d0) = 2;
  return 1;
}


