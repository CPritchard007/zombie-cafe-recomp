/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a9400 javaGetAndroidID */

_jbyteArray *
javaGetAndroidID(undefined4 param_1,undefined4 param_2,undefined4 param_3,_jclass *param_4)

{
  _jbyteArray *p_Var1;
  int iVar2;
  _jbyteArray *p_Var3;
  _jclass *local_14;
  
  iVar2 = DAT_002a944c;
  local_14 = param_4;
  FUN_002a8162(*(undefined4 *)(DAT_002a944c + 0x2a940a),&local_14,param_3,param_4,param_1,param_2,
               param_3);
  p_Var1 = (_jbyteArray *)
           _JNIEnv::CallStaticObjectMethod
                     (local_14,*(_jmethodID **)(iVar2 + 0x2a9412),
                      *(undefined4 *)(DAT_002a9450 + 0x2a941c));
  p_Var3 = p_Var1;
  if (p_Var1 != (_jbyteArray *)0x0) {
    iVar2 = _JNIEnv::GetArrayLength((_jarray *)local_14);
    p_Var3 = (_jbyteArray *)malloc(iVar2 + 1);
    _JNIEnv::GetByteArrayRegion((_JNIEnv *)local_14,p_Var1,0,iVar2,p_Var3);
    p_Var3[iVar2] = (_jbyteArray)0x0;
  }
  return p_Var3;
}


