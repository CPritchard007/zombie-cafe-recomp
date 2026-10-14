/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002632f4 FUN_002632f4 */

undefined4 FUN_002632f4(undefined4 param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if (param_2 == (char *)0x0) {
    iVar4 = DAT_0026336c + 0x263308;
    iVar6 = 0;
    do {
      iVar3 = iVar4 + iVar6;
      iVar2 = *(int *)(iVar3 + 8);
      if (iVar2 != 0) {
        *(int *)(iVar3 + 4) = iVar2;
      }
      iVar6 = iVar6 + 0xc;
    } while (iVar6 != 0x108);
LAB_0026335a:
    uVar1 = 0;
  }
  else {
    iVar6 = 0;
    puVar5 = (undefined4 *)(DAT_00263370 + 0x263320);
    do {
      iVar4 = strcmp(param_2,(char *)*puVar5);
      if (iVar4 == 0) {
        iVar4 = DAT_00263374 + 0x263334 + iVar6 * 0xc;
        if (*(int *)(iVar4 + 8) == 0) {
          *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar4 + 4);
        }
        if (param_3 == 0) {
          param_3 = *(int *)(DAT_00263378 + iVar6 * 0xc + 0x263354);
        }
        *(int *)(DAT_0026337c + iVar6 * 0xc + 0x26335c) = param_3;
        goto LAB_0026335a;
      }
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 3;
    } while (iVar6 != 0x16);
    uVar1 = 0xc;
  }
  return uVar1;
}


