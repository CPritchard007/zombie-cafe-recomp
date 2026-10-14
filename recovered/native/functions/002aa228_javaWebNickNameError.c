/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aa228 javaWebNickNameError */

undefined8 javaWebNickNameError(undefined4 param_1,_jclass *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  _jclass *local_14;
  undefined4 uStack_10;
  
  iVar1 = DAT_002aa268;
  pcVar3 = (char *)(DAT_002aa260 + 0x2aa234);
  puVar2 = (undefined4 *)(DAT_002aa268 + 0x2aa238);
  local_14 = param_2;
  uStack_10 = param_3;
  L_PrintLog(pcVar3,(char *)(DAT_002aa264 + 0x2aa23a));
  FUN_002a8162(*puVar2,&local_14);
  _JNIEnv::CallStaticVoidMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2aa240),
             *(undefined4 *)(&UNK_002aa25e + DAT_002aa26c));
  L_PrintLog(pcVar3,(char *)(DAT_002aa270 + 0x2aa25a));
  return CONCAT44(local_14,param_1);
}


