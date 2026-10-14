/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002cb4fc jpeg_open_backing_store */

void jpeg_open_backing_store(int *param_1,int *param_2)

{
  int iVar1;
  FILE *pFVar2;
  int *__s;
  
  iVar1 = DAT_002cb584;
  __s = param_2 + 4;
  *(int *)(DAT_002cb580 + 0x2cb508) = *(int *)(DAT_002cb580 + 0x2cb508) + 1;
  sprintf((char *)__s,(char *)(iVar1 + 0x2cb516),DAT_002cb588 + 0x2cb51a);
  mktemp((char *)__s);
  pFVar2 = fopen((char *)__s,(char *)(DAT_002cb58c + 0x2cb52c));
  param_2[3] = (int)pFVar2;
  if (pFVar2 == (FILE *)0x0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x41;
    strncpy((char *)(*param_1 + 0x18),(char *)__s,0x50);
    (**(code **)*param_1)(param_1);
  }
  *param_2 = DAT_002cb590 + 0x2cb558;
  param_2[1] = DAT_002cb594 + 0x2cb55e;
  param_2[2] = DAT_002cb598 + 0x2cb564;
  *(undefined4 *)(*param_1 + 0x14) = 0x6d;
  strncpy((char *)(*param_1 + 0x18),(char *)__s,0x50);
  (**(code **)(*param_1 + 4))(param_1,1);
  return;
}


