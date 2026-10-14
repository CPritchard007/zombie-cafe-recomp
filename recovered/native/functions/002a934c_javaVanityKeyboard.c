/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a934c javaVanityKeyboard */

undefined8 javaVanityKeyboard(undefined4 param_1,_jclass *param_2)

{
  int iVar1;
  _jclass *local_c;
  
  iVar1 = DAT_002a9368;
  local_c = param_2;
  FUN_002a8162(*(undefined4 *)(DAT_002a9368 + 0x2a9356),&local_c);
  _JNIEnv::CallStaticVoidMethod
            (local_c,*(_jmethodID **)(iVar1 + 0x2a935e),*(undefined4 *)(iVar1 + 0x2a93ca));
  return CONCAT44(local_c,param_1);
}


