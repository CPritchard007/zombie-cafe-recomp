/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a95d8 javaMD5String */

_jbyteArray *
javaMD5String(undefined4 param_1,undefined4 param_2,undefined4 param_3,_jclass *param_4)

{
  undefined4 uVar1;
  _jbyteArray *p_Var2;
  int iVar3;
  _jbyteArray *p_Var4;
  _jclass *local_14;
  
  iVar3 = DAT_002a9630;
  local_14 = param_4;
  FUN_002a8162(*(undefined4 *)(DAT_002a9630 + 0x2a95e4),&local_14,param_3,param_4,param_1,param_2,
               param_3);
  uVar1 = _JNIEnv::NewStringUTF((char *)local_14);
  p_Var2 = (_jbyteArray *)
           _JNIEnv::CallStaticObjectMethod
                     (local_14,*(_jmethodID **)(iVar3 + 0x2a95ec),
                      *(undefined4 *)(DAT_002a9634 + 0x2a960e),uVar1);
  p_Var4 = p_Var2;
  if (p_Var2 != (_jbyteArray *)0x0) {
    iVar3 = _JNIEnv::GetArrayLength((_jarray *)local_14);
    p_Var4 = (_jbyteArray *)malloc(iVar3 + 1);
    _JNIEnv::GetByteArrayRegion((_JNIEnv *)local_14,p_Var2,0,iVar3,p_Var4);
    p_Var4[iVar3] = (_jbyteArray)0x0;
  }
  return p_Var4;
}


