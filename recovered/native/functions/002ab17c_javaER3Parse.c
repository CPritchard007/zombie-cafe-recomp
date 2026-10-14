/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ab17c javaER3Parse */

undefined8 javaER3Parse(undefined4 param_1,_jclass *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  _jclass *local_14;
  
  iVar1 = DAT_002ab1c8;
  pcVar4 = (char *)(DAT_002ab1c0 + 0x2ab188);
  puVar3 = (undefined4 *)(DAT_002ab1c8 + 0x2ab18c);
  local_14 = param_2;
  L_PrintLog(pcVar4,(char *)(DAT_002ab1c4 + 0x2ab190));
  FUN_002a8162(*puVar3,&local_14);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_14);
  _JNIEnv::CallStaticVoidMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2ab194),*(undefined4 *)(DAT_002ab1cc + 0x2ab208),
             uVar2);
  L_PrintLog(pcVar4,(char *)(DAT_002ab1d0 + 0x2ab1ba));
  return CONCAT44(local_14,param_1);
}


