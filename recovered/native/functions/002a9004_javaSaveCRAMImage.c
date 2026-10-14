/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a9004 javaSaveCRAMImage */

void javaSaveCRAMImage(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  _jclass *local_1c [2];
  
  iVar1 = DAT_002a9050;
  FUN_002a8162(*(undefined4 *)(DAT_002a9050 + 0x2a9010),local_1c);
  uVar2 = (**(code **)(*(int *)local_1c[0] + 0x2c0))(local_1c[0],param_2);
  (**(code **)(*(int *)local_1c[0] + 0x340))(local_1c[0],uVar2,0,param_2,param_1);
  _JNIEnv::CallStaticVoidMethod
            (local_1c[0],*(_jmethodID **)(iVar1 + 0x2a9018),*(undefined4 *)(iVar1 + 0x2a9038),uVar2,
             param_2);
  return;
}


