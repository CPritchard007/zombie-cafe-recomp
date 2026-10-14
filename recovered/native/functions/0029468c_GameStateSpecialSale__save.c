/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029468c GameStateSpecialSale::save */

/* GameStateSpecialSale::save() */

undefined8 GameStateSpecialSale::save(void)

{
  int in_r0;
  OutputStream *pOVar1;
  undefined4 in_r1;
  int iStack_18;
  undefined4 uStack_14;
  
  iStack_18 = in_r0;
  uStack_14 = in_r1;
  ZombieCafe::save();
  String::String((String *)&iStack_18,*(String **)(DAT_002946e4 + 0x29469e));
  pOVar1 = (OutputStream *)operator_new(0x14);
  SaveDataOutputStream::SaveDataOutputStream((SaveDataOutputStream *)pOVar1,(String *)&iStack_18);
  String::~String((String *)&iStack_18);
  Cafe::serialize(*(Cafe **)(in_r0 + 0x8c),pOVar1);
  (**(code **)(*(int *)pOVar1 + 8))(pOVar1);
  (**(code **)(*(int *)pOVar1 + 4))(pOVar1);
  return CONCAT44(uStack_14,iStack_18);
}


