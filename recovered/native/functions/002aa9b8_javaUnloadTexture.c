/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aa9b8 javaUnloadTexture */

undefined8 javaUnloadTexture(undefined4 param_1,_jclass *param_2,undefined4 param_3)

{
  int iVar1;
  _jclass *local_14;
  undefined4 uStack_10;
  
  iVar1 = DAT_002aa9e0;
  local_14 = param_2;
  uStack_10 = param_3;
  FUN_002a8162(*(undefined4 *)(DAT_002aa9e0 + 0x2aa9c4),&local_14);
  iVar1 = _JNIEnv::CallStaticBooleanMethod
                    (local_14,*(_jmethodID **)(iVar1 + 0x2aa9cc),
                     *(undefined4 *)((int)&DAT_002aa9e0 + DAT_002aa9e4 + 2),param_1);
  return CONCAT44(param_1,(uint)(iVar1 != 0));
}


