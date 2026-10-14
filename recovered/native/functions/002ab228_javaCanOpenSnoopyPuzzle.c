/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ab228 javaCanOpenSnoopyPuzzle */

undefined8 javaCanOpenSnoopyPuzzle(undefined4 param_1,_jclass *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  _jclass *local_14;
  undefined4 uStack_10;
  
  iVar1 = DAT_002ab270;
  pcVar3 = (char *)(DAT_002ab268 + 0x2ab234);
  puVar2 = (undefined4 *)(DAT_002ab270 + 0x2ab238);
  local_14 = param_2;
  uStack_10 = param_3;
  L_PrintLog(pcVar3,(char *)(DAT_002ab26c + 0x2ab23a));
  FUN_002a8162(*puVar2,&local_14);
  iVar1 = _JNIEnv::CallStaticBooleanMethod
                    (local_14,*(_jmethodID **)(iVar1 + 0x2ab240),
                     *(undefined4 *)(DAT_002ab274 + 0x2ab2b2));
  L_PrintLog(pcVar3,(char *)(DAT_002ab278 + 0x2ab25c));
  return CONCAT44(param_1,(uint)(iVar1 != 0));
}


