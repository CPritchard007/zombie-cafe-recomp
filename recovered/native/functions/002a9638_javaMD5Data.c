/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a9638 javaMD5Data */

_jbyteArray * javaMD5Data(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  _jbyteArray *p_Var2;
  int iVar3;
  _jbyteArray *p_Var4;
  _jclass *local_1c [2];
  
  iVar3 = DAT_002a96b4;
  FUN_002a8162(*(undefined4 *)(DAT_002a96b4 + 0x2a9644),local_1c);
  uVar1 = (**(code **)(*(int *)local_1c[0] + 0x2c0))(local_1c[0],param_2);
  (**(code **)(*(int *)local_1c[0] + 0x340))(local_1c[0],uVar1,0,param_2,param_1);
  p_Var2 = (_jbyteArray *)
           _JNIEnv::CallStaticObjectMethod
                     (local_1c[0],*(_jmethodID **)(iVar3 + 0x2a964c),
                      *(undefined4 *)(DAT_002a96b8 + 0x2a9692),uVar1,param_2);
  p_Var4 = p_Var2;
  if (p_Var2 != (_jbyteArray *)0x0) {
    iVar3 = _JNIEnv::GetArrayLength((_jarray *)local_1c[0]);
    p_Var4 = (_jbyteArray *)malloc(iVar3 + 1);
    _JNIEnv::GetByteArrayRegion((_JNIEnv *)local_1c[0],p_Var2,0,iVar3,p_Var4);
    p_Var4[iVar3] = (_jbyteArray)0x0;
  }
  return p_Var4;
}


