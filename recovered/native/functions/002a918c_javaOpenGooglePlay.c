/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a918c javaOpenGooglePlay */

undefined8 javaOpenGooglePlay(undefined4 param_1,_jclass *param_2)

{
  int iVar1;
  _jclass *local_c;
  
  iVar1 = DAT_002a91a8;
  local_c = param_2;
  FUN_002a8162(*(undefined4 *)(DAT_002a91a8 + 0x2a9196),&local_c);
  _JNIEnv::CallStaticVoidMethod
            (local_c,*(_jmethodID **)(iVar1 + 0x2a919e),*(undefined4 *)(javaSetPCostArr + iVar1 + 6)
            );
  return CONCAT44(local_c,param_1);
}


