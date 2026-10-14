/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aa828 javaLoadResource */

signed * javaLoadResource(undefined4 param_1,undefined4 param_2,size_t *param_3)

{
  int iVar1;
  undefined4 uVar2;
  _jbyteArray *p_Var3;
  size_t __size;
  signed *psVar4;
  _jclass *local_1c [2];
  
  iVar1 = DAT_002aa880;
  FUN_002a8162(*(undefined4 *)(DAT_002aa880 + 0x2aa834),local_1c);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_1c[0]);
  p_Var3 = (_jbyteArray *)
           _JNIEnv::CallStaticObjectMethod
                     (local_1c[0],*(_jmethodID **)(iVar1 + 0x2aa83c),
                      *(undefined4 *)(DAT_002aa884 + 0x2aa854),uVar2,param_2);
  __size = _JNIEnv::GetArrayLength((_jarray *)local_1c[0]);
  psVar4 = (signed *)malloc(__size);
  _JNIEnv::GetByteArrayRegion((_JNIEnv *)local_1c[0],p_Var3,0,__size,psVar4);
  *param_3 = __size;
  return psVar4;
}


