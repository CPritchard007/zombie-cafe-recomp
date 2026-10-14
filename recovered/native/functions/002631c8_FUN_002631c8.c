/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002631c8 FUN_002631c8 */

undefined4 FUN_002631c8(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  if (param_2 == (int *)0x0) {
    if (param_1 == (int *)0x0) {
      return 0;
    }
  }
  else if (param_1 != (int *)0x0) {
    iVar7 = *param_1;
    if (iVar7 != *param_2) {
      return 1;
    }
    iVar6 = 0;
    while( true ) {
      if (iVar7 <= iVar6) {
        return 0;
      }
      puVar4 = (undefined4 *)(param_1[2] + iVar6 * 0x14);
      puVar5 = (undefined4 *)(param_2[2] + iVar6 * 0x14);
      cVar1 = *(char *)(puVar4 + 3);
      cVar2 = *(char *)(puVar5 + 3);
      if ((cVar1 != cVar2) ||
         (iVar3 = FUN_0026321e(*puVar4,*puVar5,cVar1,cVar2,param_4), iVar3 != 0)) break;
      iVar6 = iVar6 + 1;
    }
  }
  return 1;
}


