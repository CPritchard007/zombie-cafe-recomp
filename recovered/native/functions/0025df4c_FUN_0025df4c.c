/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025df4c FUN_0025df4c */

void FUN_0025df4c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *__s;
  int iVar4;
  int local_b8 [40];
  int iStack_18;
  
  __s = local_b8;
  memset(__s,0,0xa0);
  while (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = 0;
    iVar4 = 0;
    for (piVar3 = __s; *piVar3 != 0; piVar3 = piVar3 + 1) {
      param_1 = FUN_0025be46(*piVar3,param_1);
      *piVar3 = 0;
      iVar4 = iVar4 + 1;
    }
    __s[iVar4] = param_1;
    param_1 = iVar2;
  }
  uVar1 = 0;
  do {
    iVar2 = *__s;
    __s = __s + 1;
    uVar1 = FUN_0025be46(uVar1,iVar2);
  } while (__s != &iStack_18);
  return;
}


