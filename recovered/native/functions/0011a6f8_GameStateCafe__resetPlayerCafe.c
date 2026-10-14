/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011a6f8 GameStateCafe::resetPlayerCafe */

/* GameStateCafe::resetPlayerCafe() */

undefined8 GameStateCafe::resetPlayerCafe(void)

{
  undefined4 in_r0;
  SaveDataOutputStream *pSVar1;
  undefined4 in_r1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  String aSStack_10 [8];
  
  uStack_18 = in_r0;
  uStack_14 = in_r1;
  String::String((String *)&uStack_18,*(String **)(DAT_0011a770 + 0x11a702));
  pSVar1 = (SaveDataOutputStream *)operator_new(0x14);
  SaveDataOutputStream::SaveDataOutputStream(pSVar1,(String *)&uStack_18);
  String::~String((String *)&uStack_18);
  (**(code **)(*(int *)pSVar1 + 0x10))(pSVar1,0);
  (**(code **)(*(int *)pSVar1 + 0x10))(pSVar1,0);
  (**(code **)(*(int *)pSVar1 + 8))(pSVar1);
  (**(code **)(*(int *)pSVar1 + 4))(pSVar1);
  String::String(aSStack_10,(char *)(DAT_0011a774 + 0x11a746));
  CapcomDebug::print(aSStack_10);
  String::~String(aSStack_10);
  return CONCAT44(uStack_14,uStack_18);
}


