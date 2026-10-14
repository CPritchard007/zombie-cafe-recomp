/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a97a0 javaUrlNewRequest */

undefined8 javaUrlNewRequest(undefined4 param_1,_jclass *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  _jclass *local_14;
  undefined4 uStack_10;
  
  iVar2 = DAT_002a97d0;
  local_14 = param_2;
  uStack_10 = param_3;
  FUN_002a8162(*(undefined4 *)(DAT_002a97d0 + 0x2a97ac),&local_14);
  uVar1 = _JNIEnv::NewStringUTF((char *)local_14);
  iVar2 = _JNIEnv::CallStaticBooleanMethod
                    (local_14,*(_jmethodID **)(iVar2 + 0x2a97b4),
                     *(undefined4 *)(DAT_002a97d4 + 0x2a97ea),uVar1);
  return CONCAT44(param_1,(uint)(iVar2 != 0));
}


