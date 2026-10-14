/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ece4c DishToCounterTask::targetRemoved */

/* DishToCounterTask::targetRemoved(DishToCounterTask*, CafeObject*) */

void DishToCounterTask::targetRemoved(DishToCounterTask *param_1,CafeObject *param_2)

{
  DishToCounterTask DVar1;
  
  if (param_2 == *(CafeObject **)(param_1 + 0x34)) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    DVar1 = (DishToCounterTask)0x3;
  }
  else {
    if (param_2 != *(CafeObject **)(param_1 + 0x38)) {
      return;
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    DVar1 = (DishToCounterTask)0x7;
  }
  param_1[0x24] = DVar1;
  return;
}


