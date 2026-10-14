/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aa540 javaFile_Write */

void javaFile_Write(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  _jclass *local_1c [2];
  
  iVar1 = DAT_002aa5a4;
  FUN_002a8162(*(undefined4 *)(DAT_002aa5a4 + 0x2aa54c),local_1c);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_1c[0]);
  uVar3 = (**(code **)(*(int *)local_1c[0] + 0x2c0))(local_1c[0],param_3);
  (**(code **)(*(int *)local_1c[0] + 0x340))(local_1c[0],uVar3,0,param_3,param_2);
  _JNIEnv::CallStaticBooleanMethod
            (local_1c[0],*(_jmethodID **)(iVar1 + 0x2aa554),*(undefined4 *)(DAT_002aa5a8 + 0x2aa606)
             ,uVar2,param_4,param_3,uVar3);
  return;
}


