/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aa92c javaLoadMultiTexture */

undefined4
javaLoadMultiTexture
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  _jclass *local_1c [2];
  
  iVar1 = DAT_002aa980;
  FUN_002a8162(*(undefined4 *)(DAT_002aa980 + 0x2aa938),local_1c);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_1c[0]);
  uVar2 = _JNIEnv::CallStaticObjectMethod
                    (local_1c[0],*(_jmethodID **)(iVar1 + 0x2aa940),
                     *(undefined4 *)(DAT_002aa984 + 0x2aa95e),uVar2,param_2,param_4,param_5);
  (**(code **)(*(int *)local_1c[0] + 0x32c))(local_1c[0],uVar2,0,6,param_3);
  return 0;
}


