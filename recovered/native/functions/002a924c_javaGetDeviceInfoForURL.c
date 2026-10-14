/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a924c javaGetDeviceInfoForURL */

_jbyteArray *
javaGetDeviceInfoForURL(undefined4 param_1,undefined4 param_2,undefined4 param_3,_jclass *param_4)

{
  int iVar1;
  _jbyteArray *p_Var2;
  String *this;
  _jbyteArray *p_Var3;
  _jclass *local_14;
  
  iVar1 = DAT_002a9294;
  local_14 = param_4;
  FUN_002a8162(*(undefined4 *)(DAT_002a9294 + 0x2a9256),&local_14,param_3,param_4,param_1,param_2,
               param_3);
  p_Var2 = (_jbyteArray *)
           _JNIEnv::CallStaticObjectMethod
                     (local_14,*(_jmethodID **)(iVar1 + 0x2a925e),*(undefined4 *)(iVar1 + 0x2a92b6))
  ;
  p_Var3 = p_Var2;
  if (p_Var2 != (_jbyteArray *)0x0) {
    this = (String *)_JNIEnv::GetArrayLength((_jarray *)local_14);
    p_Var3 = (_jbyteArray *)String::Test(this);
    _JNIEnv::GetByteArrayRegion((_JNIEnv *)local_14,p_Var2,0,(int)this,p_Var3);
    p_Var3[(int)this] = (_jbyteArray)0x0;
  }
  return p_Var3;
}


