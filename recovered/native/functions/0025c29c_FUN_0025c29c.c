/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025c29c FUN_0025c29c */

int FUN_0025c29c(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (1 < param_2) {
    iVar3 = __udivsi3(*(undefined4 *)(param_1 + 0x24),5);
    iVar1 = __udivsi3(param_2 - 2,iVar3 + 1);
    iVar1 = iVar1 * (iVar3 + 1);
    iVar2 = __udivsi3(*(undefined4 *)(DAT_0025c2d8 + 0x25c330),*(undefined4 *)(param_1 + 0x20));
    iVar3 = iVar1 + 2;
    if (iVar3 == iVar2 + 1) {
      iVar3 = iVar1 + 3;
    }
  }
  return iVar3;
}


