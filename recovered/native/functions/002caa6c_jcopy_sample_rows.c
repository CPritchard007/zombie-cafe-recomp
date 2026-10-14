/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002caa6c jcopy_sample_rows */

void jcopy_sample_rows(int param_1,int param_2,int param_3,int param_4,int param_5,size_t param_6)

{
  void *__dest;
  void *__src;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + param_2 * 4);
  puVar1 = (undefined4 *)(param_3 + param_4 * 4);
  for (; 0 < param_5; param_5 = param_5 + -1) {
    __src = (void *)*puVar2;
    puVar2 = puVar2 + 1;
    __dest = (void *)*puVar1;
    puVar1 = puVar1 + 1;
    memcpy(__dest,__src,param_6);
  }
  return;
}


