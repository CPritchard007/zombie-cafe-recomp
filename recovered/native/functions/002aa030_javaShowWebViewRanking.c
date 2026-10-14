/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aa030 javaShowWebViewRanking */

void javaShowWebViewRanking
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  _jclass *local_1c [2];
  
  iVar1 = DAT_002aa08c;
  pcVar4 = (char *)(DAT_002aa088 + 0x2aa040);
  puVar3 = (undefined4 *)(DAT_002aa08c + 0x2aa044);
  L_PrintLog(pcVar4,(char *)(DAT_002aa090 + 0x2aa048));
  FUN_002a8162(*puVar3,local_1c);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_1c[0]);
  _JNIEnv::CallStaticVoidMethod
            (local_1c[0],*(_jmethodID **)(iVar1 + 0x2aa04c),*(undefined4 *)(DAT_002aa094 + 0x2aa0de)
             ,param_1,param_2,param_3,param_4,uVar2);
  L_PrintLog(pcVar4,(char *)(DAT_002aa098 + 0x2aa080));
  return;
}


