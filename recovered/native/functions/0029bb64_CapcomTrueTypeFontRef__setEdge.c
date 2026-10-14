/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029bb64 CapcomTrueTypeFontRef::setEdge */

/* CapcomTrueTypeFontRef::setEdge(int, long const&) */

void __thiscall
CapcomTrueTypeFontRef::setEdge(CapcomTrueTypeFontRef *this,int param_1,long *param_2)

{
  _jobject *p_Var1;
  undefined4 uVar2;
  uint uVar3;
  _jmethodID *p_Var4;
  undefined4 uVar5;
  _jobject *local_1c [2];
  
  if (*(undefined4 **)this != (undefined4 *)0x0) {
    local_1c[0] = (_jobject *)0x0;
    _JavaVM::AttachCurrentThread((_JNIEnv **)**(undefined4 **)this,local_1c);
    FUN_0029b7b0();
    p_Var1 = local_1c[0];
    uVar3 = *param_2;
    p_Var4 = *(_jmethodID **)(*(int *)this + 4);
    uVar5 = *(undefined4 *)(*(int *)(DAT_0029bc04 + 0x29bb9a) + 0x24);
    uVar2 = __floatsisf((int)uVar3 >> 0x10 & 0xff);
    __divsf3(uVar2,DAT_0029bc08);
    __extendsfdf2();
    uVar2 = __floatsisf((int)uVar3 >> 8 & 0xff);
    __divsf3(uVar2,DAT_0029bc08);
    __extendsfdf2();
    uVar2 = __floatsisf(uVar3 & 0xff);
    __divsf3(uVar2,DAT_0029bc08);
    __extendsfdf2();
    uVar2 = __floatsisf(uVar3 >> 0x18);
    __divsf3(uVar2,DAT_0029bc08);
    __extendsfdf2();
    _JNIEnv::CallVoidMethod(p_Var1,p_Var4,uVar5,param_1);
    FUN_0029b7c4();
  }
  return;
}


