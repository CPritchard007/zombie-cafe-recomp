/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aa338 javaStartInfobarOpen */

undefined8 javaStartInfobarOpen(undefined4 param_1,_jclass *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  _jclass *local_14;
  undefined4 uStack_10;
  
  iVar1 = DAT_002aa364;
  local_14 = param_2;
  uStack_10 = param_3;
  FUN_002a8162(*(undefined4 *)(DAT_002aa364 + 0x2aa344),&local_14);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_14);
  _JNIEnv::CallStaticVoidMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2aa34c),
             *(undefined4 *)((int)&DAT_002aa3a8 + DAT_002aa368 + 2),uVar2);
  return CONCAT44(local_14,param_1);
}


