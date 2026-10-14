/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a957c javaEncodeURL */

_jbyteArray *
javaEncodeURL(undefined4 param_1,undefined4 param_2,undefined4 param_3,_jclass *param_4)

{
  int iVar1;
  undefined4 uVar2;
  _jbyteArray *p_Var3;
  size_t __size;
  _jbyteArray *p_Var4;
  _jclass *local_14;
  
  iVar1 = DAT_002a95d0;
  local_14 = param_4;
  FUN_002a8162(*(undefined4 *)(DAT_002a95d0 + 0x2a9588),&local_14,param_3,param_4,param_1,param_2,
               param_3);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_14);
  p_Var3 = (_jbyteArray *)
           _JNIEnv::CallStaticObjectMethod
                     (local_14,*(_jmethodID **)(iVar1 + 0x2a9590),
                      *(undefined4 *)(DAT_002a95d4 + 0x2a95ae),uVar2);
  p_Var4 = p_Var3;
  if (p_Var3 != (_jbyteArray *)0x0) {
    __size = _JNIEnv::GetArrayLength((_jarray *)local_14);
    p_Var4 = (_jbyteArray *)malloc(__size);
    _JNIEnv::GetByteArrayRegion((_JNIEnv *)local_14,p_Var3,0,__size,p_Var4);
  }
  return p_Var4;
}


