/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aaee4 javaGetIMEI */

signed * javaGetIMEI(void)

{
  int iVar1;
  _jbyteArray *p_Var2;
  int iVar3;
  signed *psVar4;
  undefined4 *puVar5;
  char *pcVar6;
  _jclass *local_1c [2];
  
  iVar1 = DAT_002aaf60;
  pcVar6 = (char *)(DAT_002aaf58 + 0x2aaef0);
  puVar5 = (undefined4 *)(DAT_002aaf60 + 0x2aaef4);
  L_PrintLog(pcVar6,(char *)(DAT_002aaf5c + 0x2aaef6));
  FUN_002a8162(*puVar5,local_1c);
  p_Var2 = (_jbyteArray *)
           _JNIEnv::CallStaticObjectMethod
                     (local_1c[0],*(_jmethodID **)(iVar1 + 0x2aaefc),
                      *(undefined4 *)(DAT_002aaf64 + 0x2aaf20));
  if (p_Var2 == (_jbyteArray *)0x0) {
    L_PrintLog(pcVar6,(char *)(DAT_002aaf68 + 0x2aaf1e));
    psVar4 = (signed *)0x0;
  }
  else {
    iVar3 = _JNIEnv::GetArrayLength((_jarray *)local_1c[0]);
    psVar4 = (signed *)malloc(iVar3 + 1);
    _JNIEnv::GetByteArrayRegion((_JNIEnv *)local_1c[0],p_Var2,0,iVar3,psVar4);
    iVar1 = DAT_002aaf6c;
    psVar4[iVar3] = 0;
    L_PrintLog(pcVar6,(char *)(iVar1 + 0x2aaf4c));
  }
  return psVar4;
}


