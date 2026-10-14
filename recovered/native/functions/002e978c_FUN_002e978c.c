/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e978c FUN_002e978c */

int FUN_002e978c(void)

{
  int *piVar1;
  int iVar2;
  
  FUN_002e9254();
  piVar1 = (int *)FUN_002ea13c();
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + (int)piVar1);
  }
  return iVar2;
}


