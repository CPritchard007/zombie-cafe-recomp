/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011bd04 GameStateCafe::setItemDescriptionText */

/* GameStateCafe::setItemDescriptionText(String) */

undefined8 GameStateCafe::setItemDescriptionText(int param_1,String *param_2,undefined4 param_3)

{
  code *pcVar1;
  int *piVar2;
  int iStack_18;
  String *pSStack_14;
  undefined4 uStack_10;
  
  piVar2 = *(int **)(param_1 + 0x108);
  pcVar1 = *(code **)(*piVar2 + 0x44);
  iStack_18 = param_1;
  pSStack_14 = param_2;
  uStack_10 = param_3;
  String::String((String *)&iStack_18,param_2);
  (*pcVar1)(piVar2,(String *)&iStack_18);
  String::~String((String *)&iStack_18);
  return CONCAT44(pSStack_14,iStack_18);
}


