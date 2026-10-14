/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aa620 javaFile_Exist */

undefined8 javaFile_Exist(undefined4 param_1,_jclass *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  _jclass *local_14;
  undefined4 uStack_10;
  
  iVar2 = DAT_002aa660;
  local_14 = param_2;
  uStack_10 = param_3;
  FUN_002a8162(*(undefined4 *)(DAT_002aa660 + 0x2aa62c),&local_14);
  uVar1 = _JNIEnv::NewStringUTF((char *)local_14);
  iVar2 = _JNIEnv::CallStaticBooleanMethod
                    (local_14,*(_jmethodID **)(iVar2 + 0x2aa634),
                     *(undefined4 *)((int)&DAT_002aa6a4 + DAT_002aa664 + 2),uVar1);
  (**(code **)(*(int *)local_14 + 0x5c))(local_14,uVar1);
  return CONCAT44(param_1,(uint)(iVar2 != 0));
}


