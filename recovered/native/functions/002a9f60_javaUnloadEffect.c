/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a9f60 javaUnloadEffect */

undefined8 javaUnloadEffect(undefined4 param_1,_jclass *param_2,undefined4 param_3)

{
  int iVar1;
  _jclass *local_14;
  undefined4 uStack_10;
  
  iVar1 = DAT_002a9f88;
  local_14 = param_2;
  uStack_10 = param_3;
  FUN_002a8162(*(undefined4 *)(DAT_002a9f88 + 0x2a9f6c),&local_14);
  iVar1 = _JNIEnv::CallStaticBooleanMethod
                    (local_14,*(_jmethodID **)(iVar1 + 0x2a9f74),
                     *(undefined4 *)(DAT_002a9f8c + 0x2a9faa),param_1);
  return CONCAT44(param_1,(uint)(iVar1 != 0));
}


