/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d7db8 FUN_002d7db8 */

void FUN_002d7db8(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = png_malloc(param_1,0x100,param_3,param_4,param_4);
  *param_2 = iVar2;
  iVar3 = png_gamma_significant(param_3);
  if (iVar3 == 0) {
    do {
      *(char *)(iVar2 + iVar3) = (char)iVar3;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x100);
  }
  else {
    iVar3 = 0;
    do {
      uVar1 = png_gamma_8bit_correct(iVar3,param_3);
      *(undefined1 *)(iVar2 + iVar3) = uVar1;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x100);
  }
  return;
}


