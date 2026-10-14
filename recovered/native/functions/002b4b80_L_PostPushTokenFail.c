/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b4b80 L_PostPushTokenFail */

/* L_PostPushTokenFail(void*) */

void L_PostPushTokenFail(void *param_1)

{
  *(undefined4 *)((int)param_1 + 0x284) = 0;
  if (*(code **)((int)param_1 + 0x290) != (code *)0x0) {
    (**(code **)((int)param_1 + 0x290))(*(undefined4 *)((int)param_1 + 0x298),4);
  }
  return;
}


