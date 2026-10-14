/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ab4a0 javaEnterMigrationPassword */

void javaEnterMigrationPassword(void)

{
  int iVar1;
  
  iVar1 = DAT_002ab4c0;
  FUN_002a8162(*(undefined4 *)(DAT_002ab4c0 + 0x2ab4a8),DAT_002ab4c0 + 0x2ab4ac);
  _JNIEnv::CallStaticVoidMethod
            (*(_jclass **)(iVar1 + 0x2ab4ac),*(_jmethodID **)(iVar1 + 0x2ab4b0),
             *(undefined4 *)(DAT_002ab4c4 + 0x2ab52c));
  return;
}


