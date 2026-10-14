/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aa5ac javaFile_Read */

void javaFile_Read(undefined4 param_1,signed *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  _jbyteArray *p_Var2;
  int iVar3;
  _jclass *local_1c [2];
  
  iVar3 = DAT_002aa610;
  FUN_002a8162(*(undefined4 *)(DAT_002aa610 + 0x2aa5b8),local_1c);
  uVar1 = _JNIEnv::NewStringUTF((char *)local_1c[0]);
  p_Var2 = (_jbyteArray *)
           _JNIEnv::CallStaticObjectMethod
                     (local_1c[0],*(_jmethodID **)(iVar3 + 0x2aa5c0),
                      *(undefined4 *)(DAT_002aa614 + 0x2aa646),uVar1);
  if (p_Var2 == (_jbyteArray *)0x0) {
    L_PrintLog((char *)(DAT_002aa618 + 0x2aa5e8),(char *)(DAT_002aa61c + 0x2aa5ea));
  }
  else {
    iVar3 = _JNIEnv::GetArrayLength((_jarray *)local_1c[0]);
    if (param_3 < iVar3) {
      iVar3 = param_3;
    }
    _JNIEnv::GetByteArrayRegion((_JNIEnv *)local_1c[0],p_Var2,param_4,iVar3,param_2);
  }
  return;
}


