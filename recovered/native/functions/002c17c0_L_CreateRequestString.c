/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c17c0 L_CreateRequestString */

void L_CreateRequestString(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  size_t __maxlen;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uStack_4;
  undefined4 *puVar7;
  
  iVar2 = DAT_002c1858;
  puVar6 = (undefined4 *)(&stack0xffffffec + DAT_002c1858);
  puVar7 = (undefined4 *)(&stack0xffffffec + DAT_002c1858);
  puVar1 = &stack0x00000010 + DAT_002c1858;
  piVar5 = *(int **)(DAT_002c185c + 0x2c17d4);
  *(undefined4 *)(&stack0x00000008 + DAT_002c1858) = param_3;
  iVar4 = *piVar5;
  *(undefined4 *)(&stack0x00000010 + DAT_002c1858) = 0;
  *(int *)(&stack0x00000238 + DAT_002c1858) = iVar4;
  memset(&stack0x00000014 + DAT_002c1858,0,0x1c);
  L_GetCachedHash(puVar1,0x10);
  uVar3 = CCGetDeviceID();
  *(int *)(&stack0xfffffff0 + iVar2) = DAT_002c1860 + 0x2c17fa;
  *(int *)(&stack0xfffffff4 + iVar2) = DAT_002c186c + 0x2c1804;
  *(undefined4 *)((int)&uStack_4 + iVar2) = 0x4c;
  *puVar6 = uVar3;
  *(undefined1 **)(&stack0xfffffff8 + iVar2) = puVar1;
  *(undefined4 *)(&stack0x00000000 + iVar2) = param_4;
  snprintf(&stack0x00000030 + iVar2,0x104,(char *)(DAT_002c1864 + 0x2c1802),DAT_002c1868 + 0x2c1800)
  ;
  CCEscapeWithPercent(&stack0x00000134 + iVar2,0x104,&stack0x00000030 + iVar2);
  __maxlen = *(size_t *)(&stack0x00000008 + iVar2);
  *puVar7 = &stack0x00000134 + iVar2;
  snprintf(param_2,__maxlen,(char *)(DAT_002c1870 + 0x2c1830),DAT_002c1874 + 0x2c1832);
  L_PrintLog((char *)(DAT_002c1878 + 0x2c1840),param_2);
  if (*(int *)(&stack0x00000238 + iVar2) != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


