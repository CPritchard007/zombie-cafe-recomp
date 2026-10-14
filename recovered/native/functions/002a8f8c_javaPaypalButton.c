/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a8f8c javaPaypalButton */

undefined8 javaPaypalButton(undefined4 param_1,_jclass *param_2,undefined4 param_3)

{
  int iVar1;
  _jclass *local_14;
  undefined4 uStack_10;
  
  iVar1 = DAT_002a8fac;
  local_14 = param_2;
  uStack_10 = param_3;
  FUN_002a8162(*(undefined4 *)(DAT_002a8fac + 0x2a8f98),&local_14);
  _JNIEnv::CallStaticVoidMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2a8fa0),*(undefined4 *)(javaCRAM + iVar1 + 4),
             param_1);
  return CONCAT44(local_14,param_1);
}


