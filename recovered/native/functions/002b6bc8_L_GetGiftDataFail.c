/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b6bc8 L_GetGiftDataFail */

/* L_GetGiftDataFail(void*) */

void L_GetGiftDataFail(void *param_1)

{
  L_PrintLog((char *)(DAT_002b6c08 + 0x2b6bd6),(char *)(DAT_002b6c04 + 0x2b6bd4));
  *(undefined4 *)((int)param_1 + 0x360) = 0;
  if (*(code **)((int)param_1 + 0x36c) != (code *)0x0) {
    (**(code **)((int)param_1 + 0x36c))(*(undefined4 *)((int)param_1 + 0x370),4);
  }
  L_PrintLog((char *)(DAT_002b6c0c + 0x2b6bfc),(char *)(DAT_002b6c10 + 0x2b6bfe));
  return;
}


