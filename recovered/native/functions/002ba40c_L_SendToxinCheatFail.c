/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ba40c L_SendToxinCheatFail */

/* L_SendToxinCheatFail(void*) */

void L_SendToxinCheatFail(void *param_1)

{
  L_PrintLog((char *)(DAT_002ba43c + 0x2ba41a),(char *)(DAT_002ba438 + 0x2ba418));
  *(undefined4 *)((int)param_1 + 0x4c0) = 0;
  if (*(code **)((int)param_1 + DAT_002ba440) != (code *)0x0) {
    (**(code **)((int)param_1 + DAT_002ba440))(*(undefined4 *)((int)param_1 + 0x4d0));
  }
  return;
}


