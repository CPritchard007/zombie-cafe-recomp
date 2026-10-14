/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029dca8 XWBMalloc */

/* XWBMalloc(unsigned int, char const*, unsigned int) */

undefined8 XWBMalloc(uint param_1,char *param_2,uint param_3)

{
  void *__s;
  int *piVar1;
  int iVar2;
  int *piVar3;
  size_t __size;
  uint uVar4;
  
  __size = ((param_1 + 5 >> 2) + 1) * 4;
  __s = malloc(__size);
  memset(__s,0x55,__size);
  memcpy((void *)((int)__s + param_1),(void *)(DAT_0029dd20 + 0x29dcd2),5);
  if (*(int *)(DAT_0029dd24 + 0x29dcde) == 0) {
    FUN_0029dc6c();
  }
  piVar1 = (int *)FUN_0029dc48();
  piVar1[2] = (int)__s;
  piVar1[3] = param_1;
  piVar1[5] = param_3;
  iVar2 = DAT_0029dd28;
  piVar1[4] = (int)param_2;
  piVar3 = *(int **)(iVar2 + 0x29dcfe);
  iVar2 = *piVar3;
  *piVar1 = iVar2;
  if (iVar2 != 0) {
    *(int **)(iVar2 + 4) = piVar1;
  }
  piVar1[1] = (int)piVar3;
  *piVar3 = (int)piVar1;
  iVar2 = DAT_0029dd2c;
  *(int *)(DAT_0029dd2c + 0x29dd1a) = *(int *)(DAT_0029dd2c + 0x29dd1a) + 1;
  uVar4 = param_1 + *(int *)(iVar2 + 0x29dd1e);
  *(uint *)(iVar2 + 0x29dd1e) = uVar4;
  if (*(uint *)(iVar2 + 0x29dd16) < uVar4) {
    *(uint *)(iVar2 + 0x29dd16) = uVar4;
  }
  return CONCAT44(param_1,__s);
}


