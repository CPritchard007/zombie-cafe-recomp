/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025da38 FUN_0025da38 */

undefined4 FUN_0025da38(undefined4 param_1,char *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = (undefined4 *)(DAT_0025da68 + 0x25da44);
  do {
    iVar1 = strcmp(param_2,(char *)*puVar2);
    if (iVar1 == 0) {
      return *(undefined4 *)(DAT_0025da6c + iVar3 * 0xc + 0x25da5c);
    }
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 3;
  } while (iVar3 != 0x16);
  return 0;
}


