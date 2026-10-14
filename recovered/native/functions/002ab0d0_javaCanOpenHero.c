/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ab0d0 javaCanOpenHero */

undefined8 javaCanOpenHero(undefined4 param_1,_jclass *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  _jclass *local_14;
  undefined4 uStack_10;
  
  iVar1 = DAT_002ab118;
  pcVar3 = (char *)(DAT_002ab110 + 0x2ab0dc);
  puVar2 = (undefined4 *)(DAT_002ab118 + 0x2ab0e0);
  local_14 = param_2;
  uStack_10 = param_3;
  L_PrintLog(pcVar3,(char *)(DAT_002ab114 + 0x2ab0e2));
  FUN_002a8162(*puVar2,&local_14);
  iVar1 = _JNIEnv::CallStaticBooleanMethod
                    (local_14,*(_jmethodID **)(iVar1 + 0x2ab0e8),
                     *(undefined4 *)(DAT_002ab11c + 0x2ab14a));
  L_PrintLog(pcVar3,(char *)(DAT_002ab120 + 0x2ab104));
  return CONCAT44(param_1,(uint)(iVar1 != 0));
}


