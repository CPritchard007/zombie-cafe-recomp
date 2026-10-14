/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024aa18 FUN_0024aa18 */

undefined8 FUN_0024aa18(int *param_1,uint param_2)

{
  void *pvVar1;
  uint local_c;
  
  local_c = param_2;
  if (param_2 == 0) {
    std::__stl_throw_length_error((char *)(DAT_0024aa50 + 0x24aa4a));
  }
  else if (0x10 < param_2) {
    if (param_2 < 0x81) {
      pvVar1 = (void *)std::__node_alloc::_M_allocate(&local_c);
    }
    else {
      pvVar1 = operator_new(param_2);
    }
    param_1[5] = (int)pvVar1;
    param_1[4] = (int)pvVar1;
    *param_1 = (int)pvVar1 + local_c;
  }
  return CONCAT44(local_c,param_1);
}


