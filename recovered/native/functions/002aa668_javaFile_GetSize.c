/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aa668 javaFile_GetSize */

undefined8 javaFile_GetSize(undefined4 param_1,_jclass *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  _jclass *local_14;
  undefined4 uStack_10;
  
  iVar1 = DAT_002aa6a4;
  local_14 = param_2;
  uStack_10 = param_3;
  FUN_002a8162(*(undefined4 *)(DAT_002aa6a4 + 0x2aa674),&local_14);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_14);
  uVar3 = _JNIEnv::CallStaticIntMethod
                    (local_14,*(_jmethodID **)(iVar1 + 0x2aa67c),
                     *(undefined4 *)(DAT_002aa6a8 + 0x2aa6f6),uVar2);
  (**(code **)(*(int *)local_14 + 0x5c))(local_14,uVar2);
  return CONCAT44(param_1,uVar3);
}


