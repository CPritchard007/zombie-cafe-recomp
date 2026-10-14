/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c2100 L_GetPageIndexForName */

/* L_GetPageIndexForName(CMarketingView*, char const*) */

uint L_GetPageIndexForName(CMarketingView *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = DAT_002c2134;
  uVar3 = 0;
  while( true ) {
    if (*(uint *)(**(int **)(param_1 + 0x2c) + iVar1) <= uVar3) {
      return 0xffffffff;
    }
    iVar2 = strcmp(param_2,*(char **)(*(int *)(**(int **)(param_1 + 0x2c) + DAT_002c2138) +
                                      uVar3 * 0x100 + 8));
    if (iVar2 == 0) break;
    uVar3 = uVar3 + 1;
  }
  return uVar3;
}


