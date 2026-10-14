/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002baaf0 L_logHikitugiDataFail */

/* L_logHikitugiDataFail(void*) */

void L_logHikitugiDataFail(void *param_1)

{
  L_PrintLog((char *)(DAT_002bab20 + 0x2baafe),(char *)(DAT_002bab1c + 0x2baafc));
  *(undefined4 *)((int)param_1 + 0x560) = 0;
  if (*(code **)((int)param_1 + DAT_002bab24) != (code *)0x0) {
    (**(code **)((int)param_1 + DAT_002bab24))(*(undefined4 *)((int)param_1 + 0x570));
  }
  return;
}


