/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a9088 javaGetGraphicSet */

void javaGetGraphicSet(undefined4 param_1,_jclass *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  _jclass *local_c;
  
  iVar1 = DAT_002a90a4;
  local_c = param_2;
  FUN_002a8162(*(undefined4 *)(DAT_002a90a4 + 0x2a9092),&local_c,param_3,param_4,param_1);
  _JNIEnv::CallStaticIntMethod
            (local_c,*(_jmethodID **)(iVar1 + 0x2a909a),*(undefined4 *)(iVar1 + 0x2a90ca));
  return;
}


