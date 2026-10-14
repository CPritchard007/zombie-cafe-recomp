/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00261718 FUN_00261718 */

int * FUN_00261718(int param_1,int param_2,void *param_3,int param_4)

{
  size_t __n;
  int *piVar1;
  int *__dest;
  int iVar2;
  
  if (param_3 == (void *)0x0) {
    piVar1 = *(int **)(param_1 + 8);
  }
  else {
    __n = FUN_0025b154(param_3);
    piVar1 = (int *)FUN_0025bb3c(param_1 + 0x19c,param_3,__n);
    if ((piVar1 == (int *)0x0) && (param_4 != 0)) {
      piVar1 = (int *)FUN_0025f04c(param_1,__n + 0x3d);
      if (piVar1 == (int *)0x0) {
        return (int *)0x0;
      }
      *(undefined1 *)(piVar1 + 1) = 1;
      *(undefined1 *)(piVar1 + 6) = 2;
      __dest = piVar1 + 0xf;
      *piVar1 = (int)__dest;
      piVar1[5] = (int)__dest;
      piVar1[10] = (int)__dest;
      *(undefined1 *)(piVar1 + 0xb) = 3;
      memcpy(__dest,param_3,__n);
      *(undefined1 *)(*piVar1 + __n) = 0;
      iVar2 = FUN_00260d1c(param_1 + 0x19c,*piVar1,__n,piVar1);
      if (iVar2 != 0) {
        *(undefined1 *)(param_1 + 0x36) = 1;
        FUN_0025fbda(param_1,iVar2);
        return (int *)0x0;
      }
    }
  }
  if (piVar1 != (int *)0x0) {
    piVar1 = piVar1 + (param_2 + -1) * 5;
  }
  return piVar1;
}


