/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029b9c8 CapcomTrueTypeFontRef::getStringWidth */

/* CapcomTrueTypeFontRef::getStringWidth(char const*, int, int) */

undefined4 * __thiscall
CapcomTrueTypeFontRef::getStringWidth
          (CapcomTrueTypeFontRef *this,char *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  _jobject *local_1c [2];
  
  puVar2 = *(undefined4 **)this;
  if (puVar2 != (undefined4 *)0x0) {
    local_1c[0] = (_jobject *)0x0;
    _JavaVM::AttachCurrentThread((_JNIEnv **)*puVar2,local_1c);
    FUN_0029b7b0();
    uVar1 = (**(code **)(*(int *)local_1c[0] + 0x29c))(local_1c[0],param_1);
    puVar2 = (undefined4 *)
             _JNIEnv::CallIntMethod
                       (local_1c[0],*(_jmethodID **)(*(int *)this + 4),
                        *(undefined4 *)(*(int *)(DAT_0029ba2c + 0x29ba06) + 0x18),uVar1,param_2,
                        param_3);
    (**(code **)(*(int *)local_1c[0] + 0x5c))(local_1c[0],uVar1);
    FUN_0029b7c4();
  }
  return puVar2;
}


