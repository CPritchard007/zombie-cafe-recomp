/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00118408 GameStateCafe::onRateMeConfirmed */

/* GameStateCafe::onRateMeConfirmed(GameStateCafe*) */

longlong GameStateCafe::onRateMeConfirmed(GameStateCafe *param_1)

{
  char *pcVar1;
  uint in_r1;
  StringUtil aSStack_10 [8];
  
  StringUtil::getEncodingString(aSStack_10,'\0');
  pcVar1 = (char *)String::getBytes(*(String **)(DAT_0011844c + 0x11841c),aSStack_10,0);
  String::~String((String *)aSStack_10);
  L_PrintLog((char *)(DAT_00118450 + 0x118434),pcVar1);
  javaLaunchURL2(DAT_00118454 + 0x11843c);
  return (ulonglong)in_r1 << 0x20;
}


