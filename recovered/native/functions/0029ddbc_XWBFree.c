/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029ddbc XWBFree */

/* XWBFree(void*, char const*, char const*, unsigned int) */

void XWBFree(void *param_1,char *param_2,char *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  size_t __n;
  int iVar3;
  int iVar4;
  int iVar5;
  int *__ptr;
  
  iVar1 = DAT_0029de94;
  __ptr = *(int **)(DAT_0029de90 + 0x29ddd4);
  if (__ptr == (int *)0x0) {
LAB_0029de0c:
    if (param_1 != (void *)0x0) {
      free(param_1);
    }
  }
  else {
    do {
      __ptr = (int *)*__ptr;
      if ((__ptr == *(int **)(DAT_0029de90 + 0x29ddd0)) || (__ptr == (int *)0x0)) goto LAB_0029de0c;
    } while ((void *)__ptr[2] != param_1);
    __n = __ptr[3];
    iVar4 = __ptr[4];
    iVar3 = __ptr[5];
    iVar5 = __ptr[7];
    iVar2 = memcmp((void *)((int)param_1 + __n),(void *)(DAT_0029de94 + 0x29ddf4),5);
    if (iVar2 != 0) {
      printf((char *)(DAT_0029de98 + 0x29de22),iVar1 + 0x29ddf9,iVar5,param_2,iVar4,iVar3);
      printf((char *)(DAT_0029de9c + 0x29de32),param_2,param_3,param_4);
    }
    memset(param_1,0xaa,__n);
    if (*(int *)(DAT_0029dea0 + 0x29de5e) == 0) {
      __ptr[6] = (int)param_2;
      __ptr[4] = (int)param_3;
      __ptr[5] = param_4;
    }
    else {
      free(param_1);
      if (*__ptr != 0) {
        *(int *)(*__ptr + 4) = __ptr[1];
      }
      if ((int *)__ptr[1] != (int *)0x0) {
        *(int *)__ptr[1] = *__ptr;
      }
      free(__ptr);
    }
    *(size_t *)((int)&DAT_0029de90 + DAT_0029dea4 + 2) =
         *(int *)((int)&DAT_0029de90 + DAT_0029dea4 + 2) - __n;
  }
  return;
}


