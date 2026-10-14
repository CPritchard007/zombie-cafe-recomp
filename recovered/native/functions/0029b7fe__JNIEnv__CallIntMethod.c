/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029b7fe _JNIEnv::CallIntMethod */

/* _JNIEnv::CallIntMethod(_jobject*, _jmethodID*, ...) */

void _JNIEnv::CallIntMethod(_jobject *param_1,_jmethodID *param_2,...)

{
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 uStack_4;
  
  uStack_4 = in_r3;
  (**(code **)(*(int *)param_1 + 200))(param_1,param_2,in_r2,&uStack_4,param_1,&uStack_4);
  return;
}


