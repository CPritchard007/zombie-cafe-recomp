/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ab32c javaAppDriverGetEventValueParse */

undefined8 javaAppDriverGetEventValueParse(undefined4 param_1,_jclass *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  _jclass *local_14;
  
  iVar1 = DAT_002ab378;
  pcVar4 = (char *)(DAT_002ab370 + 0x2ab338);
  puVar3 = (undefined4 *)(DAT_002ab378 + 0x2ab33c);
  local_14 = param_2;
  L_PrintLog(pcVar4,(char *)(DAT_002ab374 + 0x2ab340));
  FUN_002a8162(*puVar3,&local_14);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_14);
  _JNIEnv::CallStaticVoidMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2ab344),
             *(undefined4 *)((int)&DAT_002ab37c + DAT_002ab37c),uVar2);
  L_PrintLog(pcVar4,(char *)(DAT_002ab380 + 0x2ab36a));
  return CONCAT44(local_14,param_1);
}


