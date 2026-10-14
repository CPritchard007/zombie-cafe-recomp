/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024a2e4 Vector<ZombieCafe::ZombieDlcEntry>::insertElementAt */

/* Vector<ZombieCafe::ZombieDlcEntry>::insertElementAt(ZombieCafe::ZombieDlcEntry, int) */

void Vector<ZombieCafe::ZombieDlcEntry>::insertElementAt
               (Vector<ZombieCafe::ZombieDlcEntry> *param_1,undefined4 param_2,undefined4 param_3,
               undefined4 param_4)

{
  int in_stack_000005d0;
  undefined4 local_8;
  undefined4 local_4;
  
  if (-1 < in_stack_000005d0) {
    local_8 = param_3;
    local_4 = param_4;
    if (*(int *)(param_1 + 4) + 1 < *(int *)param_1) {
      move(param_1,in_stack_000005d0,1);
    }
    else {
      resize(param_1,*(int *)(param_1 + 4) << 1,in_stack_000005d0);
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    memcpy((void *)(*(int *)(param_1 + 8) + in_stack_000005d0 * 0x5d8),&local_8,0x5d8);
  }
  return;
}


