/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024aa54 std::string::_M_range_initialize */

/* std::string::_M_range_initialize(char const*, char const*) */

void std::string::_M_range_initialize(char *param_1,char *param_2)

{
  undefined1 *__dest;
  void *pvVar1;
  char *in_r2;
  size_t __n;
  
  __n = (int)in_r2 - (int)param_2;
  FUN_0024aa18(param_1,__n + 1);
  __dest = *(undefined1 **)(param_1 + 0x14);
  if (in_r2 != param_2) {
    pvVar1 = memcpy(__dest,param_2,__n);
    __dest = (undefined1 *)((int)pvVar1 + __n);
  }
  *(undefined1 **)(param_1 + 0x10) = __dest;
  *__dest = 0;
  return;
}


