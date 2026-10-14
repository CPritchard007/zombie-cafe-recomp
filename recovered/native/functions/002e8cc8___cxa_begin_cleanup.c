/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e8cc8 __cxa_begin_cleanup */

undefined4 __cxa_begin_cleanup(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_002e9020();
  if ((*param_1 == DAT_002e8cfc) && (param_1[1] == DAT_002e8d00)) {
    iVar2 = param_1[-6];
    param_1[-6] = iVar2 + 1;
    if (iVar2 + 1 == 1) {
      param_1[-7] = *(int *)(iVar1 + 8);
      *(int **)(iVar1 + 8) = param_1 + -0xe;
    }
  }
  else {
    *(int **)(iVar1 + 8) = param_1 + -0xe;
  }
  return 1;
}


