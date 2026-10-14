/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c1a50 L_ProjNeedsWebView */

undefined4 L_ProjNeedsWebView(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (iVar1 == *(int *)(*param_1 + DAT_002c1a78)) {
      return 0;
    }
    if (*(int *)(*(int *)(*param_1 + DAT_002c1a7c) + iVar1 * 0x100 + 0xc) == 2) break;
    iVar1 = iVar1 + 1;
  }
  return 1;
}


