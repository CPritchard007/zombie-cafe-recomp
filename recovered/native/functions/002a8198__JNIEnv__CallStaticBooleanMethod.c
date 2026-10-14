/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a8198 _JNIEnv::CallStaticBooleanMethod */

/* _JNIEnv::CallStaticBooleanMethod(_jclass*, _jmethodID*, ...) */

void _JNIEnv::CallStaticBooleanMethod(_jclass *param_1,_jmethodID *param_2,...)

{
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 uStack_4;
  
  uStack_4 = in_r3;
  (**(code **)(*(int *)param_1 + 0x1d8))(param_1,param_2,in_r2,&uStack_4,param_1,&uStack_4,in_r2);
  return;
}


