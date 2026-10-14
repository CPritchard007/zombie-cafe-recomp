/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a8eb0 javaAccelerometer */

/* javaAccelerometer(bool) */

undefined8 javaAccelerometer(bool param_1)

{
  int iVar1;
  _jclass *in_r1;
  _jclass *local_14 [2];
  
  iVar1 = DAT_002a8ed4;
  local_14[0] = in_r1;
  FUN_002a8162(*(undefined4 *)(DAT_002a8ed4 + 0x2a8ebc),local_14);
  _JNIEnv::CallStaticVoidMethod
            (local_14[0],*(_jmethodID **)(iVar1 + 0x2a8ec4),
             *(undefined4 *)(&UNK_002a8f06 + DAT_002a8ed8),(uint)param_1);
  return CONCAT44(local_14[0],(uint)param_1);
}


