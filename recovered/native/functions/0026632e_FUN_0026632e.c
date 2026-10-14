/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026632e FUN_0026632e */

void FUN_0026632e(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  void *__dest;
  undefined1 auStack_20 [4];
  int local_1c;
  
  if (param_2 != 0) {
    uVar1 = FUN_0025b154(param_2);
    FUN_0025b268(param_2,auStack_20,uVar1,1);
    if (param_3 != 0) {
      local_1c = local_1c + -0x80000000;
    }
    __dest = (void *)FUN_0025ee10(*param_1,8);
    if (__dest != (void *)0x0) {
      memcpy(__dest,auStack_20,8);
    }
    FUN_002662da(param_1,0x82,0,param_4,0,__dest,0xfffffff4);
  }
  return;
}


