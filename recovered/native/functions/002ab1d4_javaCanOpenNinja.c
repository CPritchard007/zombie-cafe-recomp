/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ab1d4 javaCanOpenNinja */

undefined8 javaCanOpenNinja(undefined4 param_1,_jclass *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  _jclass *local_14;
  undefined4 uStack_10;
  
  iVar1 = DAT_002ab21c;
  pcVar3 = (char *)(DAT_002ab214 + 0x2ab1e0);
  puVar2 = (undefined4 *)(DAT_002ab21c + 0x2ab1e4);
  local_14 = param_2;
  uStack_10 = param_3;
  L_PrintLog(pcVar3,(char *)(DAT_002ab218 + 0x2ab1e6));
  FUN_002a8162(*puVar2,&local_14);
  iVar1 = _JNIEnv::CallStaticBooleanMethod
                    (local_14,*(_jmethodID **)(iVar1 + 0x2ab1ec),
                     *(undefined4 *)(DAT_002ab220 + 0x2ab25a));
  L_PrintLog(pcVar3,(char *)(DAT_002ab224 + 0x2ab208));
  return CONCAT44(param_1,(uint)(iVar1 != 0));
}


