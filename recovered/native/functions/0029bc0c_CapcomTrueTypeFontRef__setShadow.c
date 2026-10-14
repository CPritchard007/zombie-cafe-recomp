/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029bc0c CapcomTrueTypeFontRef::setShadow */

/* CapcomTrueTypeFontRef::setShadow(float, float, float, long const&) */

undefined8 __thiscall
CapcomTrueTypeFontRef::setShadow
          (CapcomTrueTypeFontRef *this,float param_1,float param_2,float param_3,long *param_4)

{
  _jobject *p_Var1;
  undefined4 uVar2;
  undefined4 in_r2;
  undefined4 in_r3;
  _jmethodID *p_Var3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint *in_stack_00000000;
  _jobject *local_1c [2];
  
  uVar6 = CONCAT44(param_2,param_1);
  if (*(undefined4 **)this != (undefined4 *)0x0) {
    local_1c[0] = (_jobject *)0x0;
    _JavaVM::AttachCurrentThread((_JNIEnv **)**(undefined4 **)this,local_1c);
    FUN_0029b7b0();
    p_Var1 = local_1c[0];
    uVar5 = *in_stack_00000000;
    p_Var3 = *(_jmethodID **)(*(int *)this + 4);
    uVar4 = *(undefined4 *)(*(int *)(DAT_0029bcd0 + 0x29bc46) + 0x28);
    __extendsfdf2(param_4);
    __extendsfdf2(in_r2);
    __extendsfdf2(in_r3);
    uVar2 = __floatsisf((int)uVar5 >> 0x10 & 0xff);
    __divsf3(uVar2,DAT_0029bcd4);
    __extendsfdf2();
    uVar2 = __floatsisf((int)uVar5 >> 8 & 0xff);
    __divsf3(uVar2,DAT_0029bcd4);
    __extendsfdf2();
    uVar2 = __floatsisf(uVar5 & 0xff);
    __divsf3(uVar2,DAT_0029bcd4);
    __extendsfdf2();
    uVar2 = __floatsisf(uVar5 >> 0x18);
    __divsf3(uVar2,DAT_0029bcd4);
    __extendsfdf2();
    _JNIEnv::CallVoidMethod(p_Var1,p_Var3,uVar4);
    uVar6 = FUN_0029b7c4();
  }
  return uVar6;
}


