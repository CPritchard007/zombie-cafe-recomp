/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b6040 L_GetMetaDataFail */

/* L_GetMetaDataFail(void*) */

void L_GetMetaDataFail(void *param_1)

{
  *(undefined4 *)((int)param_1 + 0x348) = 0;
  if (*(code **)((int)param_1 + 0x358) != (code *)0x0) {
    (**(code **)((int)param_1 + 0x358))(*(undefined4 *)((int)param_1 + 0x35c),4);
  }
  return;
}


