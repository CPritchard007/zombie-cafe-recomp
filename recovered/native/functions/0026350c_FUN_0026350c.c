/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026350c FUN_0026350c */

/* WARNING: Removing unreachable block (ram,0x00263550) */
/* WARNING: Removing unreachable block (ram,0x00263570) */

int FUN_0026350c(int param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  void *__s;
  size_t __n;
  longlong lVar3;
  uint local_20;
  int local_1c;
  
  __n = *(size_t *)(param_1 + 0x80);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x18))(*(int **)(param_1 + 0x3c),&local_20);
  if (iVar1 != 0) {
    return iVar1;
  }
  lVar3 = __muldi3(__n,(int)__n >> 0x1f,param_2,0);
  if (lVar3 == CONCAT44(local_1c,local_20)) {
    return 0;
  }
  if (lVar3 < CONCAT44(local_1c,local_20)) {
    pcVar2 = *(code **)(**(int **)(param_1 + 0x3c) + 0x10);
    iVar1 = (*pcVar2)(*(int **)(param_1 + 0x3c),pcVar2,(int)lVar3,(int)((ulonglong)lVar3 >> 0x20));
  }
  else {
    if (lVar3 < CONCAT44(local_1c + ((int)__n >> 0x1f) + (uint)CARRY4(local_20,__n),local_20 + __n))
    goto LAB_002635a0;
    __s = *(void **)(param_1 + 0xb0);
    memset(__s,0,__n);
    iVar1 = FUN_0025ace6(*(undefined4 *)(param_1 + 0x3c),__s,__n);
  }
  if (iVar1 != 0) {
    return iVar1;
  }
LAB_002635a0:
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return 0;
}


