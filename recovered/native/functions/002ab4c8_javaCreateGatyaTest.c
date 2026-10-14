/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ab4c8 javaCreateGatyaTest */

undefined8 javaCreateGatyaTest(undefined4 param_1,_jclass *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  _jclass *local_14;
  
  iVar1 = DAT_002ab514;
  pcVar4 = (char *)(DAT_002ab50c + 0x2ab4d4);
  puVar3 = (undefined4 *)(DAT_002ab514 + 0x2ab4d8);
  local_14 = param_2;
  L_PrintLog(pcVar4,(char *)(DAT_002ab510 + 0x2ab4dc));
  FUN_002a8162(*puVar3,&local_14);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_14);
  _JNIEnv::CallStaticVoidMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2ab4e0),
             *(undefined4 *)(CCOptions::SetUInt + DAT_002ab518 + 6),uVar2);
  L_PrintLog(pcVar4,(char *)(DAT_002ab51c + 0x2ab506));
  return CONCAT44(local_14,param_1);
}


