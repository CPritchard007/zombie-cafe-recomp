/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b6060 L_GetGameStateFail */

/* L_GetGameStateFail(void*) */

void L_GetGameStateFail(void *param_1)

{
  L_PrintLog((char *)(DAT_002b6094 + 0x2b606e),(char *)(DAT_002b6090 + 0x2b606c));
  *(undefined4 *)((int)param_1 + 0x31c) = 0;
  if (*(code **)((int)param_1 + 0x32c) != (code *)0x0) {
    (**(code **)((int)param_1 + 0x32c))(*(undefined4 *)((int)param_1 + 0x330),4);
  }
  return;
}


