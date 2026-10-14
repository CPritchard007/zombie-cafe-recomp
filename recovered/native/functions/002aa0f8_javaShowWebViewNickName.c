/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aa0f8 javaShowWebViewNickName */

undefined8 javaShowWebViewNickName(undefined4 param_1,_jclass *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  _jclass *local_14;
  undefined4 uStack_10;
  
  iVar1 = DAT_002aa138;
  pcVar3 = (char *)(DAT_002aa130 + 0x2aa104);
  puVar2 = (undefined4 *)(DAT_002aa138 + 0x2aa108);
  local_14 = param_2;
  uStack_10 = param_3;
  L_PrintLog(pcVar3,(char *)(DAT_002aa134 + 0x2aa10a));
  FUN_002a8162(*puVar2,&local_14);
  _JNIEnv::CallStaticVoidMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2aa110),*(undefined4 *)(DAT_002aa13c + 0x2aa11e));
  L_PrintLog(pcVar3,(char *)(DAT_002aa140 + 0x2aa12a));
  return CONCAT44(local_14,param_1);
}


