/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029b954 CapcomTrueTypeFontRef::getCharWidth */

/* CapcomTrueTypeFontRef::getCharWidth(char) */

undefined8 __thiscall CapcomTrueTypeFontRef::getCharWidth(CapcomTrueTypeFontRef *this,char param_1)

{
  undefined4 *puVar1;
  _jobject *local_14;
  
  puVar1 = *(undefined4 **)this;
  if (puVar1 != (undefined4 *)0x0) {
    local_14 = (_jobject *)0x0;
    _JavaVM::AttachCurrentThread((_JNIEnv **)*puVar1,&local_14);
    FUN_0029b7b0();
    puVar1 = (undefined4 *)
             _JNIEnv::CallIntMethod
                       (local_14,*(_jmethodID **)(*(int *)this + 4),
                        *(undefined4 *)(*(int *)(DAT_0029b990 + 0x29b97c) + 0x14),(int)param_1);
    FUN_0029b7c4();
  }
  return CONCAT44(this,puVar1);
}


