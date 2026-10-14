/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b4dd4 L_SaveLinkedGameStateFail */

/* L_SaveLinkedGameStateFail(void*) */

undefined8 L_SaveLinkedGameStateFail(void *param_1)

{
  undefined4 in_r1;
  undefined4 local_10;
  
  *(undefined4 *)((int)param_1 + 0x284) = 0;
  local_10 = param_1;
  if (*(code **)((int)param_1 + 0x294) != (code *)0x0) {
    local_10 = (void *)0x0;
    (**(code **)((int)param_1 + 0x294))
              (*(undefined4 *)((int)param_1 + 0x298),4,DAT_002b4dfc + 0x2b4df8);
  }
  return CONCAT44(in_r1,local_10);
}


