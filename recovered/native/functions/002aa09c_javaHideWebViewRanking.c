/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aa09c javaHideWebViewRanking */

void javaHideWebViewRanking(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  _jclass *local_1c [2];
  
  iVar1 = DAT_002aa0e8;
  pcVar3 = (char *)(DAT_002aa0e4 + 0x2aa0ac);
  puVar2 = (undefined4 *)(DAT_002aa0e8 + 0x2aa0b0);
  L_PrintLog(pcVar3,(char *)(DAT_002aa0ec + 0x2aa0b4));
  FUN_002a8162(*puVar2,local_1c);
  _JNIEnv::CallStaticVoidMethod
            (local_1c[0],*(_jmethodID **)(iVar1 + 0x2aa0b8),
             *(undefined4 *)(javaNickNameUpdatePage + DAT_002aa0f0 + 2),param_1,param_2,param_3);
  L_PrintLog(pcVar3,(char *)(DAT_002aa0f4 + 0x2aa0dc));
  return;
}


