/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a92c4 javaFacebook2 */

void javaFacebook2(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  _jclass *local_1c [2];
  
  iVar1 = DAT_002a9300;
  FUN_002a8162(*(undefined4 *)(DAT_002a9300 + 0x2a92d0),local_1c);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_1c[0]);
  uVar3 = _JNIEnv::NewStringUTF((char *)local_1c[0]);
  _JNIEnv::CallStaticVoidMethod
            (local_1c[0],*(_jmethodID **)(iVar1 + 0x2a92d8),*(undefined4 *)(iVar1 + 0x2a9338),
             param_1,uVar2,uVar3);
  return;
}


