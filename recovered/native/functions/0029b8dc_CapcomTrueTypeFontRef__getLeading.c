/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029b8dc CapcomTrueTypeFontRef::getLeading */

/* CapcomTrueTypeFontRef::getLeading() */

undefined8 CapcomTrueTypeFontRef::getLeading(void)

{
  int *in_r0;
  undefined4 *puVar1;
  _jobject *local_14 [2];
  
  puVar1 = (undefined4 *)*in_r0;
  if (puVar1 != (undefined4 *)0x0) {
    local_14[0] = (_jobject *)0x0;
    _JavaVM::AttachCurrentThread((_JNIEnv **)*puVar1,local_14);
    FUN_0029b7b0();
    puVar1 = (undefined4 *)
             _JNIEnv::CallIntMethod
                       (local_14[0],*(_jmethodID **)(*in_r0 + 4),
                        *(undefined4 *)(*(int *)(DAT_0029b914 + 0x29b902) + 0xc));
    FUN_0029b7c4();
  }
  return CONCAT44(in_r0,puVar1);
}


