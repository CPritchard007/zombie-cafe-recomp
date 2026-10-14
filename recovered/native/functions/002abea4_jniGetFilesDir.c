/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002abea4 jniGetFilesDir */

/* jniGetFilesDir(_JNIEnv*, _jobject*, char*, int) */

undefined8 jniGetFilesDir(_JNIEnv *param_1,_jobject *param_2,char *param_3,int param_4)

{
  undefined4 uVar1;
  _jmethodID *p_Var2;
  undefined4 uVar3;
  _JNIEnv *p_Var4;
  char *pcVar5;
  
  p_Var4 = param_1;
  pcVar5 = param_3;
  uVar1 = (**(code **)(*(int *)param_1 + 0x18))(param_1,DAT_002abf48 + 0x2abeb4);
  uVar1 = (**(code **)(*(int *)param_1 + 0x84))
                    (param_1,uVar1,DAT_002abf4c + 0x2abecc,DAT_002abf50 + 0x2abec8,p_Var4,param_4,
                     pcVar5);
  p_Var2 = (_jmethodID *)_JNIEnv::CallObjectMethod((_jobject *)param_1,(_jmethodID *)param_2,uVar1);
  uVar1 = (**(code **)(*(int *)param_1 + 0x18))(param_1,DAT_002abf54 + 0x2abee4);
  uVar1 = (**(code **)(*(int *)param_1 + 0x84))
                    (param_1,uVar1,DAT_002abf58 + 0x2abef8,DAT_002abf5c + 0x2abef4);
  uVar1 = _JNIEnv::CallObjectMethod((_jobject *)param_1,p_Var2,uVar1);
  uVar3 = (**(code **)(*(int *)param_1 + 0x2a4))(param_1,uVar1,0);
  snprintf(param_3,param_4,(char *)(DAT_002abf60 + 0x2abf22),uVar3);
  (**(code **)(*(int *)param_1 + 0x2a8))(param_1,uVar1,uVar3);
  __android_log_print(3,DAT_002abf64 + 0x2abf3e,DAT_002abf68 + 0x2abf40,param_3);
  return CONCAT44(p_Var4,param_3);
}


