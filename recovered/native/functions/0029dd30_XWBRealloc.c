/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029dd30 XWBRealloc */

/* XWBRealloc(void*, unsigned int, char const*, unsigned int) */

void * XWBRealloc(void *param_1,uint param_2,char *param_3,uint param_4)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 local_20;
  int local_1c;
  
  pvVar2 = realloc(param_1,((param_2 + 5 >> 2) + 1) * 4);
  memcpy((void *)((int)pvVar2 + param_2),(void *)(DAT_0029ddb0 + 0x29dd52),5);
  piVar4 = *(int **)(DAT_0029ddb4 + 0x29dd64);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    do {
      piVar4 = (int *)*piVar4;
      if (piVar4 == (int *)*(int *)(DAT_0029ddb4 + 0x29dd60)) {
        piVar4 = (int *)0x0;
        goto LAB_0029dd86;
      }
      if (piVar4 == (int *)0x0) goto LAB_0029dd86;
    } while ((void *)piVar4[2] != param_1);
    local_1c = piVar4[3];
    local_20 = piVar4[7];
    param_3 = (char *)piVar4[4];
    param_4 = piVar4[5];
  }
LAB_0029dd86:
  *(uint *)((int)piVar4 + 0xc) = param_2;
  *(uint *)((int)piVar4 + 0x14) = param_4;
  *(undefined4 *)((int)piVar4 + 0x1c) = local_20;
  *(void **)((int)piVar4 + 8) = pvVar2;
  *(char **)((int)piVar4 + 0x10) = param_3;
  iVar1 = DAT_0029ddb8;
  uVar3 = *(uint *)(DAT_0029ddb8 + 0x29dda6);
  uVar5 = (param_2 + *(int *)(&UNK_0029ddae + DAT_0029ddb8)) - local_1c;
  *(uint *)(&UNK_0029ddae + DAT_0029ddb8) = uVar5;
  if (uVar3 < uVar5) {
    *(uint *)(iVar1 + 0x29dda6) = uVar5;
  }
  return pvVar2;
}


