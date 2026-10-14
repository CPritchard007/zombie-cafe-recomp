/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aa9e8 javaLoadStringTexture */

undefined4
javaLoadStringTexture
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  _jclass *local_1c [2];
  
  iVar1 = DAT_002aaa3c;
  FUN_002a8162(*(undefined4 *)(DAT_002aaa3c + 0x2aa9f4),local_1c);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_1c[0]);
  uVar2 = _JNIEnv::CallStaticObjectMethod
                    (local_1c[0],*(_jmethodID **)(iVar1 + 0x2aa9fc),
                     *(undefined4 *)(DAT_002aaa40 + 0x2aaa26),uVar2,param_3,param_4,param_5);
  (**(code **)(*(int *)local_1c[0] + 0x32c))(local_1c[0],uVar2,0,6,param_2);
  return 0;
}


