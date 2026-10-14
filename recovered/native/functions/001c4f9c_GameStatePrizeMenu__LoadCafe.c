/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c4f9c GameStatePrizeMenu::LoadCafe */

/* GameStatePrizeMenu::LoadCafe() */

undefined8 GameStatePrizeMenu::LoadCafe(void)

{
  int in_r0;
  InputStream *pIVar1;
  undefined4 uVar2;
  undefined4 in_r1;
  int iStack_18;
  undefined4 uStack_14;
  
  iStack_18 = in_r0;
  uStack_14 = in_r1;
  String::String((String *)&iStack_18,*(String **)(DAT_001c4fe8 + 0x1c4fa8));
  pIVar1 = (InputStream *)SaveDataInputStream::open((String *)&iStack_18);
  String::~String((String *)&iStack_18);
  uVar2 = Cafe::deserialize(pIVar1,false,(ZombieCafe *)0x0);
  *(undefined4 *)(in_r0 + 0x14) = uVar2;
  if (pIVar1 != (InputStream *)0x0) {
    (**(code **)(*(int *)pIVar1 + 0xc))(pIVar1);
    (**(code **)(*(int *)pIVar1 + 4))(pIVar1);
  }
  return CONCAT44(uStack_14,iStack_18);
}


