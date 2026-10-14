/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029bd34 CapcomTrueTypeFontRef::drawString */

/* CapcomTrueTypeFontRef::drawString(char const*, int, int, bool, bool, int, int, int&, int&) */

undefined4 * __thiscall
CapcomTrueTypeFontRef::drawString
          (CapcomTrueTypeFontRef *this,char *param_1,int param_2,int param_3,bool param_4,
          bool param_5,int param_6,int param_7,int *param_8,int *param_9)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  _jobject *local_20;
  int *local_1c [2];
  
  if (*(undefined4 **)this == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    local_20 = (_jobject *)0x0;
    _JavaVM::AttachCurrentThread((_JNIEnv **)**(undefined4 **)this,&local_20);
    FUN_0029b7b0();
    iVar2 = DAT_0029be10;
    uVar1 = (**(code **)(*(int *)local_20 + 0x29c))(local_20,param_1);
    iVar5 = *(int *)(iVar2 + 0x29bd7a);
    iVar2 = _JNIEnv::CallObjectMethod
                      (local_20,*(_jmethodID **)(*(int *)this + 4),*(undefined4 *)(iVar5 + 0x30),
                       uVar1,param_2,param_3,(uint)param_4,(uint)param_5,param_6,param_7);
    puVar3 = (undefined4 *)operator_new(8);
    uVar4 = **(undefined4 **)this;
    puVar3[1] = 0;
    *puVar3 = uVar4;
    if (iVar2 != 0) {
      local_1c[0] = (int *)0x0;
      _JavaVM::AttachCurrentThread((_JNIEnv **)*puVar3,local_1c);
      uVar4 = (**(code **)(*local_1c[0] + 0x54))(local_1c[0],iVar2);
      puVar3[1] = uVar4;
    }
    iVar2 = _JNIEnv::CallIntMethod
                      (local_20,*(_jmethodID **)(*(int *)this + 4),*(undefined4 *)(iVar5 + 0x34));
    *param_8 = iVar2;
    iVar2 = _JNIEnv::CallIntMethod
                      (local_20,*(_jmethodID **)(*(int *)this + 4),*(undefined4 *)(iVar5 + 0x38));
    *param_9 = iVar2;
    (**(code **)(*(int *)local_20 + 0x5c))(local_20,uVar1);
    FUN_0029b7c4();
  }
  return puVar3;
}


