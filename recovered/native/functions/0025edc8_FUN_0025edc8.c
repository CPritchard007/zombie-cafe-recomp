/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025edc8 FUN_0025edc8 */

undefined8 FUN_0025edc8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_14;
  undefined4 uStack_10;
  
  iVar1 = DAT_0025ee0c;
  local_14 = 0;
  if (param_1 - 1U <= DAT_0025ee04) {
    local_14 = param_2;
    uStack_10 = param_3;
    if (*(int *)(DAT_0025ee08 + 0x25eddc) == 0) {
      local_14 = (**(code **)(DAT_0025ee08 + 0x25edf8))(param_1);
    }
    else {
      sqlite3_mutex_enter(*(undefined4 *)(DAT_0025ee0c + 0x25ee46));
      FUN_0025aec8(param_1,&local_14);
      sqlite3_mutex_leave(*(undefined4 *)(iVar1 + 0x25ee46));
    }
  }
  return CONCAT44(param_1,local_14);
}


