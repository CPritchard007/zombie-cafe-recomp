/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ba9c8 L_clearHikitugiDataFail */

/* L_clearHikitugiDataFail(void*) */

void L_clearHikitugiDataFail(void *param_1)

{
  L_PrintLog((char *)(DAT_002ba9f8 + 0x2ba9d6),(char *)(DAT_002ba9f4 + 0x2ba9d4));
  *(undefined4 *)((int)param_1 + 0x560) = 0;
  if (*(code **)((int)param_1 + DAT_002ba9fc) != (code *)0x0) {
    (**(code **)((int)param_1 + DAT_002ba9fc))(*(undefined4 *)((int)param_1 + 0x570));
  }
  return;
}


