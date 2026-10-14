/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a9bd0 javaGetString */

_jbyteArray *
javaGetString(undefined4 param_1,undefined4 param_2,undefined4 param_3,_jclass *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  _jbyteArray *p_Var4;
  size_t __size;
  _jbyteArray *p_Var5;
  _jclass *local_14;
  
  iVar1 = DAT_002a9c30;
  local_14 = param_4;
  FUN_002a8162(*(undefined4 *)(DAT_002a9c30 + 0x2a9bdc),&local_14,param_3,param_4,param_1,param_2,
               param_3);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_14);
  uVar3 = _JNIEnv::NewStringUTF((char *)local_14);
  p_Var4 = (_jbyteArray *)
           _JNIEnv::CallStaticObjectMethod
                     (local_14,*(_jmethodID **)(iVar1 + 0x2a9be4),
                      *(undefined4 *)(DAT_002a9c34 + 0x2a9c4c),uVar2,uVar3);
  p_Var5 = p_Var4;
  if (p_Var4 != (_jbyteArray *)0x0) {
    __size = _JNIEnv::GetArrayLength((_jarray *)local_14);
    p_Var5 = (_jbyteArray *)malloc(__size);
    _JNIEnv::GetByteArrayRegion((_JNIEnv *)local_14,p_Var4,0,__size,p_Var5);
  }
  return p_Var5;
}


