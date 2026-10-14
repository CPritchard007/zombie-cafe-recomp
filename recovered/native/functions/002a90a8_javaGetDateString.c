/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a90a8 javaGetDateString */

_jbyteArray *
javaGetDateString(undefined4 param_1,undefined4 param_2,undefined4 param_3,_jclass *param_4)

{
  int iVar1;
  _jbyteArray *p_Var2;
  size_t __size;
  _jbyteArray *p_Var3;
  _jclass *local_14;
  
  iVar1 = DAT_002a90f4;
  local_14 = param_4;
  FUN_002a8162(*(undefined4 *)(DAT_002a90f4 + 0x2a90b4),&local_14,param_3,param_4,param_1,param_2,
               param_3);
  p_Var2 = (_jbyteArray *)
           _JNIEnv::CallStaticObjectMethod
                     (local_14,*(_jmethodID **)(iVar1 + 0x2a90bc),*(undefined4 *)(iVar1 + 0x2a90e4),
                      param_1);
  p_Var3 = p_Var2;
  if (p_Var2 != (_jbyteArray *)0x0) {
    __size = _JNIEnv::GetArrayLength((_jarray *)local_14);
    p_Var3 = (_jbyteArray *)malloc(__size);
    _JNIEnv::GetByteArrayRegion((_JNIEnv *)local_14,p_Var2,0,__size,p_Var3);
    p_Var3[10] = (_jbyteArray)0x0;
  }
  return p_Var3;
}


