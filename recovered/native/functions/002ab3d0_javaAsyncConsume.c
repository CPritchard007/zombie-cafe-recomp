/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ab3d0 javaAsyncConsume */

void javaAsyncConsume(void)

{
  int iVar1;
  
  iVar1 = DAT_002ab3ec;
  FUN_002a8162(*(undefined4 *)(DAT_002ab3ec + 0x2ab3d8),DAT_002ab3ec + 0x2ab3dc);
  _JNIEnv::CallStaticVoidMethod
            (*(_jclass **)(iVar1 + 0x2ab3dc),*(_jmethodID **)(iVar1 + 0x2ab3e0),
             *(undefined4 *)(iVar1 + 0x2ab420));
  return;
}


