/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026656e FUN_0026656e */

void FUN_0026656e(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  void *__dest;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_20 = param_3;
  local_1c = param_4;
  uVar1 = FUN_002662b8();
  iVar2 = param_1[0x13] + 1;
  param_1[0x13] = iVar2;
  __dest = (void *)FUN_0025ee10(*param_1,8);
  if (__dest != (void *)0x0) {
    memcpy(__dest,&local_20,8);
  }
  FUN_002662da(uVar1,8,0,iVar2,0,__dest,0xfffffff3);
  FUN_00263b94(uVar1,1);
  FUN_00265916(uVar1,0,0,param_2,0);
  FUN_0026641e(uVar1,0x10,iVar2,1);
  return;
}


