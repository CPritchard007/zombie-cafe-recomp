/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025fb8c FUN_0025fb8c */

undefined4 FUN_0025fb8c(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[1];
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    sqlite3_free(piVar1);
    piVar1 = (int *)iVar2;
  }
  memset(param_1,0,0x28);
  *param_1 = DAT_0025fbb8 + 0x25fc0c;
  return 0;
}


