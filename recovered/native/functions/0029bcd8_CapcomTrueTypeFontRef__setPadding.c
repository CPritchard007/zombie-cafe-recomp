/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029bcd8 CapcomTrueTypeFontRef::setPadding */

/* CapcomTrueTypeFontRef::setPadding(float, float) */

undefined8 __thiscall
CapcomTrueTypeFontRef::setPadding(CapcomTrueTypeFontRef *this,float param_1,float param_2)

{
  _jobject *p_Var1;
  undefined4 in_r1;
  undefined4 in_r2;
  _jmethodID *p_Var2;
  undefined4 uVar3;
  undefined8 uVar4;
  _jobject *local_1c [2];
  
  uVar4 = CONCAT44(param_2,param_1);
  if (*(undefined4 **)this != (undefined4 *)0x0) {
    local_1c[0] = (_jobject *)0x0;
    _JavaVM::AttachCurrentThread((_JNIEnv **)**(undefined4 **)this,local_1c);
    FUN_0029b7b0();
    p_Var1 = local_1c[0];
    p_Var2 = *(_jmethodID **)(*(int *)this + 4);
    uVar3 = *(undefined4 *)(*(int *)(DAT_0029bd30 + 0x29bd08) + 0x2c);
    __extendsfdf2(in_r1);
    __extendsfdf2(in_r2);
    _JNIEnv::CallVoidMethod(p_Var1,p_Var2,uVar3);
    uVar4 = FUN_0029b7c4();
  }
  return uVar4;
}


