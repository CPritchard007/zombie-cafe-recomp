/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aaa70 javaGetAppVersion */

signed * javaGetAppVersion(undefined4 param_1,undefined4 param_2,undefined4 param_3,_jclass *param_4
                          )

{
  int iVar1;
  _jbyteArray *p_Var2;
  size_t __size;
  signed *psVar3;
  _jclass *local_14;
  
  iVar1 = DAT_002aaab4;
  local_14 = param_4;
  FUN_002a8162(*(undefined4 *)(DAT_002aaab4 + 0x2aaa7a),&local_14,param_3,param_4,param_1,param_2,
               param_3);
  p_Var2 = (_jbyteArray *)
           _JNIEnv::CallStaticObjectMethod
                     (local_14,*(_jmethodID **)(iVar1 + 0x2aaa82),
                      *(undefined4 *)(DAT_002aaab8 + 0x2aaaa4));
  __size = _JNIEnv::GetArrayLength((_jarray *)local_14);
  psVar3 = (signed *)malloc(__size);
  _JNIEnv::GetByteArrayRegion((_JNIEnv *)local_14,p_Var2,0,__size,psVar3);
  return psVar3;
}


