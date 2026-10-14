/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b4ac8 L_SaveMyGameStateFail */

/* L_SaveMyGameStateFail(void*) */

void L_SaveMyGameStateFail(void *param_1)

{
  *(undefined4 *)((int)param_1 + 0x284) = 0;
  if (*(code **)((int)param_1 + 0x290) != (code *)0x0) {
    (**(code **)((int)param_1 + 0x290))(*(undefined4 *)((int)param_1 + 0x298),4);
  }
  return;
}


