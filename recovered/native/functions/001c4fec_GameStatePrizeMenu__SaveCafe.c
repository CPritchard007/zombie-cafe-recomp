/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c4fec GameStatePrizeMenu::SaveCafe */

/* GameStatePrizeMenu::SaveCafe() */

undefined8 GameStatePrizeMenu::SaveCafe(void)

{
  int in_r0;
  OutputStream *pOVar1;
  undefined4 in_r1;
  int iStack_18;
  undefined4 uStack_14;
  
  iStack_18 = in_r0;
  uStack_14 = in_r1;
  ZombieCafe::save();
  String::String((String *)&iStack_18,*(String **)(DAT_001c5044 + 0x1c4ffe));
  pOVar1 = (OutputStream *)operator_new(0x14);
  SaveDataOutputStream::SaveDataOutputStream((SaveDataOutputStream *)pOVar1,(String *)&iStack_18);
  String::~String((String *)&iStack_18);
  Cafe::serialize(*(Cafe **)(in_r0 + 0x14),pOVar1);
  (**(code **)(*(int *)pOVar1 + 8))(pOVar1);
  (**(code **)(*(int *)pOVar1 + 4))(pOVar1);
  return CONCAT44(uStack_14,iStack_18);
}


