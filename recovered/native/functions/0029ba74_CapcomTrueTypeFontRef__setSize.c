/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029ba74 CapcomTrueTypeFontRef::setSize */

/* CapcomTrueTypeFontRef::setSize(float) */

float __thiscall CapcomTrueTypeFontRef::setSize(CapcomTrueTypeFontRef *this,float param_1)

{
  _jobject *p_Var1;
  undefined4 in_r1;
  _jmethodID *p_Var2;
  undefined4 uVar3;
  _jobject *local_1c [2];
  
  if (*(undefined4 **)this != (undefined4 *)0x0) {
    local_1c[0] = (_jobject *)0x0;
    _JavaVM::AttachCurrentThread((_JNIEnv **)**(undefined4 **)this,local_1c);
    FUN_0029b7b0();
    p_Var1 = local_1c[0];
    p_Var2 = *(_jmethodID **)(*(int *)this + 4);
    uVar3 = *(undefined4 *)(*(int *)(DAT_0029babc + 0x29baa0) + 0x1c);
    __extendsfdf2(in_r1);
    _JNIEnv::CallVoidMethod(p_Var1,p_Var2,uVar3);
    param_1 = (float)FUN_0029b7c4();
  }
  return param_1;
}


