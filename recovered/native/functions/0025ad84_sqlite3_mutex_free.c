/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025ad84 sqlite3_mutex_free */

void sqlite3_mutex_free(int param_1)

{
  if (param_1 != 0) {
    (**(code **)(sqlite3_vfs_unregister + DAT_0025ad94 + 4))();
  }
  return;
}


