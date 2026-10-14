/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aa2cc javaStartInfobar */

undefined8 javaStartInfobar(undefined4 param_1,_jclass *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  _jclass *local_14;
  undefined4 uStack_10;
  
  iVar1 = DAT_002aa2f8;
  local_14 = param_2;
  uStack_10 = param_3;
  FUN_002a8162(*(undefined4 *)(DAT_002aa2f8 + 0x2aa2d8),&local_14);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_14);
  _JNIEnv::CallStaticVoidMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2aa2e0),
             *(undefined4 *)((int)&DAT_002aa334 + DAT_002aa2fc + 2),uVar2);
  return CONCAT44(local_14,param_1);
}


