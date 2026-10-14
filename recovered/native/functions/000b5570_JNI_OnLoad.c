/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b5570 JNI_OnLoad */

undefined4 JNI_OnLoad(_JavaVM *param_1)

{
  int iVar1;
  _jclass *p_Var2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  iVar1 = DAT_000b55dc;
  L_PrintLog((char *)(DAT_000b55d8 + 0xb5580),(char *)(DAT_000b55d4 + 0xb557e));
  puVar4 = (undefined4 *)(iVar1 + 0xb5588);
  iVar1 = (**(code **)(*(int *)param_1 + 0x18))(param_1,puVar4,DAT_000b55e0);
  if (iVar1 == 0) {
    p_Var2 = (_jclass *)(**(code **)(*(int *)*puVar4 + 0x18))((int *)*puVar4,DAT_000b55e4 + 0xb559e)
    ;
    if (p_Var2 == (_jclass *)0x0) {
      L_PrintLog((char *)(DAT_000b55e8 + 0xb55b8),(char *)(DAT_000b55ec + 0xb55ba));
    }
    else {
      initMethodCalls(param_1,(_JNIEnv *)*puVar4,(_jobject *)0x0,p_Var2);
    }
    L_PrintLog((char *)(DAT_000b55f0 + 0xb55c4),(char *)(DAT_000b55f4 + 0xb55c6));
    uVar3 = DAT_000b55f8;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


