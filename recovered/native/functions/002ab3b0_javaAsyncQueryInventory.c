/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ab3b0 javaAsyncQueryInventory */

void javaAsyncQueryInventory(void)

{
  int iVar1;
  
  iVar1 = DAT_002ab3cc;
  FUN_002a8162(*(undefined4 *)(DAT_002ab3cc + 0x2ab3b8),DAT_002ab3cc + 0x2ab3bc);
  _JNIEnv::CallStaticVoidMethod
            (*(_jclass **)(iVar1 + 0x2ab3bc),*(_jmethodID **)(iVar1 + 0x2ab3c0),
             *(undefined4 *)(iVar1 + 0x2ab3fc));
  return;
}


