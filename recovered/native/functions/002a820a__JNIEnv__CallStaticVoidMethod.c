/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a820a _JNIEnv::CallStaticVoidMethod */

/* _JNIEnv::CallStaticVoidMethod(_jclass*, _jmethodID*, ...) */

undefined8 _JNIEnv::CallStaticVoidMethod(_jclass *param_1,_jmethodID *param_2,...)

{
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 uStack_4;
  
  uStack_4 = in_r3;
  (**(code **)(*(int *)param_1 + 0x238))(param_1,param_2,in_r2);
  return CONCAT44(&uStack_4,param_1);
}


