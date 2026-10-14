/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aa6e4 javaFile_Rename */

undefined8
javaFile_Rename(undefined4 param_1,undefined4 param_2,undefined4 param_3,_jclass *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  _jclass *local_14;
  
  iVar1 = DAT_002aa71c;
  local_14 = param_4;
  FUN_002a8162(*(undefined4 *)(DAT_002aa71c + 0x2aa6f0),&local_14,param_3,param_4,param_1,param_2,
               param_3);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_14);
  uVar3 = _JNIEnv::NewStringUTF((char *)local_14);
  _JNIEnv::CallStaticVoidMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2aa6f8),*(undefined4 *)(DAT_002aa720 + 0x2aa788),
             uVar2);
  return CONCAT44(param_2,uVar3);
}


