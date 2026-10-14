/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aa464 javaIsOpenFixWebView */

undefined8 javaIsOpenFixWebView(undefined4 param_1,_jclass *param_2)

{
  int iVar1;
  _jclass *local_c;
  
  iVar1 = DAT_002aa488;
  local_c = param_2;
  FUN_002a8162(*(undefined4 *)(DAT_002aa488 + 0x2aa46e),&local_c);
  iVar1 = _JNIEnv::CallStaticBooleanMethod
                    (local_c,*(_jmethodID **)(iVar1 + 0x2aa476),
                     *(undefined4 *)(javaWebControlHide + DAT_002aa48c));
  return CONCAT44(param_1,(uint)(iVar1 != 0));
}


