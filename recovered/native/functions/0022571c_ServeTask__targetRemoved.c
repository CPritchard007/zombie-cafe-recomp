/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022571c ServeTask::targetRemoved */

/* ServeTask::targetRemoved(ServeTask*, CafeObject*) */

void ServeTask::targetRemoved(ServeTask *param_1,CafeObject *param_2)

{
  if (param_2 == *(CafeObject **)(param_1 + 0x30)) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    param_1[0x24] = (ServeTask)0x8;
  }
  return;
}


